#include "Vector.h"

Vector Vector::operator+(Vector b){
  Vector sum;
  for (int i=0;i<3;i++)
    sum.m_v[i] = m_v[i]+b.m_v[i];
  return sum;
}

Vector Vector::operator*(double f){
  Vector v;
  for (int i=0;i<3;i++)
    v.m_v[i] = f*m_v[i];
  return v;
}

Vector Vector::operator-(){
  Vector v;
  for (int i=0;i<3;i++)
    v.m_v[i] = -m_v[i];
  return v;
}

double Vector::X(){
  return m_v[0];
}

double Vector::Y(){
  return m_v[1];
}

double Vector::Z(){
  return m_v[2];
}

void Vector::X(double x){
  m_v[0] = x;
}

void Vector::Y(double y){
  m_v[1] = y;
}

void Vector::Z(double z){
  m_v[2] = z;
}

Vector operator*(double f, Vector a){
  return a*f;
}

std::ostream& operator<<(std::ostream& output, Vector a){
  output << "(" << a.X() << "," << a.Y() << "," << a.Z() << ")";
  return output;
}

std::istream& operator>>(std::istream& input, Vector& a){
  double x,y,z;
  input >> x >> y >> z;
  a.X(x); a.Y(y); a.Z(z);
  return input;
}
