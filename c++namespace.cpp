#include <iostream>
 namespace first{
    
    int x = 1;
}
namespace second{
    int x = 2;
}
int main() {
    using namespace first;
    // Namespace = provides a solution for preventing name conflicts in large projects
    //Each entity needs to be placed in a namespace to avoid name conflicts
     // A name space allows for identically named entities to co-exist in different namespaces.
using std::cout;
cout <<   second::x << '\n';
    return 0;
}