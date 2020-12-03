/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
      TreeNode *rez = NULL;                        // our answer
      
      if(root){      
        stack <TreeNode*> ps;                        //stack for inorder traversal
        TreeNode *tmp = new TreeNode();        //make node before answer (false root) 
        rez = tmp;
      
        while(!ps.empty() || root!= NULL){
          if(root != NULL){
            ps.push(root);
            root=root->left;
          }
          else{
            root = ps.top();ps.pop();
            
            TreeNode *cur = new TreeNode(root->val);     //make new tree
            tmp->right = cur;
            tmp = tmp->right;
            
            root = root->right;
          }
        }
        rez=rez->right;    //delete false root
      }
      
      return rez;
    }
};
