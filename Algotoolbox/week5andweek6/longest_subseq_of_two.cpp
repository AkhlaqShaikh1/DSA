#include <bits/stdc++.h>
using namespace std;

int lcs2(vector<int> &a, vector<int> &b) {
  int n = a.size(),m = b.size();  
  vector<vector<int>> c(n+1,vector<int>(m+1));
  for(int i=0; i <=n;i++){
      for(int j=0; j<=m;j++){
          if(i == 0 || j==0){
              c[i][j] =0;
          }
          else if(a[i-1] == b[j-1]){
              c[i][j] = c[i-1][j-1]+1;
          }
          else{
              c[i][j] = max(c[i-1][j],c[i][j-1]);
          }
      }
  }

  

  return c[n][m];
}

int main() {
  size_t n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  size_t m;
  std::cin >> m;
  vector<int> b(m);
  for (size_t i = 0; i < m; i++) {
    std::cin >> b[i];
  }

  std::cout << lcs2(a, b) << std::endl;
}
