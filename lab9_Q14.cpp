/*14. [STRING] Create a string and store your name in it. Use a loop to print
 string character by character using the normal index method as well as the
 pointer method. */
//library
#include<iostream>
using namespace std;
//main function
int main()
{
char name[15]={'R','.','P','.','S','i','n','g','h'};
//pointer
char *x;
// normal index method 
cout<<"print the array elements with normal index method :"<<endl;
	//using'for' loops
	for(int i=0;name[i]!='\0';i++)
	{
	cout<<name[i];
        cout <<endl;
// pointer method 
cout<<"print the array elements with pointer method :"<<endl;
//pointer
x=name;
   	//using'for' loops
	for(int i=0;*x!='\0';i++){
	cout<<*x;
	x++;}
}
//terminating program
return 0;
}
