#include <iostream>

void swap(int* pa,int* pb){
    int tmp=*pa;
    *pa=*pb;
    *pb=tmp;
}

int main() {
    int a = 10;
    int b = 20;
    swap(&a,&b);
    std::cout << a << " " << b << std::endl;
}
