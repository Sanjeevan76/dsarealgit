#include<iostream>
#include<vector>
using namespace std;


class Node{
    public:
    int data;
    Node* right;
    Node* left;

    Node(int val)
    {
        data=val;
        right=left=NULL;
    }
};

Node* insert(Node* root,int val)
{
    if(root==NULL)
    {
        return new Node(val);
    }

    if(val<root->data)
    {
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);
    }
    return root;

}

Node* buildTree(vector<int>arr)
{
    Node* root=NULL;
    for(int val:arr)
    {
        root=insert(root,val);
    }

    return root;

}

void inorder(Node* root)
{
    if(root==NULL) {
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


int main()
{
    vector<int>arr={3,2,5,6,1,7};
   Node* root= buildTree(arr);
  inorder(root);
}
