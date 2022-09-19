#include <stdio.h>
#include <stdlib.h>

int main(){
    int v1, v2, v3;

    scanf("%d %d %d", &v1, &v2, &v3);

    int ver1 = v1 == v2 || v1 == v3 || v2 == v3;
    int ver2 = v1 == (v2+v3) || v1 == abs(v2-v3);

    (ver1 || ver2) ? printf("S\n")  : printf("N\n");
    return 0;
}