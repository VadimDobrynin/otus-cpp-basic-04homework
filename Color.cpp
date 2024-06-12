#include "Color.hpp"

Color::Color() = default;

Color::Color(double red, double green, double blue)
    : r{red}, g{green}, b{blue} {}

double Color::red() const {
    return r;
}

double Color::green() const {
    return g;
}

double Color::blue() const {
    return b;
}

void Color::set_red(double r) {
    this->r = r;
}
void Color::set_green(double g) {
    this->g = g;
}
void Color::set_blue(double b) {
    this->b = b;
}
