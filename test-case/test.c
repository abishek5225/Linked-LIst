#include <stdio.h>

int main(){
    int x = 20;
    void* p = &x; //here we did typecasting to check how it works, void* means the data coming through x is unknown

    // int* ip = (int*)p; //here now the compiler knows what types of data and how much bit to read 
    // printf("%d", *ip);

    float* fp = (float*) p;
    printf("%f\n", *fp);
    printf("%e\n", *fp);

    return 0;


}

