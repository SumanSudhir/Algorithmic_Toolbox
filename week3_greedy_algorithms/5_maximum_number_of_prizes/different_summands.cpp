#include <iostream>
#include <vector>

using std::vector;

vector<int> optimal_summands(int n) {
  vector<int> summands;
  int a=n-1;
  int b = 1;

  if(n== 1 || n==2){
    summands.push_back(n);
  }

  else{
    while(a>b){
      summands.push_back(b);
      b++;
      a = a-b;
    }
    summands.push_back(b+a);
  }

  //write your code here
  return summands;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
}
