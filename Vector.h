#include <iostream>

class Vector{
 public:
  Vector(double x=0, double y=0, double z=0):m_v{x,y,z}{};
  Vector operator+(Vector);
  Vector operator-();
  Vector operator*(double);
  double X();
  double Y();
  double Z();
  void X(double);
  void Y(double);
  void Z(double);
 private:
  double m_v[3];
};

Vector operator*(double f, Vector a);
std::ostream& operator<<(std::ostream& output, Vector a);
std::istream& operator>>(std::istream& input, Vector& a);
