/*q12.Write a program to declare two variables a,b and a pointer variable p (all integer type). Try to understand pointers while doing this.
Point p to a. And store the value pointed by p in b. Print the values of a, b and *p.
Assign values a=2 and b = 3. Print the values of a, b and *p.
Now point p to b. Print the values of a, b and *p.*/

// library
#include<iostream>
using namespace std;
//main function
int main(){
int a,b,*c;
//intialising  pointer c
c=0;
//fixing a and b
a=2;
b=3;
//see what are value before pointing
cout<<"The initial value = "<<"a = "<<a<<", b = "<<b<<" *c = "<<c<<endl;
//c pointing  b 
c=&b;
// then value stored to 'a' now
a=*c;
//see what are value after pointing
cout<<"The final value = "<<"a = "<<a<<", b = "<<b<<" *c = "<<c<<endl;
//ending the program (terminating)
return 0;
}
