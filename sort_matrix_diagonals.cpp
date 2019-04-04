    #include "iostream"
    #include "math.h"
    #include "ctime"
    #include "time.h"

    using namespace std;
    int main (){

    inMagain :

        clock_t t;
        t = clock();

        int k , row , col;
        int retry , comp = 0;

        cout << "How many rows ? : " ;
        cin >> row;

        cout << "How many colums ? : " ;
        cin >> col;

        int a[row][col];
        srand(time(NULL));
        for (int r = 0 ; r < row ; r++) // matrix input by rand() function 0 to 100
        {
            for (int c = 0 ; c < col ; c++)
            {
                a[r][c] = rand() % 100;
            }
        } 
        // for (int r = 0 ; r < row ; r++)  // matrix input by hand
        // {
        //     for (int c = 0 ; c < col ; c++)
        //     {
        //         cout << "a [ " << r+1 << " ][ " << c+1 << " ] : ";
        //         cin >> a[r][c];
        //     }
        // } 
        cout << "\tFilled matrix\n" << endl ;
        for (int r = 0 ; r < row ; r++)
        {
            for (int c = 0 ; c < col ; c++)
            {
                cout << a[r][c] << " \t";
            }
            cout << endl;
        }
        cout << "\n\tSorting process\n" << endl;
        if (row == col)
        {
            cout << "\tSort matrix main diagonal\n" << endl;
            for (int i = 1 ; i < row   ; i ++)
            {
                for (int s = 0 + i ; s < row ; s ++ )
                {   
                    if(a[i-1][i-1] > a[s][s]) // check if a is more then b and swap
                    {
                        k = a[i-1][i-1];
                        a[i-1][i-1] = a[s][s];
                        a[s][s] = k;
                        comp +=1;
                    }
                    for (int r = 0 ; r < row ; r ++ )  // matrix output after swap in cycle with /t
                    {
                        for (int c = 0 ; c < col ; c ++ )
                        {
                            cout << a[r][c] << " \t";
                        }
                            cout << endl;
                    }
                    cout << endl;
                }

            }
            cout << "\tSort matrix second diagonal \n " << endl;  
            for (int r = 0 , c = (col - 1) ; r < row , c != -1 ; r ++ , c --)
            {
                for (int i = 1 + r , j = c - 1 ; i < row , j != -1 ; i ++ , j -- )
                {
                    if (a[r][c] > a[i][j]) // check if A is more then B and swap 
                    {
                        k = a[r][c];
                        a[r][c] = a[i][j];
                        a[i][j] = k;
                        comp +=1;
                    }
                    for (int f = 0 ; f < row ; f ++ ) // matrix output after swap in cycle with /t
                    {
                        for (int o = 0 ; o < col ; o ++ )
                        {
                            cout << a[f][o] << " \t";
                        }
                            cout << endl;
                    }
                    cout << endl;
                } 

            }

        } else {
            goto inMagain;
        }
        cout << "\tFinal values \n" << endl ;
        for (int r = 0 ; r < row ; r++)  // matrix print with /t 
        {
            for (int c = 0 ; c < col ; c++)
            {
                cout << a[r][c] << " \t";
            }
            cout << endl;
        }

        {t = clock() - t; cout << "Matrix :  " << row << " X " << col <<"   /   compare : " << comp << "   /   used time sec  : " << t*1.0/CLOCKS_PER_SEC << "   /   comp/sec  : " << comp/(t*1.0/CLOCKS_PER_SEC) <<"   /   sec/comp  : " << (t*1.0/CLOCKS_PER_SEC)/comp << endl;} // performance

        cout << "\nThanks for using our service" << endl;
        cout << "Try again ? 1 / 0  : " ;
        cin >> retry;
        
        if ( retry )  goto inMagain; else return 0; 
    
    }
