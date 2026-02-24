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
void dfs(TreeNode* root,vector<string>& ans,string& s){
    if(!root){
        return;
    }
    s.push_back(root->val+'0');
    if(!root->left && !root->right){
        ans.push_back(s);
    }
    else{
    dfs(root->left,ans,s);
    dfs(root->right,ans,s);
    }
    s.pop_back();
}
    int sumRootToLeaf(TreeNode* root) {
        vector<string> ans;
        string s="";
        dfs(root,ans,s);
        int sum=0;
        for(int i=0;i<ans.size();i++){
            int a=stoi(ans[i],nullptr,2);
            sum+=a;
        }
        return sum;  
    }
};