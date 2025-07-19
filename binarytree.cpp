#include<iostream>
#include<vector>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
    
    node(int val)
    {
        data=val;
        left=right=NULL;
    }
};

static int idx=-1;
node* build_tree(vector<int> tree)
{
    idx++;
    if(tree[idx]==-1)
    {
        return NULL;

    } 

    node* root=new node(tree[idx]);
    root->left=build_tree(tree);
    root->right=build_tree(tree);

    return root;
}

void preorder(node * root)
{
    if(root==NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }

   
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(node* root)
{
    if(root==NULL)
    {
        return;
    }

   
    postorder(root->left);
   
    postorder(root->right);
    cout<<root->data<<" ";
}

//dfs

void dfs(node* root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);// this help to print element level wise

    while(!q.empty())
    {
        node* curr=q.front();
        q.pop();
        if(curr==NULL)// this help to print element level wise
        {
            if(!q.empty())
            {
                cout<<endl;
                q.push(NULL);
                continue;
            }
            else{
                break;
            }
        }
        cout<<curr->data<<" ";
        if(curr->left!=NULL)
        {
            q.push(curr->left);
        }
        if(curr->right!=NULL)
        {
            q.push(curr->right);
        }
    }
}

int main()
{
    vector<int> tree={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    
    node* root=build_tree(tree);
    // cout<<root->data;
    cout<<"preorder"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"inorder"<<endl;
    inorder(root);
    cout<<endl;
    cout<<"postorder"<<endl;
    postorder(root);
    cout<<endl;
    dfs(root);

}