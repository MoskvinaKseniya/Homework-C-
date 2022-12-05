#include <iostream>
#include "Vector2.h"

int main (){
    //перевод в ПСК
    Vector2 a(1.0, 1.0);
    std::cout << "polar coordinate system" << std::endl;
    a.getPCS();
    std::cout << "r="<< a.x << " phi="<< a.y << std::endl;

    //поменять длину, сохранив направление
    Vector2 cl(1.0, 1.0);
    std::cout << "change length" << std::endl;
    cl.ChangeR(10);
    std::cout << "r="<< cl.x << " phi="<< cl.y << std::endl;

    //поменять угол, сохранив длину
    Vector2 cp(1.0, 1.0);
    std::cout << "change angle" << std::endl;
    cp.ChangePhi(5);
    std::cout << "r="<< cp.x << " phi="<< cp.y << std::endl;

    //вычисление угла в градусах
    Vector2 b(5.0, 2.0);
    Vector2 c(2.0, 3.0);
    std::cout << "angle in degrees" << std::endl;
    std::cout << "phi=" << b.getPhi() << std::endl;

    //вычитание (- и -=)
    std::cout << "subtraction" << std::endl;
    auto d = b-c;
    std::cout << "X="<< d.x << " Y="<< d.y << std::endl;
    b-=c;
    std::cout << "X="<< b.x << " Y="<< b.y << std::endl;

    //умножение на число (* и *=)
    std::cout << "multiplication" << std::endl;
    auto e=b*2;
    std::cout << "X="<< e.x << " Y="<< e.y << std::endl;
    b*=2;
    std::cout << "X="<< b.x << " Y="<< b.y << std::endl;

    //деление на число (/ и /=)
    std::cout << "division" << std::endl;
    auto f=b/2;
    std::cout << "X="<< f.x << " Y="<< f.y << std::endl;
    b/=2;
    std::cout << "X="<< b.x << " Y="<< b.y << std::endl;

    //скалярное умножение
    std::cout << "Scalar multiplication" << std::endl;
    std::cout << "SM=" << b*c << std::endl;

    Vector2 n(5.0, 5.0);
    Vector2 m(2.0, 3.0);
    //проверка на равенство
    auto t=n==m;
    std::cout << "equality check" << std::endl;
    std::cout << t << std::endl;

    //проверка на неравенство
    auto g=n!=m;
    std::cout << "inequality check" << std::endl;
    std::cout << g << std::endl;

   //косинусное расстояние между векторами
    std::cout << "Cosine distance" << std::endl;
    auto h = n&m;
    std::cout << "CD="<< h << std::endl;

   //косое скалярное произведение
    std::cout << "skew scalar multiplication" << std::endl;
    std::cout << "SSM=" << m%n << std::endl;

    //нормализация вектора
    Vector2 j(4.0, 16.0);
    std::cout << "normalization" << std::endl;
    j.getNorm();
    std::cout << "X="<< j.x << " Y="<< j.y << std::endl;

    return 0;
}
