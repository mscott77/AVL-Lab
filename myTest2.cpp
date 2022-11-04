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
    myTree->add(7);
    myTree->add(8);
    myTree->add(9);
    myTree->add(10);
    myTree->add(11);
    myTree->add(12);
    myTree->add(13);
    myTree->add(14);
    myTree->add(15);
    myTree->add(16);
    myTree->add(17);
    myTree->add(18);
    myTree->add(19);
    myTree->add(20);
    
    myTree->remove(8);
    myTree->remove(7);
    myTree->remove(6);
    myTree->remove(5);

    



    cout << "end of program" << endl;
    delete myTree;
    
    
}
