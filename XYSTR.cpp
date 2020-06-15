#include<iostream>
using namespace std;
int main()
{
  int x;
  cin>>x;
  for(int i=0; i<x; i++){
  	 int par=0;
	    string stri;
      cin>>stri;
      int n = stri.length();
      for(int j=0; j<n-1; j++){
      	
      	if(stri[j]!=stri[j+1])
      	{
      		par++;
      		j++;
		  }
	  }
	  
	  cout<<par<<endl;
     
  }
  return 0;
 
}

