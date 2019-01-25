#include "node.h"
#include <iostream>

class Tree 
{
public:
    Tree()
    {
        rootNode = nullptr;
    }

    void InsertRootNode(int data)
    {
        rootNode = new node();
        rootNode->Value = data;
        rootNode->left = nullptr;
        rootNode->right = nullptr;
    }

    void Insert(int data)
    {
        node* newNode = new node();
        newNode->Value = data;
        newNode->left = nullptr;
        newNode->right = nullptr;

        Current = rootNode;

        while(Current)
        {
            Parent = Current;

            if((newNode->Value) > (Current->Value))
            {
                Current = Current->right;
            }
            else    
                Current = Current->left;
        }

        if((newNode->Value) < (Parent->Value))
        {
            Parent->left = newNode;
        }
        else
            Parent->right = newNode;

       // std::cout << "Value: " << data << " has been added to the tree!" << std::endl;
    }

    bool Search(int data)
    {
        Current = rootNode;

        while(Current != NULL)
        {
            if(Current->Value == data)
            {
                return true;
            }
            else 
            {
                Parent = Current;
                
                if((data) > (Current->Value))
                {
                    Current = Current->right;
                }
                else Current = Current->left;
            }
        }
        return false;
    }

    void PrintDepthTree(node* tempPtr)
    {
        if (!tempPtr) 
        {
            return;
        }

        PrintDepthTree (tempPtr->left);
        
        std::cout << tempPtr->Value << std::endl;

        PrintDepthTree (tempPtr->right);
    }

 node* Current;
 node* Parent;
 node* rootNode;
};