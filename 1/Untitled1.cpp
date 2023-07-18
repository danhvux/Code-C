
#include <stdio.h>
int main(){
    int n,i;
    printf("Nhap so:");
    scanf("%d",&n);
    
    for(int i = 1; i <= n; i++){
        if (n%i==0)
        {
            printf("Uoc cua so la:%d\n",i);
        }
    }
}