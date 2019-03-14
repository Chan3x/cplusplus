#include "iostream"
#include "math.h"
#include "time.h"

using namespace std;



int main () {
    
    clock_t t;
	t = clock();

    bool done;
    int arraySize , save , shedareba = 0;

    cout << "sheiyvanet masivis sidide :  " ;
    cin >> arraySize;

    int a[arraySize];

    srand (time(NULL));

    cout  << "---------------------randomad dagenerirebuli ricxvebi -----------------------------"<< endl;
    for (int i = 0; i < arraySize; i ++)
    {
        a[i] = rand() % 100 ; // random funqcia 0  -  100 mde  ricxvi
            
        cout << a[i] << "\t";

        if(i == arraySize -1) cout << endl;
    }
    cout << "---------------------- mimdinareobs sortireba -------------------------------------"<< endl;
    for (int step = 1 ; step < arraySize ; step ++)
    {
        done = true;

        for (int i = 0 ; i < arraySize - 1; i++)
        {
            if(a[i] > a[i+1])
            {
                save = a[i+1];
                a[i+1] = a[i];
                a[i] = save;

                done = false;
                shedareba +=1;
            }

        }
        if(done) cout << "---------------------- saboloo shedegi ------------------------------------------"<<endl;

        for (int i = 0; i < arraySize; i++)
        {
            cout << a[i] << "\t";
        }
        
        cout << "\n ............................................................................" << endl;
            
        if(done) {t = clock() - t; cout << "masivis sidide :  " << arraySize <<"   /   shedareba : " << shedareba << "   /   daxarjuli dro  wami  : " << t*1.0/CLOCKS_PER_SEC << "   /   shedareba/wami  : " << shedareba/(t*1.0/CLOCKS_PER_SEC) <<"   /   wami/shedareba  : " << (t*1.0/CLOCKS_PER_SEC)/shedareba << endl; break;} // ciklidan gamoyvana

    }
    

     return 0;


}