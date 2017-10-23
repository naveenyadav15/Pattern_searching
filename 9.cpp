/*
	input = 5;
	output:
		E D C B A
		E D C B A
		E D C B A
		E D C B A
		E D C B A
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
	for(i=0;i<n;i++)
	{
		for(j=n;j>0;j--)
		{
			c = 'A'+j -1;
			cout<<c<<" ";
		}
		cout<<endl;
	}
    
    return 0;
}