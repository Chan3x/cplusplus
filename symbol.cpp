#include "iostream"
#include "math.h"

using namespace std;

void symbol (char style, int number , int space) {
  for (size_t i = 0;i<number;i++){
    if (!isnan(space)&&space>0){
      for (size_t i = 0; i < space; i++) {
        cout<<" ";
      } // end for
    } // end if
    cout<<style;
    if(i ==(number-1)){
      cout<<endl;
    } // end if
  } // end first for
} // end function

int main () {
  /*
  symbol('1',2,3) funqciis meshveobit shegidzliat gamoataninot
  1)any kinde of symbol
  2)how much do you want to print 1) symbol
  3)space between symbols
  */
  symbol('_',15,1);
  symbol('*',15,1);
  symbol('=',15,1);
  cout<<" here you go !  "<<endl;
  symbol('_',15,1);
  symbol('#',15,1);
  system("pause");
  return 0;
}
