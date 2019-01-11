#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
//using std::vector;

long long max_dot_product(vector<int> a, vector<int> b) {
  // write your code here
int len = a.size();
vector<int> c;
vector<int> d;
int a_index,b_index;

for(int j=0;j<a.size();j++){
int a_max = -pow(10,5);
int b_max = -pow(10,5);
    for(int i=0;i<a.size();i++){
      if(a_max<a[i]){
        a_max = a[i];
        a_index = i;
      }
    }

    for(int i=0;i<b.size();i++){
      if(b_max<b[i]){
        b_max = b[i];
        b_index = i;
      }
    }

    a.erase(a.begin() + a_index);
    b.erase(b.begin() + b_index);

    c.push_back(a_max);
    d.push_back(b_max);
}

  long long result = 0;
  for (size_t i = 0; i < len; i++) {
    result += ((long long) c[i]) * d[i];
  }
  return result;
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
