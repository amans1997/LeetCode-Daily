Node* connect(Node* root, Node* parent = nullptr) {
  if (!root) return nullptr;

  // We assume that parent's level is finished on the right, and try to connect
  // root.
  //
  // First, if root is parent's left child and parent's right child exists, that's
  // the obvious root->next.
  if (parent && parent->left == root && parent->right) {
    root->next = parent->right;
  }
  // Otherwise, let's traverse parent's next chain and look for children of
  // those nodes.
  if (parent && !root->next) {
    for (auto pp = parent->next; pp; pp=pp->next) {
      if (pp->left) {
        root->next = pp->left;
        break;
      }
      if (pp->right) {
        root->next = pp->right;
        break;
      }
    }
  }

  // Right first is what justifies the assumption above.
  connect(root->right, root);
  connect(root->left, root);

  return root;
}
