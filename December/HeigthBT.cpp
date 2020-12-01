// Given the root of a binary tree, return its maximum depth.

// A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

class Solution {
public:
    int maxDepth(TreeNode* root) {
        
        if (root==NULL){
            return 0;
        }
        
        int lefttree=maxDepth(root->left);
        int righttree=maxDepth(root->right);
        if(lefttree>righttree)
        {
            return lefttree+1; //(+1 for root)
        }
        else return righttree+1;
    }
};