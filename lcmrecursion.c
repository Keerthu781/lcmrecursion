#include <stdio.h>
int Findlcm(int x, int y);
int main()
{
    int n1, n2, LCM;
    printf("Enter the numbers ");
    scanf("%d%d", &n1, &n2);
 
    if(n1 > n2)
        LCM = Findlcm(n2, n1);
    else
        LCM = Findlcm(n1, n2);
 
    printf("LCM of %d and %d = %d", n1, n2, LCM);
 
    return 0;
}
 
int Findlcm(int x, int y)
{
    static int multiple = 0;
    multiple += y;
 
    if((multiple % x == 0) && (multiple % y == 0))
    {
        return multiple;
    }
    else
    {
        return Findlcm(x, y);
    }
}
