#include<iostream>
using namespace std;

int main()
{
	int t,i;
	cin>>t;
	
	for(int a=0; a<t; a++)
	{
		long long int ts;
		cin>>ts;
		long long int p=ts;
		
		if(ts%2!=0)
		  cout<<ts/2<<endl;
		  
		  else
		  {
		  	i=1;
		  	while(p%2==0)
		  	{
		  		p=p/2;
		  		i=i*2;
			}
			
			cout<<(ts/i)/2<<endl;
			
			
		  }
	}
}
