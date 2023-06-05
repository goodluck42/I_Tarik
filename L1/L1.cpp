#include <iostream>


void foo(int* ptr)
{
    std::cout << &ptr << '\n';

    //*a = 5;
}

void boo(int a)
{
    a = 42;
}

int main()
{
    
    /* {
        int* val = new int;

        *val = 42; // dereference

        std::cout << &val << '\n'; // address of 
        std::cout << val << '\n'; // address of

        delete val;
    }*/

    /*int myarr[3];

    myarr[0] = 42;
    myarr[1] = 13;
    myarr[2] = 12;


    std::cout << *(myarr + 1) << '\n';*/

    int* arr = new int[3]; // 0x60

    // First variant
    /* {
        

        *arr = 42; // arr[0] = 42;
        arr += 1; // 0x64
        *arr = 13; // arr[1] = 13;
        arr += 1; // 0x68
        *arr = 12; // arr[2] = 12;
        arr -= 2; // <- -8bytes

        // delete[] arr;
    }*/

    // Second variant
    
    /* {
        *(arr + 0) = 42; // arr[0] = 42;
        *(arr + 1) = 13; // arr[1] = 13;
        *(arr + 2) = 12; // arr[2] = 12;

        std::cout << *(arr + 0) << '\n';
        std::cout << *(arr + 1) << '\n';
        std::cout << *(arr + 2) << '\n';

        std::cout << 1[arr] << '\n';
        std::cout << arr[1] << '\n';

    }*/

    {
        int value = 42;

        int* ptr = &value;

        foo(ptr);

        std::cout << &ptr << '\n';
    }

    {
        int val = 90;

        boo(val);

        std::cout << val;
    }
}