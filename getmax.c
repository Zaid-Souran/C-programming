#include <stdio.h>

int getmax( int x, int y){
    if( x >= y){
        return x;
    }
    else{
        return y;
    }
}

int main(){
    int max = getmax(10,8);

    printf("%d", max);

    return 0;
}
