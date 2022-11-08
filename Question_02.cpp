/*Hammad Naqeeb
FA20BSCS105*/
#include<iostream>
#include<string.h>
using namespace std;
		string s;
		void Question_02()
		{
			cout<<"Enter String"<<endl;
			cin>>s;
			if(s[0]='0')
			{
			
			for(int i=0;  i<s.length();  i++)
		{
			if(s[i]=='0')
			{
				cout<<"String is RIGHT"<<endl;
				
			}
		}
	}
			
			
			else{
				cout<<"string is Not Right"<<endl;
			}
			
			
			if(s[0]='1')
			{
				cout<<"string is RIGHT"<<endl;
			}
		
		else
		{
			cout<<"string is Not Right"<<endl;
		}
	}
		

int main()
{
	Question_02();
}