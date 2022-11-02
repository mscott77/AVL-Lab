#pragma once

#include "AVLInterface.h"
#include "Node.h"

using namespace std;

class AVL : public AVLInterface {
    protected:
        Node *root = NULL; // start off the root to point to NULL since there are no items in the list an initialization

    private:
        // recursive helper function for add
        bool insert(Node *& localRoot , int data);

        // recursive helper functions for remove
        bool erase(Node*& local_root,const int& item);
        // helper recursive function
        void replace_parent(Node*& old_root,Node*& local_root);

        // recursive helper function for clear()
        void eraseTree(Node *& localRoot);

        // recursive helper function for printIntOrder()
        void InOrder(Node *n);

        void Rebalance(Node*& localRoot);
        void rotateRight(Node*& n);
        void rotateLeft(Node*& n);
        int calcHeight(Node* localRoot);
        int getBalance(Node* localRoot);

    public:
        AVL()
        {
            cout << "In AVL constructor" << endl;

        }
        ~AVL()
        {
            cout << "In AVL destructor" << endl;
            clear();
        }

        //Please note that the class that implements this interface must be made
        //of objects which implement the NodeInterface

        /*-------------------------------------------------------------------------------------------------
        * Returns the root node for this tree
        *
        * @return the root node for this tree.
        */
        Node* getRootNode() const;

        /*-------------------------------------------------------------------------------------------------
        * Attempts to add the given int to the AVL tree
        *
        * @return true if added
        * @return false if unsuccessful (i.e. the int is already in tree)
        */
       // wrapper function
        bool add(int data);

        /*---------------------------------------------------------------------------------------------------
        * Attempts to remove the given int from the AVL tree
        *
        * @return true if successfully removed
        * @return false if remove is unsuccessful(i.e. the int is not in the tree)
        */
        //wrapper function
        bool remove(int data);


        /*----------------------------------------------------------------------------------------------------
        * Removes all nodes from the tree, resulting in an empty tree.
        */
        void clear();

        //------------------------------------------custom memberfunctions-------------------------------------

        // function to print the tree using in order traversal
        void PrintInOrder();
};