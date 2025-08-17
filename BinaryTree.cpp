#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *right;
    Node *left;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
static int x = -1;
Node *buildtree(vector<int> vec)
{
    x++;
    if (vec[x] == -1)
    {
        return NULL;
    }
    // cout << vec[x];
    Node * root = new Node(vec[x]);
    root->left = buildtree(vec);
    root->right = buildtree(vec);

    return root;
}
void preorder(Node * root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void Inorder(Node * root){
    if(root == NULL){
        return;
    }
    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
}
void postorder(Node * root){
    if(root == NULL){
        return;
    }
    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<" ";
}
void level(Node * root){
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>0){
        Node * curr=q.front();
        q.pop();
        if(curr==NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }
            else{
                break;
            }
        }
        cout<<curr->data<<" ";
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
}
int main()
{
    vector<int> preorder1 = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node * root=buildtree(preorder1);
    // cout<<"preorder traversal "<<endl;
    // preorder(root);
    // cout<<endl<<"inorder traversal"<<endl;
    // Inorder(root);
    // cout<<endl<<"postorder traversal"<<endl;
    // postorder(root);
    level(root);
}