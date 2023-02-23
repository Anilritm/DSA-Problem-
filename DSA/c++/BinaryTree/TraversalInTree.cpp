#include<bits/stdc++.h>
using namespace std;
// Inorder Traversal = ( LNR )Left to NULL to Right 
// PreOrder Traversal = ( NLR ) NULL to Left to Right 
// Post Order traversal = ( LRN ) Left to Right to NULL 

// class of node 
class Node
{
   public:
      int data ;
      Node* left;
      Node* right ;

    // constructor of Node 
    Node(int d)
    {
        this->data = d;
        this->left =NULL;
        this->right = NULL;

    }

};

// function for build tree 

Node* buildTree(Node* root)
{
    cout<<"Enter the data for Node "<<endl;

    int data ;
    cin>>data ;
    root = new Node(data);

    // for NULL Node 

    if(data == -1)
    {
        return NULL ;

    }

    // for left tree node data inserting in tree
    cout<<" Enter the data for inserting in left "<<data<<endl;

    root->left = buildTree(root->left);

    // for right tree node data inserting in right of 
    
    cout<<"Enter the data for inserting in right "<<data<<endl;

    root->right = buildTree(root->right);

}

// BFS or  level order Traversal 

void levelOrderTravesal(Node* root)
{
    // make a queue
    queue<Node*>q;
    q.push(root);
    q.push(NULL);



    while(!q.empty())
    {
        Node* temp = q.front();
        // cout<<temp->data<<" ";
        q.pop();
        if(temp = NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);

            }


        }
        else
        {

             cout << temp->data<<" ";

             if(temp->left)
        {
            q.push(temp->left);

        }

          if(temp->right)
        {
            q.push(temp->right);
            
        }


        }
         

    }

}

// Inorder Travesal 

void InorderTravesal(Node* root )
{
    // base case 
    if(root == NULL)
    {
        return ;

    }
    // recursivecall for LNR 
    InorderTravesal(root->left);
     
    cout<<root->data<<" ";


    InorderTravesal(root->right);

}

// preOrder travesal 

void PreorderTravesal(Node* root )
{
     // base case 
    if(root == NULL)
    {
        return ;

    }
    // recursivecall for NLR 
    cout<<root->data<<" ";

    PreorderTravesal(root->left);
     

    InorderTravesal(root->right);

}

int main()
{
     Node* root = NULL;

    // create a tree 
     // 1 3 7 -1 -1 5 17 -1 -1 -1 
    
    root = buildTree(root);

    // levelOrder
    cout<<"Print level Order traversal"<<endl;
    levelOrderTravesal(root);

// Inorder travesal 
cout<<"Inorder tarvesal is: ";

InorderTravesal(root);

// pre order 

 PreorderTravesal(root);



return 0;


}