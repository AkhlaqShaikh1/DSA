#include <bits/stdc++.h>

using std::vector;

/* int get_majority_element(vector<int> &a, int left, int right) {
  if (left == right) return -1;
  if (left + 1 == right) return a[left];
  //write your code here
  while(left<right){
      int mid = left + ((left+right)/2);
      if(mid == a[mid]){
        left = right-1;
      }
  }
  return -1;
}
 */
int get_majority_element(vector<int> &a, int left, int right){
  if (left == right) return -1;
  if (left + 1 == right) return a[left];
  int cand=0,count=0;
  for(int i=0; i < right;i++){
      if(a[i] == a[cand]){
        count++;
      }
      else{
        count--;
      }

      if(count ==0){
        cand =i;
        count =1;
      }
  }
  count=0;
  for(int i=0; i < right;i++){
    if(a[i] == a[cand]){
      count++;
    }
  }
  if(count> (int)right/2){
      return a[cand];
  }
  else{
    return -1;
  }
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  std::cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';
}
