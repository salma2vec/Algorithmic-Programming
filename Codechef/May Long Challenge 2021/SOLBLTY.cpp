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
	int T;
	cin>>T;
	while(T--)
	{
	  ll X,A,B; 
	   cin>>X>>A>>B;
	   int res = A + (100-X) * B;
	   int temp; 
	   temp = res * 10;
             cout <<temp<<'\n';
      }
}
