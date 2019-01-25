#include <iostream>
#include "Tree.h"

int main()
{
    Tree t;
    int rNode;
    int node;
    int sNode;

    std::cout << "Please enter a root Node Value: " << std::endl;
    std::cin >> rNode;
    t.InsertRootNode(rNode);

    std::cout << "Enter 5 values to add to tree: " << std::endl;
    for(int i=0; i < 5; i++)
    { 
      std::cin >> node;  
      t.Insert(node);
    }

    std::cout << "Enter a value to search for in the tree: " << std::endl;
    std::cin >> sNode;
    if(t.Search(sNode) == true)
    {
        std::cout << sNode << " FOUND!" << std::endl;
    }
    else std::cout << sNode << " NOT FOUND!" << std::endl;

    std::cout << "The tree is as follows: (left to right) " << std::endl;
    t.PrintDepthTree(t.rootNode);
}