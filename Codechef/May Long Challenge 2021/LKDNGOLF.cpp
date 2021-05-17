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

#define forn(i,a,b) for(int (i) = (a); (i) < (b); ++(i))  
#define rforn(i,a,b) for(int (i) = (a)-1; (i) >= (b); --(i))  


using namespace std;
typedef long long ll;


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int T;
	cin>>T;
	while(T--)
	{
	   int N,x,k; 
	   cin>>N>>x>>k;
	   int res = (N+1) % k;;
         if (x%k ==0 || x%k == res)
         {
             cout << "YES"<<'\n';
         }
         
         else
         {
             cout << "NO"<<'\n';
         }
      }
}
