#include <iostream>

#include "Node.h"
#include "AVL.h"

using namespace std;

int main(){

    cout << "Hello World!" << endl;

    AVL *myTree = NULL;
    myTree = new AVL();
    
    cout << "doing a print command, but nothign should come out because the tree is empty" << endl;
    myTree->PrintInOrder();

    cout << endl;//----------------------------test the add and print functions

    myTree->add(5);
    myTree->add(3);
    myTree->add(7);
    myTree->PrintInOrder();
    
    cout << endl;//----------------------------test the add function on a pre-existing number

    myTree->add(5);
    myTree->PrintInOrder();

    cout << endl;//----------------------------test the clear function
    
    cout << "clearing the tree" << endl;
    myTree->clear();
    cout << "doing a print command, but nothing should come out because the tree just got cleared" << endl;
    myTree->PrintInOrder();
    
    cout << endl;//----------------------------add some new stuff, then test the remove function 

    myTree->add(2);
    myTree->add(1);
    myTree->add(8);
    myTree->add(9);
    myTree->add(10);
    myTree->add(4);
    myTree->add(5);
    myTree->add(7);
    myTree->add(6);
    myTree->PrintInOrder();

    // leaf case
    cout << "removing Node with data member \'1\'" << endl;
    myTree->remove(1);
    myTree->PrintInOrder();

    //one child case
    cout << "removing Node with data member \'9\'" << endl;
    myTree->remove(9);
    myTree->PrintInOrder();

    //two child case
    cout << "removing Node with data member \'8\'" << endl;
    myTree->remove(8);
    myTree->PrintInOrder();




    delete myTree;
    
    
}
