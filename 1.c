#include<stdio.h>
int main(){
  char a;
  int b;
  char c=0;
  while(~scanf("%s %d",&a,&b)){
    if('a'=='@') break;
    for(int i=0; i<b; i++){
      if(i<b-1){
        for(int j=0; j<b; j++){
          if((j-b)==(j-1)||(j-b)==(1-j))
          printf("%s",a);
          else if(j==b-1)
          printf("%s\n",c);
          else if((j-b)!=(j-1)||(j-b)!=(1-j)||(j!=b-1))
          printf("%s",c);
        }
      }
      else if(i==b-1)
      for(int j=0; j<b; j++){
        if(j!=b-1)
        printf("%s",a);
        else if(j==b-1)
        printf("%s\n",a);
      }
    }
  }
}