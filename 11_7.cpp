#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;
int main(){
    const int n = 5;
    double mas[100]; int k = 0;
    srand(time(NULL));
    ofstream file;
    file.open("text.txt");
    cout << "vivod 50 chisel \n";
    cout << "vvod el mas: \t";
    for (int i = 0; i < n; i++) {
    cin >> mas[i];
    file << mas[i] << " ";}
    
    for (int i = 0; i < n; i++) {
        if (mas[i] < 0)
            ++k;}
    cout << "otritsatelnih " << k;
   file.close();
   
   ofstream f;
 
   return 0;
}