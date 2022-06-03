#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>

using namespace std;

int words(string a)
{
    string b;
    int k = 0;
    a += ' ';
    for (int i = 0; i < a.length(); i++)
    {
        b += a[i];
        if ((!(isalpha(a[i]))))
        {
            b.pop_back();
            if (b != "")
            {
                k++;
            }
            b = "";
        }
    }
    return k;
}



int main()
{
    system("chcp 1251"); system("cls");
    ifstream fin("text.txt");
    ofstream fout1("парні.txt");
    ofstream fout2("непарні.txt");
    int k;
    string a;
    string rows[100];
    k = 0;
    while (getline(fin, a))
    {
        rows[k] = a;
        k++;
    }
    
    
    
    for (int i = 0; i < k; i++)

    {
        if (words(rows[i]) % 2 == 0) {
            fout1 << rows[i]<< endl;
    }
        else
        {
            fout2 << rows[i] << endl;
        }
    }
    fin.close();
    fout1.close();
    fout2.close();
    return 0;
}