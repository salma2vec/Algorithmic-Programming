#include<iostream>
#pragma GCC optimize("Ofast")
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

#define pi pair<int,int>
#define vi vector<int>
#define all(v) v.begin(),v.end()

#define pb push_back
#define mp make_pair
#define sz(a) (int)(a).size()

#define forn(i,a,b) for(int (i) = (a); (i) < (b); ++(i))  
#define rforn(i,a,b) for(int (i) = (a)-1; (i) >= (b); --(i))  
#define init0(a) memset((a),0,sizeof(a))
#define fast_cin()


using namespace std;
typedef long long ll;
typedef double db;
ll MOD = 998244353;
double eps = 1e-12;

	   string str[3];
	   int temp1, temp2, temp0;
	   void count()
          {
          temp1 = temp2 = 0;
          for (int i = 0; i < 3; i++)
          for (int j = 0; j < 3; j++)
             {
	         if (str[i][j] == 'X')
	         temp1++;
	         if (str[i][j] == 'O')
	         temp2++;
             }
          temp0 = 9 - temp1 - temp2;
          }

         bool result(char sym) 
         {
          if (str[0][0] == sym && str[0][0] == str[1][1] && str[1][1] == str[2][2])
          return 1;
          if (str[0][2] == sym && str[0][2] == str[1][1] && str[1][1] == str[2][0])
          return 1;
          for (int i = 0; i < 3; i++)
              {
               if (str[i][0] == sym && str[i][0] == str[i][1] && str[i][1] == str[i][2])
	         return 1;
               if (str[0][i] == sym && str[0][i] == str[1][i] && str[1][i] == str[2][i])
	         return 1;
              }
  return 0;
          }
         
	   int check()
         {
          if (temp1 < temp2)
          return 3;
          if (temp1 > temp2 + 1)
          return 3;
          bool res1 = result ('X');
          bool res2 = result ('O');
          if (res1 && res2)
          return 3;
          if (res1 && temp1 == temp2)
          return 3;
          if (res2 && temp1 > temp2)
          return 3;
          if (res1 || res2)
          return 1;
          if (temp0 == 0)
          return 1;
          return 2;
         }

void solve()
{
  for (int i = 0; i < 3; i++)
  cin >> str[i];
  count ();
  cout << check() <<'\n';
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

  fast_cin();
  int tries;
  cin >> tries;
  for (int test = 1; test <= tries; test++)
    solve();
  return 0;
}

