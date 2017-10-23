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
	int i,j,k,n;
	char c;
	cin>>n;
	for(i = n;i > 0;i--)
	{
		for(j = n; j > n-i;j--)
		{
			c =  '1'+i-1;
			cout<<c<<" ";
		}
		cout<<endl;
	}
    
    return 0;
}