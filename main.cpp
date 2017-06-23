#include <iostream>
using namespace std;

int main(){
  // while loop
  int i = 0;
  while(i < 5){
    cout << "i's value in the while loop is : " << i + 1 << endl;
    i++;
  }
  // for loop
  int count = 5;
  for (size_t i = 0; i < count; i++) {
    cout << "i's value in the for loop is :" << i + 1 << endl;
  }
  // do while loop, iterative
  int a = 0;
  do {
    cout << "a's value in the do while loop is :" << a + 1 << endl;
    a++;
  } while(a < 5);
  // do while loop, non-iterative
  int b = 15;
  do {
    cout << "this line will only print once because 15 is not less than 10" << endl;
    b++;
  } while(b < 10);
  return 0;
}
