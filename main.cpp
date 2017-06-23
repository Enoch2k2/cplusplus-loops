#include <iostream>
using namespace std;

int main(){
  int i = 0;
  while(i < 5){
    cout << "i's value in the while loop is : " << i + 1 << endl;
    i++;
  }
  int count = 5;
  for (size_t i = 0; i < count; i++) {
    cout << "i's value in the for loop is :" << i + 1 << endl;
  }
  return 0;
}
