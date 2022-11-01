
#pragma once

#include <iostream>
#include "NodeInterface.h"

using namespace std;

class Node : public NodeInterface {
    public:
        int data;
        Node* left;
        Node* right;


        //--------------------------------------------------CONSTRUCTOR-------------------------------------------------
        // if no paramaters are provided for left or right children, set them to NULL by default
        Node(const int& the_data , Node* left_val = NULL , Node* right_val = NULL)
        {
            //cout << "In Node constructor" << endl;
            data = the_data;
            left = left_val;
            right = right_val;

        }
        //--------------------------------------------------DESTRUCTOR-------------------------------------------------
        ~Node() // this function appears to not really be used...
        {
            //cout << "In Node destructor" << endl;
        }

        /*
        * Returns the data that is stored in this node
        *
        * @return the data that is stored in this node.
        */
        int getData() const;

        /*
        * Returns the left child of this node or null if it doesn't have one.
        *
        * @return the left child of this node or null if it doesn't have one.
        */
        Node* getLeftChild() const;

        /*
        * Returns the right child of this node or null if it doesn't have one.
        *
        * @return the right child of this node or null if it doesn't have one.
        */
        Node* getRightChild() const;


        int getHeight();

};