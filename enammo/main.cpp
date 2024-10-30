#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};

struct Node* pWalk;
struct Node* parent;
struct Node* stack[10];
int top=-1;

void countNodes(struct Node* root)
{
    int count=0;
    struct Node* current=root;
    while(1)
    {
        if(current->left==NULL && current->right==NULL)
        {
            count++;
        }
        while(current!=NULL)
        {
            top++;
            stack[top]=current;
            current=current->left;
        }
        if(current==NULL && top!=-1)
        {
            current=stack[top]->right;
            count++;
            top--;
        }
        else
        {
            break;
        }
    }
    cout<<"The number of leaf nodes: "<<count;
}

int main()
{
     struct Node* root=new Node(100);
    root->left=new Node(50);
    root->right=new Node(300);
    root->left->left=new Node(4);
    root->left->right=new Node(60);
    countNodes(root);
}
