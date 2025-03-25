#include <stdio.h>
float d, pi = 3.14;
int main (){
    scanf("%f", &d);
    printf("%.3f %.3f\n", pi * d, pi * (d / 2) * (d / 2));
    return 0;
}

// python 代码
// d = float(input())
// pi = 3.14
// print("%.3f %.3f" % (pi * d, pi * (d / 2) * (d / 2))
