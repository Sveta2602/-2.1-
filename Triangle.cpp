#include "Triangle.h"
#include <sstream>
  Triangle::Triangle()
  {
   first = 0;
    second = 0;
  }
  Triangle::Triangle(double a = 0, double b = 0)
  {
      first = a;
      second = b; 
      
  }
  Triangle::Triangle(const Triangle& a)
  {
       first = a.first;
      second= a.second;
  }
  Triangle::~Triangle()
       { }
    void Triangle::Set_First(double a)
    {
           first = a;
    }
     void Triangle::Set_Second(double b)
     {
          second = b;
     }
     double Triangle::Get_First() const
     {
         return first;
     }
     double Triangle::Get_Second() const
     {
         return second;
     }
     Triangle& Triangle::operator = (const Triangle& a)
     {
         first = a.first;
         second = a.second;
         return *this;
     }
     Triangle::operator string () const
     {
         stringstream ss;
         ss << " Катет 1 = " << first << endl;
         ss << " Катет 2 = " << second << endl;
         return ss.str();
     }
     Triangle operator + (const Triangle& x, const Triangle& y)
     {
         return Triangle(x.first + y.first, x.second + y.second);
     }
     Triangle operator - (const Triangle& x, const Triangle& y)
     {
         return Triangle(x.first - y.first, x.second - y.second);
     }
     Triangle operator * (const Triangle& x, const Triangle& y)
     {
         return Triangle(x.first * y.first, x.second * y.second);
             
     }
     Triangle operator / (const Triangle& x, const Triangle& y)
     {
         double a1 = x.first;
         double b1 = x.second;
         double a2 = y.first;
         double b2 = y.second;

         if (y.second != 0 || x.second != 0)
             return Triangle(a1 / a2, b1 / b2);
         else
             cerr << "Error!" << endl;
             return -1;

             
     }
     Triangle operator ^ (const Triangle& x, const unsigned n)
     {
         Triangle y(1, 0);
         for (unsigned i = 1; i <= n; i++)
             y = y * x;
         return y;
         
     }
     ostream& operator << (ostream& out, const Triangle& a)
     {
         out << string(a);
         return out;
     }
     istream& operator >> (istream& in, Triangle& a)
     {
         cout << "  Введить значення Катету 1 = "; in >> a.first;
         cout << " Введить значення катету 2 = "; in >> a.second;
         cout << endl;
         return in;
     }
     Triangle& Triangle::operator ++() //операції префіксного інкременту 
     {
         first++;                          //модифікували поточний об'єкт
         
         return *this;                 //повернули модифікований об'єкт
     }
     Triangle& Triangle::operator --()  ////операції префіксного  декременту
     {  
         first--;
         return *this;
     }
     Triangle Triangle::operator ++(int)  //Операції постфіксного iнкременту
     {
         Triangle t(*this);            //створили копію
         second++;                 //модифікували поточний об'єкт
         return t;               //повернули копію
     }
     Triangle Triangle::operator --(int)  //Операції постфіксного  декременту
     {
         Triangle t(*this);
         second--;
         return t;
     }
     double Triangle::Gipotenuza()
     {
          return sqrt(first * first + second * second);
         
     }
     
