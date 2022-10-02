1. Define a class Complex to represent a complex number with instance variables a and
b to store real and imaginary parts. Also define following member functions
         a. void setData(int,int)
         b. void showData()
         c. Complex add(Complex)

#include <iostream>
using namespace std;
class Complex{
private:
   int a,b;
public:
   void setData(int x,int y){
       a=x;
       b=y;
   }
   void showData(){
       cout<<"a "<<a<<" b "<<b;
   }

   Complex add(Complex c){
       c.a=c.a+a;
       c.b=c.b+b;
       return c;
   }
};

int main(){
   Complex c1,c2,c3;
   c1.setData(3,5);
   c2.setData(6,8);
   c3=c1.add(c2);
   c3.showData();
   return 0;
}


2. Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
         a. void setTime(int,int,int)
         b. void showTime()
         c. void normalize()
         d. Time add(Time)

#include <iostream>
using namespace std;
class Time{
private:
   int h,m,s;
public:
   void setTime(int x,int y,int z){
       h=x;
       m=y;
       s=z;
   }
   void showTime(){
       cout<<h<<":"<<m<<":"<<s<<endl;
   }

   Time add(Time t){
       t.h = h+t.h;
       t.m = m+t.m;
       t.s = s+t.s;
       return t;
   }

   void normalize() {
       if(s>60){
           s=s-60;
           m++;
       }

       if(m>60){
           m=m-60;
           h++;
       }

       if(h>24){
           h=h-24;
       }
   }



};

int main(){

   Time t1,t2,t3;
   t1.setTime(3,45,34);
   t2.setTime(3,34,5);
   t3=t1.add(t2);
   cout<<"Before normalizing";
   t3.showTime();
   t3.normalize();
   cout<<"After normalizing";
   t3.showTime();

   return 0;
}

3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.

#include <iostream>
using namespace std;

class Cube{
private:
   float l;
public:
   Cube(float x){ l=x;}
   float volume(){
       return l*l*l;
   }
};

int main(){
   Cube c(3.4);
   cout<<c.volume();
   return 0;
}

4. Define a class Counter and Write a program to Show Counter using Constructor.

#include <iostream>
using namespace std;
class Counter{
private:
  int c;
public:
   Counter(){
       c=0;
   }
   void int_count(){ c++; }
   int get_count(){ return c; }
};
int Counter::c=0;
int main(){
   Counter c);
   c.int_count();
   cout<<c.get_count();
   return 0;
}


5. Define a class Date and write a program to Display Date and initialise date object
using Constructors.

#include <iostream>
using namespace std;
class Date{
private:
   int d,m,y;
public:
   Date(int day,int month,int year ){
       d=day;
       m=month;
       y=year;
   }
   void display(){
       cout<<"day is "<<d<<" month is "<<m<<" and year is "<<y;
   }
};
int main(){
   Date d(4,12,2002);
   d.display();
   return 0;
}

6. Define a class student and write a program to enter student details using constructor
and define member function to display all the details.

#include <iostream>

using namespace std;

class Student{
private:
   string name;
   string lname;
   string mname;
   int rollno;
   string section;
   int id;
public:
   Student(string Name,string LastName,string MidName,int RollNo,string Section,int Id){
       name=Name;
       lname=LastName;
       mname=MidName;
       rollno=RollNo;
       section=Section;
       id=Id;
   }
   void ShowDetails()
   {
       cout<<name<<" "<<lname<<" "<<mname<<" "<<rollno<<" "<<section<<" "<<id<<endl;
   }
};
int main() {
   Student Nitin("nitin","Shenigaram","Ramayya",34,"cs",2);
   Nitin.ShowDetails();
   return 0;
}


7. Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box.

#include <iostream>
using namespace std;
class Box{
private:
   double length,breadth,height;
public:
   Box(double l,double b,double h){
       length=l;
       breadth=b;
       height=h;
   }
   double Volume(){
       return length*breadth*height;
   }

};

int main(){
   Box b(3.4,56,4);
   cout<<b.Volume();
   return  0;
}

8. Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor.

#include <iostream>
using namespace std;
class Bank{
private:
   static float principal,rate,year;
public:
   Bank(float P,float R,float  Y){
       principal=P;
       rate=R;
       year=Y;
   }
   static void showdata(){
       cout<<"principal is "<<principal<<"rate is "<<rate<<"year "<<year<<"\n";
   }
   static float simpleInterest(){
       return (principal*rate*year)/100;
   }

};
float Bank::year=0;
float Bank::principal=0;
float Bank::rate=0;
int main(){
   Bank b(4,56,3);
   Bank::showdata();
   cout<<Bank::simpleInterest();

   return  0;
}


9. Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.

#include <iostream>
using namespace std;
class Bill{
   float bill;
   string name;
public:
   void get(string Name,float Bill){
       name=Name;
       if(Bill<0)
           bill=-1*Bill;
       else
           bill=Bill;
   }
   float calculateBill(){
       if(bill<100 && bill>0){
           return bill*1.20;
       }
       else if(bill>=100 && bill<200){
           return bill*2;
       }
       else{
           return bill*3;
       }
   }
};

int main(){

   Bill b;
   b.get("nitin",78);
cout<<b.calculateBill();
   return  0;
}

10. Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result.

#include <iostream>
using namespace std;
class StaticCount{

private:
   static int s;
public:
   static void print(){
       s++;
   }
   static int ressult(){
       return s;
   }
};
int StaticCount::s=0;
int main(){
   StaticCount::print();
   StaticCount::print();
   StaticCount::print();
   cout<<StaticCount::ressult();
   return  0;
}



