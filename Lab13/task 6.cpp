#include <iostream>
using namespace std;

int main()
{
    int n=12;          
    void* ptr = &n;     

    
    cout << "Value of integer using void pointer: "<< *(int *)ptr << endl;

    return 0;
}

