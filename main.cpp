#include <stdio.h>
#include <math.h>

int main(void) {
int n=100,i=1,j=1,jnew,k,alya1;
//scanf("%d",&n);
int a[n];

for (k=1; k<=100; k++) { //заполн€ю
    a[k]=k;
    //printf("%d ", a[k]);
}

for (k=1; k<=100; k++) { // вывожу
    if (k%10==0 && k!=0) {
        printf("%3d \n", a[k]);
    } else {
        printf("%3d ", a[k]);
    }
}

printf("\n");


while (i+j+2*j*i<n) {
    jnew=j;
    while (i+jnew+2*jnew*i<=n) {
        alya1=i+jnew+2*jnew*i;
        jnew++;
        for (k=1; k<=100; k++) {
            if (a[k]==alya1) {
                a[k]=0;
                break;
            }
        }
        printf("%2d ", alya1);
    }
    printf("\n");
    j++;
    i++;
    //printf("%2d%2d \n", i,j);
}

printf("\n");

for (k=1; k<=100; k++) { // вывожу
    if (k%10==0 && k!=0) {
        printf("%3d \n", a[k]);
    } else {
        printf("%3d ", a[k]);
    }
}

printf("\n");

for (k=1; k<=100; k++) {
    if (a[k]!=0) {
    printf("%2d ", a[k]*2+1);
    }
}

return 0;
}

