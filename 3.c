#include<stdio.h>
#include<string.h>
int main(){
    char xauKyTu[]="hello";
    int n = strlen(xauKyTu);
    for (int i = 0; i < n/2; i++)
    {
        int temp = xauKyTu[i];
        xauKyTu[i] = xauKyTu[n - i - 1];
        xauKyTu[n - i - 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c ",xauKyTu[i]);
    }
    
    return 0;
}