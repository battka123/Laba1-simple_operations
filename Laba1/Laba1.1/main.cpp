#include <iostream>
#include <cmath>

int main() {
    double x1,x2,x3,y1,y2,y3,a,b,c,x0,y0;
    setlocale(LC_CTYPE, "Russian");
    std::cout<<"...Vvedi snachala koordinati treygolnika po x, zatem po y..."<<std::endl;
    std::cin>>x1>>x2>>x3>>y1>>y2>>y3;
    //НАХОДИМ ДЛИННЫ СТОРОН ТРЕУГОЛЬНИКА
    a= sqrt(pow((x2-x3),2)+pow((y2-y3),2));
    b= sqrt(pow((x1-x3),2)+pow((y1-y3),2));
    c= sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    //НАХОДИМ КООРДИНАТЫ X И Y ОТНОСИТЕЛЬНО ОСИ X И Y
    x0=(a*x1+b*x2+c*x3)/(a+b+c);
    y0=(a*y1+b*y2+c*y3)/(a+b+c);
    std::cout<<"Koordinata peresechenia bissektrisi po x="<<x0<<"\n"<<"Koordinata peresechenia bissekrrisi po y="<<y0<<std::endl;
    return 0;
}
