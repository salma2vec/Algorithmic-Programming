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
	   int N,count=0;
	   cin>>N;
        while(N>0){
            int square= (int(sqrt(N)))*(int(sqrt(N)));
            N-= square;
            count++;
        }
        cout<<count<<'\n';
    }
    return 0;
}
