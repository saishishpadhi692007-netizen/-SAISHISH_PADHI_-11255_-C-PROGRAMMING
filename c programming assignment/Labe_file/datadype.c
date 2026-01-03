
// C program to define data types and their size
#include <stdio.h>

int main(){
     int a=5;
     float b=5;
     char ch='D';
     double d=7.5;
     printf("Integer value:%d,size of integer:%zu\n",a,sizeof(a));
     printf("Float value:%f,size of float:%zu\n",b,sizeof(b));
     printf("Character value:%c,size of character:%zu\n",ch,sizeof(ch));
     printf("Double value:%lf,size of double:%zu\n",d,sizeof(d));

     return 0;

}
