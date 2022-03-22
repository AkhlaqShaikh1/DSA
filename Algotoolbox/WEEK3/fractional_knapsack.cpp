#include <bits/stdc++.h>
using namespace std;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values)
{
  // double value = 0.0;

  // write your code here
  //   vector<double> val_per_unit;
  //   for(int i=0; i < weights.size();++i){
  //     double value_per_unit = (double) (values[i]/weights[i]);
  //     val_per_unit[i] = value_per_unit;
  //   }
  // //smaller value in the begining;
  // sort(val_per_unit.begin(),val_per_unit.end());
  double max = 0, value = 0;
  int pos = 0;
  int w_sum = 0, v_sum = 0;
  double u[weights.size()];
  for (int i = 0; i < weights.size(); i++)
  {
    u[i] = (double)values[i] / (double)weights[i];
    w_sum += weights[i];
    v_sum += values[i];
  }

  if (w_sum <= capacity)
    return v_sum;

  while (capacity > 0)
  {
    //safe move
    //taking the max value per unit kg
    for (int i = 0; i < weights.size(); i++)
    {
      if (max < u[i])
      {
        max = u[i];
        pos = i;
      }
    }
    max=0;
    if (weights[pos] <= capacity)
    {
      capacity = capacity - weights[pos];
      value += values[pos];
      u[pos] = 0;
    }
    else if (weights[pos] >=capacity)
    {
      value += u[pos] * capacity;
      capacity = 0;
      u[pos] = 0;
    }
  }

  return value;
}

int main()
{
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++)
  {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
