#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    int i,j,k;
    cout<< " Menampilkan Bilangan Prima Dari 1-100 \n";
    for (i=1;i<=100l;i++)
    {
        k=0;
        for (j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                k+=1;
            }
        }
        if(k==2)
        {
            cout<<i<< " ";
        }
    }
    return 0;
}
