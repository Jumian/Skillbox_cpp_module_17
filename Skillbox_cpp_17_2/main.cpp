#include <iostream>

void swap(int* a, int* b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

void revert(int* arr10){
    for(int i=0; i<5;++i){
        swap(arr10+i,arr10+9-i);
    }
}

int main() {
    int arr10[10] = {1,2,3,4,5,6,7,8,9,10};
    revert(arr10);
    for(int i=0;i<10;++i)
        std::cout << *(arr10+i)<<" " ;
    std::cout << std::endl;
}
