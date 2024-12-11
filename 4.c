#include<stdio.h>
int main(){
    char xauKyTu[]="hello";
    char value;
    int n = sizeof(xauKyTu)/sizeof(char);
    int count=0;
    printf("hay nhap vao 1 ky tu: ");
    scanf("%c",&value);
    for (int i = 0; i < n; i++)
    {
        if (xauKyTu[i]==value)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("ko co ky tu %c",value);
    }else
    {
        printf("so lan suat hien cau ky tu %c la: %d",value,count);
    }
    
    
    return 0;
}