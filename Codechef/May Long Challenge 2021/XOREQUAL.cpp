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


#define sf(a) scanf("%d",&a)
#define ssf(a,b) scanf("%d %d",&a,&b)
#define pf(a) printf("%d\n",a)
#define foreach(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)

#define forn(i,a,b) for(int (i) = (a); (i) < (b); ++(i))  
#define rforn(i,a,b) for(int (i) = (a)-1; (i) >= (b); --(i))  

#define mod 1000000007

using namespace std;
typedef long long ll;

	 ll power(long long x,ll y,ll temp)
      {
         ll count = 1; 
         x = x % temp;
         if(x==0) return 0;
         while(y>0)
        {
         if(y & 1)
         count = (count*x) %temp;

         y = y>>1;
         x = (x*x) % temp;
        }
        return count;
        
      }

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll T;
	cin>>T;
	while(T--)
	{
	   ll N;
         cin>>N;
         ll result = power(2,N-1,mod);
	   cout<<result<<'\n';
      }
      return 0;
}
	   

