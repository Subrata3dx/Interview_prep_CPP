#include<iostream>
using namespace std;
#include<queue>
#include<string>


class Solution {

public:

//structure for

struct TreeNode
{
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// Function to insert a new node in the binary tree in level order
void fillTree(TreeNode* root, const string data)
{
    TreeNode* newNode;

    if(data=="null") //to work with "null" data had to make separate entry
    {
        newNode = new TreeNode();
    }

    else
    {
        newNode = new TreeNode(stoi(data));
    }


    // If tree is empty, the new node becomes the root
    if (root == nullptr) {
        root = newNode;
        return;
    }

    // Using a queue to insert nodes in the level order
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty())
    {
        TreeNode* temp = q.front();
        q.pop();

    // Checking if left child exists, if not insert here
        if (temp->left == nullptr) {
            temp->left = newNode;
            break;
        }

        else
        {
            q.push(temp->left);
        }

        // Check if right child exists, if not insert here
        if (temp->right == nullptr) {
            temp->right = newNode;
            break;
        }

        else
        {
            q.push(temp->right);
        }
    }
}


//function that determines the depth of the tree

    int maxDepth(TreeNode* root) {
        if(root==nullptr)
        return 0;

        else
        {
            int lft = maxDepth(root->left);
            int rgt = maxDepth(root->right);
            return (max(lft, rgt) + 1); //1 is for the case when no left or right links exist
        }

    }
};


int main()
{
    Solution so;

    //inputs: I had to convert the input to string because of "null" in the given input
    //string nodesVals[] = {"3","9","20","null","null", "15", "7"};


    //string nodesVals[] = {"3","9","20","null","null","15","7"};
    string nodesVals[] = {"1","null","2"};

    string s = nodesVals[0];
    Solution::TreeNode tn = Solution::TreeNode(stoi(s));

    for(int i = 1; i<sizeof(nodesVals)/sizeof(nodesVals[0]); i++)
    so.fillTree(&tn, nodesVals[i]);
    cout<<"Maximum depth is:" <<so.maxDepth(&tn);

}

