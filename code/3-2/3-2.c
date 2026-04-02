#include <stdio.h>

void swap_endian(int *x){
    *x = (
        (*x>>24)&0x000000FF|
        (*x>>8)&0x0000FF00|
        (*x<<8)&0x00FF0000|
        (*x<<24)&0xFF000000
    );
}

int main() {
    int x = 0x12345678;

    printf("%x\n",x);
    swap_endian(&x);
    printf("%x\n",x);

    return 0;
}
