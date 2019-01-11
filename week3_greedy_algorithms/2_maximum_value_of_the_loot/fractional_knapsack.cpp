#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;

double get_optimal_value(int capacity, vector<int> weights,
                         vector<int> values) {
  double value = 0.0;
  int length = weights.size();
  double a = 0.0;
  int index = 0;
  vector<double> density(length);
   int m = length;

  for (int i = 0; i < length; i++) {
    density[i] = (double)values[i]/weights[i];
  }

  while(m>0){
    if (capacity <= 0) {
      return value;
    }

    double max = 0.0;
    for(int j=0;j<length;j++){
      if(weights[j]>0 && max<density[j]){
      max = density[j];
      index = j;
      }
    }

    if(weights[index]>=capacity){
        a = capacity;
    }
    else{
        a = weights[index];
    }


    value = value + double(a * density[index]);
    weights[index] = weights[index] - a;
    capacity = capacity - a;
    m--;
  }

  // write your code here
  //std::cout<<value;
  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
