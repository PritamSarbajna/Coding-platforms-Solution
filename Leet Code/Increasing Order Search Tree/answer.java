/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    TreeNode ans = new TreeNode(-1);
    public void solve(TreeNode root){
        if(root == null){
            return;
        }
        solve(root.left);
        root.left = null;
        ans.right = root;
        ans = root;
        solve(root.right);
    }
    public TreeNode increasingBST(TreeNode root) {
        TreeNode curr = ans;
        solve(root);
        return curr.right;
    }
}
