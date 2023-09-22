#include <string>
#include "gwindow.h"
#include "shape.h"
using namespace std;
Shape::Shape(){
  setColor("Black");
  virtual bool contains(double x, double y) = 0 
}
void Shape::setLocation(double x, double y){
  this->x = x;
  this->y = y:
}
void Shape::move(double dx, double dy){
  x += dx;
  y += dy;
}
void Shape::setColor(string color){
  this->color = color;
}
Line::Line(double x1, double y1, double x2, double y2){
  this->x = x1;
  this->y = y1;
  this->dx = x2 - x1;
  this->dy = y2 - y1;
  virtual bool contians(double x1, double y1, double x2, double y2){
    slope = (y2-y1)/(x2-x1);
    if (abs(slope * (x - x1)-y)<.5)
      return true;
    return false; 
}
void Line::draw(Gwindow & gw){
  gw.setColor(color);
  gw.drawLine(x, y, x + dx, y + dy);
}
Rect::Rect(double x, double y, double width, double height){
  this->x = x;
  this->y = y;
  this->width = width;
  this->height = height;
  virtual bool contains(double x, double y, double width, double height){
 }
 
void Rect::draw(Gwindow & gw){
  gw.setColor(color);
  gw.fillRect(x,y,width,height);
}
