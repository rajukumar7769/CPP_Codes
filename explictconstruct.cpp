#include <iostream>
using namespace std;
class Point {
   private:
      double x, y;
   public:
      Point(double a = 0.0, double b = 0.0) : x(a), y(b) {
         //constructor
      }
      bool operator==(Point p2) {
         if(p2.x == this->x && p2.y == this->y)
         return true;
         return false;
      }
};
int main() {
   Point p(5, 0);
   if(p == 5)
      cout << "They are same";
   else
      cout << "They are not same";
}