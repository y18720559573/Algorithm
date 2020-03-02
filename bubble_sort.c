#include<stdio.h>
int main(){
    int a[10];
    for(int i=0; i<10; i++)
        scanf("%d",&a[i]);
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            if(a[j]>a[j+1]){
                a[j+1]=a[j];
            }
        }
    }
    for(int i=0; i<10; i++)
    printf("%d",a[i]);
}