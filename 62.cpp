  /*
	input = 3;
	output:
	      C 
	    C B 
	  C B A 
	C B A @ 
	  C B A 
	    C B 
	      C 
*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long

int main()
{
	fast_io;
	int i,j,k,r = 1,n,q;
	char c;
	cin>>n;
	r = 2*n+1;
	for(i = 1,k=1;i <= r ; i++)
	{
		if (i > n+1)
			k = 2*(n + 1) - i;
		else
			k = i;
		for(q = 0;q<=n-k;q++)
			cout<<"  ";
		for(j = n;k > 0;j--,k--)
		{
			c = 'A'+j-1;
			cout<<c<<" ";
		}
		cout<<endl;
	}
    
    return 0;
}