//Q16
// library
#include<iostream>
using namespace std;
//main function
int main(){
//declaring an  array
char c[20],*a,*b,i=0;
cout<<"\n Input a String less than 20 elements "<<endl;
cin>>c;
while(c[i]!='\0')
	i++;
	b=&c[i-1];
while(*b!=c[0])
	{	
	a=b; 
	while(*a!='\0')
		{
		cout<<" "<<*a;
		a++;
		}
	cout<<endl;
	b--;
	}
while(*b!='\0')
	{
	cout<<" "<<*b;
	b++;
	}
	cout<<endl;

//terminating 
return 0;
}
