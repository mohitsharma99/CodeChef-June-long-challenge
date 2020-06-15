#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
	for(int a=0; a<x; a++)
	{
		int n; cin>>n;
		int arra[n];
		for(int i=0; i<n; i++)
		 cin>>arr[i];
		 
		 int c5=0; int c10=0;
		 for(int i=0; i<n; i++)
		 {
		 	if(arra[i]==5)
		 	  c5++;
		 	else if(arra[i]==10)
		 	{
		 		if(c5>0)
		 		{
		 			c5--;
		 			c10++;
				 }
				 else{
				 	cout<<"NO"<<endl;
				 	break;
				 }
			 }
			 
			 else
			 {
			 	if(c10>0)
			 	c10--;
			 	else if(c5>=2)
			 	 c5=c5-2;
			 	else
			 	{
			 		cout<<"NO"<<endl;
			 		break;
				 }
			 }
			 
			 if(i==n-1)
			 cout<<"YES"<<endl;
		 }
	}
	
	return 0;
}
