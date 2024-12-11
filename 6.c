#include <stdio.h>
int main() {
    char xauKyTu[1000];
    int count = 0;
    printf("Hay nhap vao mot chuoi bat ky: ");
    fgets(xauKyTu, sizeof(xauKyTu), stdin);
    for (int i = 0; xauKyTu[i] != '\0'; i++) 
    {

        if ((xauKyTu[i] >= 'A' && xauKyTu[i] <= 'Z') || (xauKyTu[i] >= 'a' && xauKyTu[i] <= 'z')) 
        {
            count++;
        }
    }
    printf("So ky tu la chu cai trong chuoi: %d\n", count);
    return 0;
}
