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
    int countNodes(TreeNode* root) {
        queue<TreeNode*>q;
        if(root==nullptr){
            return 0;
        }
        q.push(root);
        int count=0;
        TreeNode* temp;
        while(!q.empty()){
            temp=q.front();
            q.pop();
            count+=1;
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        return count;
    }
    
};