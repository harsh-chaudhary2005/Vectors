#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> vec(5, 0);
  cout << "size = " << vec.size() << endl;
  vec.push_back(25);
  vec.push_back(35);
  vec.push_back(45);
  vec.push_back(255);
  cout << "after push back size = "<< vec.size()<< endl;

  vec.pop_back();
  cout << "after pop back size = " << vec.size() << endl;
  cout << vec.front() << endl;
 cout << vec.back() << endl ;
 cout << vec.at(7) << endl;
  for(int i : vec){  // for each loop : here i is not index but the value at the respective index
    cout << i << endl;
  }
  return 0;
}