// #include<iostream>
// using namespace std;
// int main()
// {
//     int x=10;
//     int* ptr=&x;
//     int** ptr2=&ptr;

//     cout<<*(ptr2)<<endl;
//     cout<<&ptr<<endl;
//     return 0;
// }

// #include <iostream>

// int main() {
//     const int val = 50;
//     const int* cPtr = &val;

//     // *cPtr = 60; // Line A
//     std::cout << *cPtr << std::endl;

//     return 0;
// }

// #include <iostream>

// int main() {
//     int arr[3] = {10, 20, 30};
//     int* p = arr;

//     std::cout << *(p + 1) << std::endl;
//     std::cout << p[2] << std::endl;

//     return 0;
// }

// #include <iostream>

// void modifyValue(int* val) {
//     *val = 25;
// }

// int main() {
//     int num = 10;
//     modifyValue(&num);
//     std::cout << num << std::endl;

//     return 0;
// }

// #include <iostream>

// class MyObject {
// public:
//     MyObject() {
//         std::cout << "Constructor called" << std::endl;
//     }
//     ~MyObject() {
//         std::cout << "Destructor called" << std::endl;
//     }
// };

// int main() {
//     MyObject obj1;
  
//     std::cout << "End of main" << std::endl;
//     return 0;
// }


#include <iostream>

class Grandparent {
public:
    Grandparent() { std::cout << "Grandparent Constructor" << std::endl; }
};

class Parent : public Grandparent {
public:
    Parent() { std::cout << "Parent Constructor" << std::endl; }
};

class Child : public Parent {
public:
    Child() { std::cout << "Child Constructor" << std::endl; }
};

int main() {
    Child c;
    return 0;
}
