/*
	input = 5;
	output:
		5 5 5 5 5
		  4 4 4 4 
		    3 3 3 
		      2 2
		        1
*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long

int main()
{
	fast_io;
	int i,j,k,r,n;
	char c;
	cin>>n;
	for(i = n,k=0;i > 0;i--,k++)
	{
		for(j = 0 ;j < 2*k;j++)
			cout<<" ";
		for(r = 1;r <= n-k;r++)
		{
			c = '1' + i - 1;
			cout<<c<<" ";
		}
		cout<<endl;
	}
    
    return 0;
}