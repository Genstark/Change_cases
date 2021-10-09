#include<iostream>

int main(){
    char name[25];
    std::cout<<"Enter in upper case: ";
    std::cin>>name;

    for(int i=0; name[i]!=0; i++){
        name[i] = (name[i]>='A' && name[i]<='Z')?(name[i]+32):name[i];
    }

    std::cout<<name<<std::endl;
    return 0;
}