
#include <stdio.h>
int main(){

    int pre_inc,post_inc;
    int x=10;
    pre_inc= ++x +10;
    printf("Pre-increament of x:%d\n",pre_inc);   
    x=10;
    post_inc= x++ +10;
    printf("Post-increament of x:%d\n",post_inc);
    return 0;
}
