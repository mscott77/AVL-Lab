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

    myTree->add(1);
    myTree->add(2);
    myTree->add(3);
    myTree->add(4);
    myTree->add(5);
    myTree->add(6);
    myTree->add(10);
    myTree->add(8);
    myTree->add(7);
    myTree->add(9);
    myTree->remove(11);
    myTree->remove(10);
    myTree->remove(9);
    myTree->remove(6);

    




    delete myTree;
    
    
}
