#include<stdio.h>
int main(){
    char xauKyTu[]="hello";
    int n = sizeof(xauKyTu)/sizeof(char);
    for (int i = 0; i < n; i++)
    {
        printf("%c ",xauKyTu[i]);
    }
    
    return 0;
}