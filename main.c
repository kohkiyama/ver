#include <stdio.h>
int a = 5;
int result = 1;

int main(void){
    prinf("%dの階乗を計算します。\n",a);
    for(int i = 1;i <= a;i++){
        result *= i;
    }
    prinf("result = %d\n",result);
    return 0;
}
