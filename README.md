# Pointer to Pointer Project

### Objective

In this project, our main goal is to understand how to use the **pointer to pointer** concept in C++.

### Problem

Create two pointer to pointer variables, `ptr2` that references `ptr1`, `ptr3` that references `ptr2`, and use `ptr3` to update the value of `num`.

### Implementation
- Write your code in the main function.
  
```cpp
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
```
