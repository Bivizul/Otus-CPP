#include <iostream>

using namespace std;

void foo(int *pa){
    (*pa)++;
}

void foo2(int *pa){
    *pa = 2;
}

void foo3(int &pa){
    pa = 3;
}

int main(int argc, char const *argv[])
{
    int a = 0;
  

    cout<<a<<endl;
    foo(&a);
    cout<<a<<endl;
    foo2(&a);
    cout<<a<<endl;
    foo3(a);
 
    cout<<a<<endl;
    cout<<"size "<<sizeof(a)<<endl;

    int arr[]{76,5,8,3,8,0};


    for(int i; i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}


