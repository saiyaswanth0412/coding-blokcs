#include <iostream>
using namespace std;
void update(int *a,int *b) {
    *a=(*a)+(*b);
    (*a-*b)>0?(2(*a)-(*b)):((*b)-(2(*a)));
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

