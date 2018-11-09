//library
#include<iostream>
using namespace std;
//main function
int main()
{
char c[20],*a,*b;
cout<<"\n Input a string of less than 20 characters "<<endl;
cin>>c;
b=c;
//using while
while(*b!='\0')
	{
    	a=b;
	//using while    
    	while(*a!='\0')
        	{
        	cout<<" "<<*a;
       		a++;
        	}
    	cout<<endl;
    	b++;
    	}
//terminating   
return 0;
}
