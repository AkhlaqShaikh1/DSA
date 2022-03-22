#include <cstdlib>
#include <ctime>
#include <climits>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


long long max_dot_product(vector<int> a, vector<int> b) {
  // write your code here
    (a.begin(), a.end());
    sort(b.begin(), b.end());
    long long sum = 0;
    for(int i = 0; i < a.size(); i++)
        sum += a[i] * b[i];
    return sum;
}

int main() {
  size_t n;
  std::cin >> n;
  vector<int> a(n), b(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  for (size_t i = 0; i < n; i++) {
    std::cin >> b[i];
  }
  std::cout << max_dot_product(a, b) << std::endl;
}
