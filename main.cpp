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
  1)sasurveli simbolo
  2)misi raodenoba
  3)simboloebis shoris dashorebis raodenoba , 0 s tu chavwert gamotoveba agar eqneba
  */
  symbol('_',15,1);
  symbol('*',15,1);
  symbol('=',15,1);
  cout<<" aq shegidzlia igrialo ukve"<<endl;
  symbol('_',15,1);
  symbol('#',15,1);
  system("pause");
  return 0;
}
