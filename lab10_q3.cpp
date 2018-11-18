//include library
#include<iostream>

using namespace std;

//creating class
class rectangle
{
	private:
	  int l;
	  int b;
	public:
	  void input()
	  {
		cout<<"Enter length of rectangle "<<endl;
		cin>>l;
		cout<<"Enter breadth of rectangle "<<endl;
		cin>>b;
	  }
	  int area(l,b)
	  {
		int a=l*b;
		return a;
	  }
	  int perimeter(l,b)
	  {
		int p=2*(l+b);
		return p;
	  }
};

int main()
{
	rectangle R1;
	rectangle R2;
	R1.input;
	R2.input;
	R1.area;
	R2.area;
	R1.perimeter;
	R2.perimeter;
	if(R1.area==R2.area)
		cout<<"The area of both the rectangles are equal "<<endl;
	else
		cout<<"Area of both the rectangles are not equal "<<endl;
	if(R1.perimeter==R2.perimeter)
		cout<<"Perimeter of both the rectangles are equal "<<endl;
	else 
		cout<<"Perimeter of both the rectangles are not equal "<<endl;
	return 0;
}
