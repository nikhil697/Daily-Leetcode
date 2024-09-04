class Solution {
public:
    int countNodes(TreeNode* root) {
    //     queue<TreeNode*>q;
    //     if(root==nullptr){
    //         return 0;
    //     }
    //     q.push(root);
    //     int count=0;
    //     TreeNode* temp;
    //     while(!q.empty()){
    //         temp=q.front();
    //         q.pop();
    //         count+=1;
    //         if(temp->left) q.push(temp->left);
    //         if(temp->right) q.push(temp->right);
    //     }
    //     return count;
    // }
        if(!root) return 0;
        return(1+countNodes(root->left)+countNodes(root->right));
    }
    
};