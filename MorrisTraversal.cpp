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

        //MORRIS TRAVERSAL - O(N) TIME AND O(1) SPACE
        TreeNode* cur = root;  //cur pointer points to root
        vector<int> ans;  //store the inorder
        
        while(cur!=NULL){ //current will become null at the last node extreme right of right subtree
            if(cur->left==NULL){
                ans.push_back(cur->val);  //left does not exists
                cur=cur->right;
            }
            else 
            {
                //if left exits
                //new pointer prev pointing to cur's left
                TreeNode* prev = cur->left;

                //go to extreme right of left subtree
                while(prev->right!=NULL && prev->right!=cur)
                    prev=prev->right;

                //if we break out of this loop
                //2 conditions must have happened

                //1. either prev->right is null  , in that case point it to cur
                if(prev->right == NULL){
                    prev->right=cur;
                    cur=cur->left;
                }
                else //2. prev->right already points to cur , then remove that link 
                {
                    prev->right=NULL;
                    ans.push_back(cur->val);
                    cur=cur->right;

                }
            
            }
        }
        return ans;
        
    }
};
