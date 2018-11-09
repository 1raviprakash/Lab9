/*  13. Create an array of size 10. Use a loop to print array using
the normal index method as well as the pointer method. 
*/
// library
#include<iostream>
using namespace std;
//main function
int main()
{
 //setting array arrayz
int arrayz[10]={11,25,12,35,36,38,99,14,2,1};
//pointer
int *x;
cout<<"print the array elements with normal index method"<<endl;
	//using 'for' loop
	for(int i=0;i<10;i++)
	{
   	cout<<arrayz[i]<<" "<<endl;
    	}
cout<<"print the array elements with pointer method"<<endl;
//pointer 
x=arrayz; 
    	//using 'for' loops 
    	for(int i=0;i<10;i++)
	{
    	cout<<*x<<endl;
    	x++;
   	}
    
//terminating
return 0;
}
