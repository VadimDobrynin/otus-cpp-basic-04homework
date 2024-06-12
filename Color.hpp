#pragma once

class Color {
  public:
    Color();
    Color(double red, double green, double blue);
    double red() const;
    double green() const;
    double blue() const;

    void set_red(double);
    void set_green(double);
    void set_blue(double);

  private:
    double r{};
    double g{};
    double b{};
};
