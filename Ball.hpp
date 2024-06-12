#pragma once
#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"

class Ball {
public:
    Ball(Velocity&, Point&, Color&, double);
    void setVelocity(const Velocity& velocity); ///< задать скорость шара
    Velocity getVelocity() const;               ///< получить скорость шара
    void draw(Painter& painter) const;          ///< нарисовать шар, используя painter
    void setCenter(const Point& center);        ///< задать координаты центра шара
    Point getCenter() const;                    ///< получить центр шара
    double getRadius() const;                   ///< получить радиус шара
    double getMass() const;                     ///< получить массу шара

private:
    Velocity velocity;
    Point point;
    Color color;
    double r = 20.0;

};
