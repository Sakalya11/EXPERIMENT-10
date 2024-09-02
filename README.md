# CDS-experiment-10

## AIM:-To study and implement Pointer Operations (call by value and call by reference)<br>

### Software used :- VS code <br>

### Theory:-<br>
There are to ways to call a variable to a function for various operations<br>

1). Call by value:-When a pointer is supplied to a function in C++, "call by value" refers to the process of making a copy of the pointer rather than the real object it points to. Since the function uses this copied pointer, modifications to the pointer itself—such as changing its address—won't have an impact on the original pointer used by the calling function. Changes made to the data at that address, nevertheless, will be mirrored outside of the function because the pointer still points to the same memory location.<br>

2). Call by reference:-When a pointer is sent to a function by reference in C++, the function receives a reference to the original pointer itself. This is known as "call by reference" with pointers. This enables the function to alter the data that the pointer points to as well as the pointer itself (e.g., changing where it points). The original pointer and the data in the calling function will be impacted by any modifications made to either the data or the pointer.<br>

### Code
```
#include <iostream>
using namespace std;


int a,b;
void swap (int a, int b)
{
int sw;
sw = a;
a = b;
b = sw;
cout<<"Swapped Values: "<<endl;
cout<<"a: "<<a<<endl;
cout<<"b: "<<b<<endl;
}

int main()
{
int a,b;
cout<<"Using call by value: "<<endl;
cout<<"Enter a number: ";
cin>>a;
cout<<"Enter another number: ";
cin>>b;
cout<<"User Values: "<<endl;
cout<<"a: "<<a<<endl;
cout<<"b: "<<b<<endl;
swap(a,b);

}
```

### Output:
![image](https://github.com/user-attachments/assets/5c190920-4172-45e7-bf00-d3dabe23e0f7)


### Code:
```
#include <iostream>
using namespace std;

void swapr(int*& pa, int*& pb) {
int* psw;
psw = pa;
pa = pb;
pb = psw;
cout << "Swapped Pointers:" << endl;
cout << "pa points to: " << *pa << endl;
cout << "pb points to: " << *pb << endl;
}

int main() {
int a, b;
int *pa, *pb;
cout << "Using call by reference with pointers:" << endl;
cout << "Enter a number: ";
cin >> a;
pa = &a;
cout << "Enter another number: ";
cin >> b;
pb = &b;
cout << "User Values:" << endl;
cout << "a: " << a << endl;
cout << "b: " << b << endl;
swapr(pa, pb);
cout << "After swapping in main:" << endl;
cout << "pa points to: " << *pa << endl;
cout << "pb points to: " << *pb << endl;
}
```

### Code:
![image](https://github.com/user-attachments/assets/bfc2d9ea-615a-4d02-b8e9-111b9399e794)


### Conclusion:
 In this experiment we learnt to use call by value and call by reference pointers in c++



    
