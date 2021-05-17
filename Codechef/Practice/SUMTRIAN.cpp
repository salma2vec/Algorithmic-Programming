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
	  int n;
        cin>>n;
        int arr[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<=i; j++)
            {
                cin>>arr[i][j];
            }
        }
        for(int i=n-1; i>=0; i--)
        {
            for(int j=0; j<=i; j++)
            {
                if(arr[i][j]>arr[i][j+1])
                {
                    arr[i-1][j]+=arr[i][j];
                }
                else
                {
                    arr[i-1][j]+=arr[i][j+1];
                }
            }
        }
        cout<<arr[0][0]<<'\n';
    }
    return 0;
}
