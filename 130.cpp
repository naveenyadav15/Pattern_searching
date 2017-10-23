/*
	input : h = 5,w = 9;
	output:
	  		*
			  *
				*
				  *
	* * * * * * * * *
				  *
				*
			  *
			*

*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long

int main()
{
	fast_io;
	int i,j,k,h,w;
	cin>>h>>w;
	for(i=1;i<2*h;i++)
	{
		if(i>h)
			k = 2*h -i;
		else
			k = i;
		if(i == h)
		{
			for(j=1;j<w;j++)
				cout<<"* ";
			cout<<endl;
			continue;
		}
		for(j=1;j<(w-h)+k-1;j++)
			cout<<"  ";
		cout<<"*\n";
	}
    
    return 0;
}