#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr1 = &num;
    
    cout << "Value of num *before* updating: " << num << endl;
    
    /* Your code here */
    
    cout << "Value of num *after* updating: " << num << endl;
    return 0;
}
