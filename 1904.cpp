#include <iostream>

using namespace std;

#define MOD 15746

int main() {
  int n;
  cin >> n;

  int dp[1000002] = {0, };

  dp[0] = 0;
  dp[1] = 1;
  dp[2] = 2;
  for(int i =3; i<=n; i++){
    dp[i] = (dp[i-1] + dp[i-2]) % MOD ;  
  }

  cout<< dp[n];
  return 0;
} 