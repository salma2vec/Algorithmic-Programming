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
	   int x,y,xr,yr,D; 
	   cin>>x>>y>>xr>>yr>>D;
	   int food = x/xr;
	   int water = y/yr;
	   int min= std::min(food, water);
         if (min >= D)
         {
             cout << "YES"<<'\n';
         }
         
         else
         {
             cout << "NO"<<'\n';
         }
      }
}
