#include <cstdlib>
#include <iostream>
#include <ctime>
#define N 5 //рядки
#define M 8 //стовпці

using namespace std;
void main()
{
    system("chcp 1251"); system("cls");

    int arr[N][M] = {};


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            arr[i][j] = rand() % 20;

        }
    }


    cout << "Початкова матриця" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
        {

            cout << arr[i][j] << "\t";
        }

        cout << endl;
    }
    cout << "\n" << endl;
    int k=0;

    cout << "Матриця без 0 в рядках" << endl;
    for (int i = 0; i < N-1 ; i++) { 
        for (int j = 0; j < M; j++) {
            if (arr[i][j] != 0) {
                k=i;
            }
            arr[i][j] = arr[k+1][j];
            cout << arr[i][j] << "\t";
            

        }
        cout << endl;
    }
}