#include "Header.h"
using namespace std;
int summas(int* mas, unsigned size)
{
    int sum = 0;
    for (int i = 1; i < size; i++)
    {
        sum += mas[i];
    }
    return sum;
}

void (*actionsmas(int* mas, unsigned size))(int*, unsigned)
{
    int sum = summas(mas, size);
    if (sum == mas[0])
    {
        return inverse;
        
    }
    else if (sum > mas[0])
    {
        return vozrastanie; 
    }
    else
    {
        return ybivanie;     }
}

int main()
{
    
    int a[10] = { 45,2,6,3,4,1,5,7,8,9 };
    print(a, 10);
    void (*ykazfunc)(int* a, unsigned size);
    ykazfunc = actionsmas(a, 10);
    ykazfunc(a, 10);
    print(a, 10);
}