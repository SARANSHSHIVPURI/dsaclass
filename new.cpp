#include <bits/stdc++.h>
using namespace std;
#define ll long long  

int recur1(int n) {
 if(n == 0) return 0;
 cout << n << " ";
 recur1(n-1);
}

int recur2(int even) {
 if(even == 0) return 0;
 if(even % 2 == 0) cout << even << " ";
 recur2(even-1);
}
 
int main()
{
   int n, even;
   cin >> n >> even;
      recur1(n);
      cout << endl;
      recur2(even);
      return -1;
}