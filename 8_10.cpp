#include <iostream>
#define N 4
using namespace std;

int main()
{
   

    int A[N][N] = { };

    //ввід
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cin>>A[i][j];
        }
    }
    
    for (int i = 0;i < N; i++)  
    {
        for (int j = 0; j< N; j++)   
            cout << A[i][j] << " ";
        cout << endl;
    }

    cout << endl << endl;
    

    for (int i= 0; i < N-i; i++) 
        for (int j = 0; j < N; j++)
        {
           
            int temp = A[i][j];
            A[i][j] = A[N - i - 1][N - j- 1];
            A[N - i - 1][N - j - 1] = temp;
        }
    // вивід
    for (int i= 0; i < N; i++)  
    {
        for (int j= 0; j < N; j++)   
            cout << A[i][j] << " ";
        cout << endl;
    }

    return 0;
}