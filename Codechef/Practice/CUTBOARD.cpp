#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int T;
	cin>>T;
	while(T--)
	{
	   int N,M;
	    cin>>N>>M;
	    int noOfSquares = (N-1)*(M-1);
	    cout<<noOfSquares<<'\n';
	}
	return 0;
}
