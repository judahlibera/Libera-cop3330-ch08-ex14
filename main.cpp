#include "include.h";

using namespace std;

void function(const int x){
    cout << "works " << x << endl;
    //x = 2; //compiler error;
    // the value being passed as a const means the function can skip a variable copy.
    // So long as the value passed as a const doesn't get altered, it won't cause an issue.
    // One reason for doing this is that to some people it looks nicer and more readable. It could also prevent you from
    // forgetting you needed the value to remain the same and end up changing it somewhere in the function.
}

void function2(int x){
    cout << "also works " << x << endl;
    x = 2;
    cout << "this works too when x isn't a const " << x << endl;
}

int main() {
    cout << "Hello, World!" << endl;
    function(3);
    function2(3);
    return 0;
}
