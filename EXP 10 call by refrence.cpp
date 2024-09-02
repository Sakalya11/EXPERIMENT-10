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
