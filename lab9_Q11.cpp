/* Q.11. Write a program to declare variables of all predefined sizes and declare 
corresponding pointers (of all predefined types). Print out the sizes of each of
 variables and pointer variables. (Hint: use sizeof) */

//  library
#include <iostream>
using namespace std;
//main function
int main(){

//declaring the variables and  pointers
int intz,*I;
char charz,*C;
float floatz,*F;
double doublez,*D;
bool boolz,*B;
intz= 14;
charz='b';
floatz= 3.14;
doublez= 3.14789654;
boolz = 1;
//pointers
I=&intz;
C=&charz;
F=&floatz;
D=&doublez;
B=&boolz;
//giving the cout
cout<<"The size of int variable = "<<sizeof(intz)<<" and  pointer = "<<sizeof(I) <<endl;
cout<<"The size of character variable = "<<sizeof(charz)<<" and its pointer = "<<sizeof(C) <<endl ;
cout<<"The size of float pointer variable = "<<sizeof(floatz)<<" and its pointer = "<<sizeof(F) <<endl;
cout<<"The size of double variable = "<<sizeof(doublez)<<" and its pointer = "<<sizeof(D) <<endl;
cout<<"The size of bool variable = "<<sizeof(boolz)<<" and its pointer = "<<sizeof(B) <<endl;
//termination
return 0;
}
