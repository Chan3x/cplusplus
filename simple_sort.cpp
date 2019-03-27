#include "iostream"
#include "math.h"

using namespace std;

int main () {

    bool done;
    int arraySize , k , sw , row , col;
    

    cout << "  tqven iyenebt sortirebis programas \n gtxovt airchiot sasurveli servisi" << endl;
    tryagain :
    cout << " [ 1 ]. masivis dalageba zrdadobit" << endl;
    cout << " [ 2 ]. masivis dalageba klebadobit" << endl;
    cout << " [ 3 ]. matricis mwkrivebis dalageba zrdadobit" << endl;
    cout << " [ 4 ]. matricis mwkrivebis dalageba klebadobit" << endl;
    cout << " [ 5 ]. matricis svetebis dalageba zrdadobit" << endl;
    cout << " [ 6 ]. matricis svetebis dalageba klebadobit" << endl;
    cin >> sw ;

    if(sw == 1)
    {
        cout << "sheiyvanet masivis sigrdze : " ;
        cin >> arraySize;

        int a[arraySize];

        for(int i = 0; i < arraySize; i++)
        {
            cout << "a [ " << i+1 << " ] : ";
            cin >> a[i];
        }

        cout << " mimdinareobs sortireba -->"<< endl;

        for(int n = 1 ; n < arraySize ; n ++)
        {      
            done = true ;
            for(int i = 0 + n ; i < arraySize ; i++ )
            {
                if(a[n-1] > a[i])
                {
                    k = a[n-1];
                    a[n-1] = a[i];
                    a[i] = k;

                    done = false;
                    
                }
                for(int j = 0 ; j < arraySize ; j++)
                {
                    cout << a[j] << "\t" ;
                    if(j == arraySize - 1) cout << endl;
                }  
            }

            if(done) break;
        }

        cout << " saboloo shedegi -->"<<endl;

        for(int i = 0 ; i < arraySize ; i++)
        {
            cout << a[i] << "\t" ;

            if(i == arraySize - 1) cout << endl;
        }
        cout << "gmadlobt rom sargeblobt chveni servisit" << endl;
        goto tryagain;
    }
    else if(sw == 2)
    {
        cout << "sheiyvanet masivis sigrdze : " ;
        cin >> arraySize;

        int a[arraySize];

        for(int i = 0; i < arraySize; i++)
        {
            cout << "a [ " << i+1 << " ] : ";
            cin >> a[i];
        }

        cout << " mimdinareobs sortireba -->"<< endl;

        for(int n = 1 ; n < arraySize ; n ++)
        {      
            done = true ;
            for(int i = 0 + n ; i < arraySize ; i++ )
            {
                if(a[n-1] > a[i])
                {
                    k = a[n-1];
                    a[n-1] = a[i];
                    a[i] = k;

                    done = false;
                    
                }
                for(int j = 0 ; j < arraySize ; j++)
                {
                    cout << a[j] << "\t" ;
                    if(j == arraySize - 1) cout << endl;
                }  
            }

            if(done) break;
        }

        cout << " saboloo shedegi -->"<<endl;

        for(int i = 0 ; i < arraySize ; i++)
        {
            cout << a[i] << "\t" ;

            if(i == arraySize - 1) cout << endl;
        }
        cout << "gmadlobt rom sargeblobt chveni servisit" << endl;
        goto tryagain;
    }
    else if(sw == 3 )
    {
        cout << "sheiyvanet matricis mwkrivis raodenoba : " ;
        cin >> row;

        cout << "sheiyvanet matricis svetis raodenoba : " ;
        cin >> col;

        int a[row][col];
        for (int r = 0 ; r < row ; r++)
        {
            for (int c = 0 ; c < col ; c++)
            {
                cout << "a [ " << r+1 << " ][ " << c+1 << " ] : ";
                cin >> a[r][c];
            }
        } 
        cout << " shetanili matrica " << endl ;
        for (int r = 0 ; r < row ; r++)
        {
            for (int c = 0 ; c < col ; c++)
            {
                cout << a[r][c] << " \t";
            }
            cout << endl;
        }
        cout << "mimdinareobs sortireba " << endl;
        for (int c = 0 ; c < col ; c ++)
        {
            for (int n = 1 ; n < row ; n ++)
            {
                done = true;
                for (int i = 0 + n ; i < row ; i ++ )
                {
                    if(a[n-1][c] > a[i][c])
                    {
                        k = a[n-1][c];
                        a[n-1][c] = a[i][c];
                        a[i][c] = k ;

                        done = false;
                    }
                }
                for (int r = 0 ; r < row ; r ++ )
                {
                    for (int c = 0 ; c < col ; c ++ )
                    {
                        cout << a[r][c] << " \t";
                    }
                        cout << endl;
                }
                cout << endl;
            }
            if(done) break;
        }
        cout << " saboloo shedegi " << endl ;
        for (int r = 0 ; r < row ; r++)
        {
            for (int c = 0 ; c < col ; c++)
            {
                cout << a[r][c] << " \t";
            }
            cout << endl;
        }
        cout << "gmadlobt rom sargeblobt chveni servisit" << endl;
        goto tryagain;
    }
    else if(sw == 4 )
    {
        cout << "sheiyvanet matricis mwkrivis raodenoba : " ;
        cin >> row;

        cout << "sheiyvanet matricis svetis raodenoba : " ;
        cin >> col;

        int a[row][col];
        for (int r = 0 ; r < row ; r++)
        {
            for (int c = 0 ; c < col ; c++)
            {
                cout << "a [ " << r+1 << " ][ " << c+1 << " ] : ";
                cin >> a[r][c];
            }
        } 
        cout << " shetanili matrica " << endl ;
        for (int r = 0 ; r < row ; r++)
        {
            for (int c = 0 ; c < col ; c++)
            {
                cout << a[r][c] << " \t";
            }
            cout << endl;
        }
        cout << "mimdinareobs sortireba " << endl;
        for (int c = 0 ; c < col ; c ++)
        {
            for (int n = 1 ; n < row ; n ++)
            {
                done = true;
                for (int i = 0 + n ; i < row ; i ++ )
                {
                    if(a[n-1][c] < a[i][c])
                    {
                        k = a[n-1][c];
                        a[n-1][c] = a[i][c];
                        a[i][c] = k ;

                        done = false;
                    }
                }
                for (int r = 0 ; r < row ; r ++ )
                {
                    for (int c = 0 ; c < col ; c ++ )
                    {
                        cout << a[r][c] << " \t";
                    }
                        cout << endl;
                }
                cout << endl;
            }
            if(done) break;
        }
        cout << " saboloo shedegi " << endl ;
        for (int r = 0 ; r < row ; r++)
        {
            for (int c = 0 ; c < col ; c++)
            {
                cout << a[r][c] << " \t";
            }
            cout << endl;
        }
        cout << "gmadlobt rom sargeblobt chveni servisit" << endl;
        goto tryagain;
    }
    else if(sw == 5)
    {
        cout << "sheiyvanet matricis mwkrivis raodenoba : " ;
        cin >> row;

        cout << "sheiyvanet matricis svetis raodenoba : " ;
        cin >> col;

        int a[row][col];
        for (int r = 0 ; r < row ; r++)
        {
            for (int c = 0 ; c < col ; c++)
            {
                cout << "a [ " << r+1 << " ][ " << c+1 << " ] : ";
                cin >> a[r][c];
            }
        } 
        cout << " shetanili matrica " << endl ;
        for (int r = 0 ; r < row ; r++)
        {
            for (int c = 0 ; c < col ; c++)
            {
                cout << a[r][c] << " \t";
            }
            cout << endl;
        }
        cout << "mimdinareobs sortireba " << endl;
        for (int r = 0 ; r < row ; r ++)
        {
            for (int n = 1 ; n < col ; n ++)
            {
                done = true;
                for (int i = 0 + n ; i < col ; i ++ )
                {
                    if(a[r][n-1] > a[r][i])
                    {
                        k = a[r][n-1];
                        a[r][n-1] = a[r][i];
                        a[r][i] = k ;

                        done = false;
                    }
                }
                for (int r = 0 ; r < row ; r ++ )
                {
                    for (int c = 0 ; c < col ; c ++ )
                    {
                        cout << a[r][c] << " \t";
                    }
                        cout << endl;
                }
                cout << endl;
            }
            if(done) break;
        }
        cout << " saboloo shedegi " << endl ;
        for (int r = 0 ; r < row ; r++)
        {
            for (int c = 0 ; c < col ; c++)
            {
                cout << a[r][c] << " \t";
            }
            cout << endl;
        }
        cout << "gmadlobt rom sargeblobt chveni servisit" << endl;
        goto tryagain;
    }
    else if(sw == 6)
    {
        cout << "sheiyvanet matricis mwkrivis raodenoba : " ;
        cin >> row;

        cout << "sheiyvanet matricis svetis raodenoba : " ;
        cin >> col;

        int a[row][col];
        for (int r = 0 ; r < row ; r++)
        {
            for (int c = 0 ; c < col ; c++)
            {
                cout << "a [ " << r+1 << " ][ " << c+1 << " ] : ";
                cin >> a[r][c];
            }
        } 
        cout << " shetanili matrica " << endl ;
        for (int r = 0 ; r < row ; r++)
        {
            for (int c = 0 ; c < col ; c++)
            {
                cout << a[r][c] << " \t";
            }
            cout << endl;
        }
        cout << "mimdinareobs sortireba " << endl;
        for (int r = 0 ; r < row ; r ++)
        {
            for (int n = 1 ; n < col ; n ++)
            {
                done = true;
                for (int i = 0 + n ; i < col ; i ++ )
                {
                    if(a[r][n-1] < a[r][i])
                    {
                        k = a[r][n-1];
                        a[r][n-1] = a[r][i];
                        a[r][i] = k ;

                        done = false;
                    }
                }
                for (int r = 0 ; r < row ; r ++ )
                {
                    for (int c = 0 ; c < col ; c ++ )
                    {
                        cout << a[r][c] << " \t";
                    }
                        cout << endl;
                }
                cout << endl;
            }
            if(done) break;
        }
        cout << " saboloo shedegi " << endl ;
        for (int r = 0 ; r < row ; r++)
        {
            for (int c = 0 ; c < col ; c++)
            {
                cout << a[r][c] << " \t";
            }
            cout << endl;
        }
        cout << "gmadlobt rom sargeblobt chveni servisit" << endl;
        goto tryagain;
    } else {
        cout << " gtxovt airchiot sasurveli operacia 1 dan 6 is chatvlit" << endl;
        goto tryagain;
    }
    return 0;
}