#pragma once

class node
{
public:
    node()
    {
        left = nullptr;
        right = nullptr;
    }
    
 int  Value;
 node* left;
 node* right;
};