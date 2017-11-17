#include <iostream>
#include <fstream>


using namespace std;

void sunk();
void lengv();
void isvedimas();

int sun = 0, leng = 0;

int main()
{
    sunk();
    lengv();
    isvedimas();
    return 0;
}

void sunk()
{
    int a, n;
    ifstream fd("U1.txt");
    fd >> n;
    for(int i; i<n; i++)
    {
        fd >> a;
        if(a > sun) sun = a;
    }
    fd.close();
}
void lengv()
{
    int a2, n2;
    ifstream f1("U1.txt");
    f1 >> n2;
    for(int i = 0; i<n2; i++)
    {
        f1 >> a2;
        if(a2*2 <= sun) leng++;
    }
}
void isvedimas()
{
    ofstream fr("U1rez.txt");
    fr << sun << " " << leng << endl;
}
