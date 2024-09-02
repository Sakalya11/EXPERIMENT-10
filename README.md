# CDS-experiment-10

AIM:-To study and implement Pointer Operations (call by value and call by reference)<br>

Software used :- VS code <br>

Theory:-<br>
There are to ways to call a variable to a function for various operations<br>

1). Call by value:-When a pointer is supplied to a function in C++, "call by value" refers to the process of making a copy of the pointer rather than the real object it points to. Since the function uses this copied pointer, modifications to the pointer itself—such as changing its address—won't have an impact on the original pointer used by the calling function. Changes made to the data at that address, nevertheless, will be mirrored outside of the function because the pointer still points to the same memory location.<br>

2). Call by reference:-When a pointer is sent to a function by reference in C++, the function receives a reference to the original pointer itself. This is known as "call by reference" with pointers. This enables the function to alter the data that the pointer points to as well as the pointer itself (e.g., changing where it points). The original pointer and the data in the calling function will be impacted by any modifications made to either the data or the pointer.<br>





    
