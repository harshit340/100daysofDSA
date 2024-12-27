#include <iostream>
#include<queue>
using namespace std; 

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree() {
    cout << "Enter the data for node : ";
    int data;
    cin >> data;

    // Base case for recursion
    if (data == -1) {
        return NULL;
    }

    // Creating a new node
    node* newNode = new node(data);

    cout << "Enter the data for the left child of " << data << ": ";
    newNode->left = buildTree();

    cout << "Enter the data for the right child of " << data << ": ";
    newNode->right = buildTree();

    return newNode;
}

void levelorder(node *root){
    if (root == NULL) {
        cout << "The tree is empty." << endl;
        return;
    }
          queue<node*>q;
          q.push(root);
          q.push(NULL);

          while(!q.empty()){
            node * temp = q.front();
            q.pop();

            if(temp == NULL){
                cout<<endl;

                if(!q.empty()){
                    q.push(NULL);
                }
            }else{
                cout<<temp->data<<" ";
                if(temp->left){
                    q.push(temp->left);
                }

                if(temp->right){
                    q.push(temp->right);
                }
            }
          }
}

void inorder(node * root){
    if(root == NULL){
        return;
    }
    //LNR
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node * root){
    if(root == NULL){
        return;
    }
    //NLR
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node * root){
    if(root == NULL){
        return;
    }
    //LRN
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main() {
    node* root = NULL;

    // Build the tree
    cout << "Start building the binary tree:\n";
    root = buildTree();

    levelorder(root);

    cout<<"inorder traversal ->"<<endl;
    inorder(root);
    cout<<"preorder traversal ->"<<endl;
    preorder(root);
    cout<<"postorder traversal ->"<<endl;
    postorder(root);

    return 0; 
}
