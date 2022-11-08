/*Hammad Naqeeb
FA20BSCS105*/
#include<iostream>
#include<string.h>
using namespace std;


		void Question_03(string t)
		{
		
			
		
			for(int i=0;  i<t.length();  i++)
			if(t[0]=='a'  ||t[1]=='b')
			{
				if(t[1]=='a'  || t[1]=='b'||  t[1]=='c')
				
				cout<<"String is True"<<endl;
				
			}
			else
			{
				cout<<"String is False:"<<endl;
			}
			if(t[0]=='c')
			{
				
				
				   if(t[1] == 'b' ||t[1] == 'c')
				   
				   
        {
            if(t[1] == 'a' || t[1] == 'b' || t[1] =='c')
                {
               
                }
                
                
                
            cout << "String is Right"<<endl;;
				
			}
			
			}
			
		}
		
			

int main()
{
	string t;
	cout<<"Enter String: " ;
	cin>>t;
Question_03(t);
}