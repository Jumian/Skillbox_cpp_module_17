#include <iostream>


bool substr(char* str,char* sub){
    int i=0,k=0;
    bool match=true;
    while(*(str+k+i)!='\0') {
        i = 0;
        match=true;
        while ((*(sub + i) != '\0')&&(*(str+k+i)!='\0')) {
            if (*(sub + i) != *(str + i + k)) match= false;
            ++i;
        }
        if (match) return true;
        ++k;
    }
    return false;
}

int main() {
    char* a = "Hello world";
    char* b = "wor";
    char* c = "banana";
    std::cout << (substr(a,b)?"true":"false") << " " << (substr(a,c)?"true":"false");
}
