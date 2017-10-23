/*
	input = 5;
	output:
		A
		B B
		C C C
		D D D D 
		E E E E E
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
	for(i = 1;i <= n;i++)
	{
		for(j = 1; j <= i;j++)
		{
			c = 'A' + i - 1;
			cout<<c<<" ";
		}
		cout<<endl;
	}
    
    return 0;
}