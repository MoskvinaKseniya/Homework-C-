#ifndef HELLO_WORLD_VECTOR2_H
#define HELLO_WORLD_VECTOR2_H


class Vector2 {
public:
    double x, y;
    Vector2();
    Vector2(double _x, double _y);
    void setX(double _x);
    void setY(double _y);
    double getX();
    double getY();
    double getLen() const;
    double getPhi();
    Vector2 getPCS();
    Vector2 ChangeR(double a);
    Vector2 ChangePhi(double a);
    Vector2 getNorm();
    Vector2 operator-(const Vector2& vector) const;
    Vector2 operator-=(const Vector2& vector);
    Vector2 operator+(const Vector2& vector) const;
    Vector2 operator*(const double & a) const;
    Vector2 operator*=(const double & a);
    Vector2 operator/(const double& a) const;
    Vector2 operator/=(const double& a);
    bool operator==(const Vector2& vector) const;
    bool operator!=(const Vector2& vector) const;
    double operator*(const Vector2& vector) const;
    double operator%(const Vector2& vector) const;
    double operator&(const Vector2 &vector) const;

};

#endif //HELLO_WORLD_VECTOR2_H