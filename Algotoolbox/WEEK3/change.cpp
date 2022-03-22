#include <iostream>
using namespace std;

int get_change(int m) {
  //write your code here
  int n=0;
  int d1 = 1;
  int d2 = 5;
  int d3 = 10;
  while(m>0){
    if(m-d3>=0){
      m-=d3 ;
      n++;
    }
    else if(m-d2>=0){
      m -= d2;
      n++;
    }
    else if (m-d1>=0){
      m -= d1;
      n++;
    }
  }
  return n;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
