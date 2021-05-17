#include<iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <functional>
#include <numeric>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <fstream>
#include <stack>
#include <string>
#include <vector>
#include <list>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
typedef long long ll;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll T;
	cin>>T;
	while(T--)
	{
	 ll n,m,temp=0;
	 cin>>n>>m;
	 ll q[n];
	 ll i;
	 for(i=0;i<n;i++)
	 cin >>q[i];
	  for(i=0;i<n;i++)
	  {
	   if(q[i]>=m)
	   {
	    temp++;
	    q[i+1]+=(q[i]- m);
	   }
	   if(q[i]<m)
	   break;
	   }
	   if(i==n)
	   temp+=((q[n-1]-m)/m);
	   cout<<temp+1<<'\n';
	  }
	return 0;
}
