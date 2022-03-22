#include <iostream>
#include <vector>
#include <cstdlib>

using std::vector;
using std::swap;

int partition2(vector<int> &a, int l, int r) {
  int pivot = a[r];
  int start = l;
  int end = r;

  while(start<end){
    while(a[start]<=pivot){
      start++;
    }
    while(a[end]>pivot){
      end--;
    }
  if(start<end){
    swap(a[start],a[end]);
  }

  }
  swap(a[lb],a[end]);
  return end;
  // for (int i = l + 1; i <= r; i++) {
  //   if (a[i] <= x) {
  //     j++;
  //     swap(a[i], a[j]);
  //   }
  // }
  // swap(a[l], a[j]);
  // return j;
}

void randomized_quick_sort(vector<int> &a, int l, int r) {
  if (l >= r) {
    return;
  }
  else{
  // int k = l + rand() % (r - l + 1);
  // swap(a[l], a[k]);
  
  int m = partition2(a, l, r);
  randomized_quick_sort(a, l, m - 1);
  randomized_quick_sort(a, m + 1, r);
  }
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  randomized_quick_sort(a, 0, a.size() - 1);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cout << a[i] << ' ';
  }
}
