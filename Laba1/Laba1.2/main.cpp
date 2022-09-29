#include <iostream>

int main() {
    double x,y;
    std::cin>>x>>y;
    if (x>0 && y>0) std::cout<<"I";
    if (x<0 && y>0) std::cout<<"II";
    if (x<0 && y<0) std::cout<<"III";
    if (x>0 && y<0) std::cout<<"IV";
    if (x==0 && y==0) std::cout<<"legit na nachale koordinat";
    else std::cout<<"legit na oci";
    return 0;
}
