/*Hammmad Naqeeb
FA20BSCS105*/
#include<iostream>
#include<string.h>
using namespace std;
void Question_01(){

       string s;
		
		{
			cout<<"Enter String"<<endl;
			cin>>s;
			
			int c1;
			int c2;
			for(int i=0;  i<s.length();   i++)
			{
				if(s[i]=='1')
		{
						c1++;
				}
		if(s[i]=='1')
		{
		
			c2++;
				}
			}
			
			if(c1%2==0  ||  c2%2==0)
			{
				cout<<"String is Right:"<<endl;
			}
			else 
			{
				cout<<"String is Not Right:"<<endl;
			}
		}
		
}
int main()
{
	Question_01();
}