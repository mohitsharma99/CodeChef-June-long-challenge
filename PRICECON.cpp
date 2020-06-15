#include<iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	for(int a=0; a<x; a++)
	{
		int n,s;
		cin>>n>>s;
		int arr[n];
		for(int i=0; i<n; i++)
		 cin>>arr[i];
		 
		 int psum=0; int ssum=0;
		 for(int i=0; i<n; i++)
	     {
	     	psum=psum+arr[i];
	     	
	     	if(arr[i]>k)
	     	 arr[i]=k;
	     	
	     	ssum=ssum+arr[i];
		 }
		 
		 int ans=psum - ssum;
		 cout<<ans<<endl;
	}
	return 0;
}
