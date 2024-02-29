#include <iostream>
// using directive
// imports all the functions in std
// similar to python's (from std import *)
// it could lead to naming conflicts with other libraries
//using namespace std; 
// 
// from std import cout
// importing only cout
// actual prefix imports
using std::cout;

// main function
int main()
{
    // printing out to the console
    // std is a namespace
    // cout function belongs to std namespace
    // to prevent possible conflict with other cout elements
    // from other namespace or libraries?

    // namespaces allows us to group our code and prevent naming conflicts.
    // cout comes from the std namespace.

    cout << "Faisal Lawan Muhammad!\n";

    // we are returning shit
    return 0;
}
