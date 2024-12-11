#include<stdio.h>
#include<string.h>
int main(){
    char xauKyTu[1000];
    int count =0;
    int n = sizeof(xauKyTu)/sizeof(char);
    printf("hay nhap vao mot chuoi bat ky: ");
    fgets(xauKyTu,sizeof(xauKyTu),stdin);
    for (int i = 0; xauKyTu[i] != '\0'; i++)
    {
        if (xauKyTu[i] != ' ' && xauKyTu[i+1] == ' ' || xauKyTu[i+1] == '\0')
        {
            count++;
        }
    }
     printf("So tu trong chuoi: %d\n", count);
    return 0;
}