#include <iostream>
#include <fstream>
using namespace std;

const int SIZE = 1000;
string tab[SIZE];

void zadanie1()
{
    int length;
    string w1, w2;
    for (int i=0; i<SIZE; i++)
    {
        length=tab[i].length();
        if (length % 2 !=0) continue;
        w1 = tab[i].substr(0, length / 2);
        w2 = tab[i].substr(length / 2, length / 2);
        if (w1 == w2)
        {
            cout << tab[i] << endl;
        }
    }
}
void zadanie2()
{
    int length, licz = 0;
    for (int i=0; i<SIZE; i++)
    {
        length = tab[i].length();
        licz++;
        for (int j=1; j<length; j++)
        {
            if (tab[i][j] == '1' && tab[i][j - 1] == '1')
            {
                licz--;
                break;
            }
        }
    }
    cout <<licz<< endl;
}
int main() {
ifstream in("ciagi.txt");
for (int i=0; i<SIZE; i++) in>>tab[i];
in.close();

zadanie1();
zadanie2();
}
/*
ODPOWIEDZI
 
63.1:
18 ciągów:
11
101000101000
10110001011000
1010
110110110110
100100
11001100
111111
10111011
101101
100100100100
110110
1100110011001100
1111
10011001
1001110011
1100111001
110110110110110110

63.2:
93
*/
