// treeApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include"binarytree.h"
void display(int x) {
    cout << x << "\n";

}
int main()
{
    Tree<int> t;
    create_tree(&t);
    int k [] = {32,43,22,6,99,-5};
    tree_insertion_rec(&t, &k[3]);
    tree_insertion_rec(&t , &k[2]);
    tree_insertion_rec(&t , &k[1]);
    tree_insertion_rec(&t, &k[5]);
    tree_insertion_rec(&t, &k[0]);
    travers_tree_rec2(&(t.Root), &display);
    cout << "the tree size = " << tree_size(&t)<<"\n";
    cout << "the tree depth = " << tree_depth(&t) << "\n";
    system("pause>0");
    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
