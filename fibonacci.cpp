#include "iostream"
#include "math.h"
using namespace std;

int UI (double nextFiboNum){
  cout << nextFiboNum << endl;
}

int fibonacci(int index){
  double n1 , n2 , nextFiboNum;
  // literals
  nextFiboNum = 0;
  n1 = 0;
  n2 = 1;
  
  if (index > 0){
    for (int i = 0; i <= index; i++) {
      nextFiboNum = n1 + n2;
      n1 = n2;
      n2 = nextFiboNum;
      UI (nextFiboNum);
    }
  }else {
    return 0;
  }
}

int main (){
  int index;
  cout << "fibonacci numbers" << endl;
  cout << "input n number = ";
  cin >> index;
  fibonacci(index);
  cout << "thanks for using our code ;)" << endl;
  return 0;
}
