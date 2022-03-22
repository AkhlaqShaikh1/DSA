#include <iostream>
#include <vector>

using std::vector;

int optimal_weight(int W, const vector<int> &w) {
  //write your code here
  int current_weight = 0;
  int n = w.size();
  int dp[W+1][n+1];
  for(int i=0; i < n ;i++){
      dp[0][i] = 0;
      dp[n][0] =0;
  }

  for (int i = 1; i < n; i++)
  {
    /* code */
    for (int j = 1; i < W; j++)
    {
      /* code */
      dp[j][i] = dp[j][i-1];
      if(w[i]<=j){
        int val = dp[j-w[i]][i-1] + val;
        if(dp[j][i] < val){
          dp[j][i] = val;
        }
      
      }
    }
    
  }
  

  // for (size_t i = 0; i < w.size(); ++i) {
  //   if (current_weight + w[i] <= W) {
  //     current_weight += w[i];
  //   }
  // }
  // return current_weight;
  return dp[W][n];
}

int main() {
  int n, W;
  std::cin >> W >> n;
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    std::cin >> w[i];
  }
  std::cout << optimal_weight(W, w) << '\n';
}
