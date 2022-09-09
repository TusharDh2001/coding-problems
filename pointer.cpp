#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;
void update(int *a,int *b) {
    // Complete this function    
    int i=*a;
    int j=*b;
    int s=i+j;
    int d=i-j;
    if(d<0){
        d=d*(-1);
    }
    
    *a=s;
    *b=d;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
