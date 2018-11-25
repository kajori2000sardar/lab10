//include library 
#include<iostream>
#include<cmath>

using namespace std;

//creating class to take and display 
class POINT
{
	private:
	  //declaring variables
	  int x;
	  int y;

	public:
	  //creating function to take x coordinate
	  int setx(void)
	  {
		cout<<"Enter the x coordinate "<<endl;
		cin>>x;
		return x;
	  }
	
	  //creating function to take y coordinate
	  int sety(void)
	  {
		cout<<"Enter the y coordinate "<<endl;
		cin>>y;
		return y;
	  }

	  //creating function to print the coordinate of the points
	  void print(int x,int y)
	  {
		cout<<"The coordinate of the point is ("<<x<<","<<y<<") "<<endl;
	  }
};

//creating class
class RECTANGLE
{
	private:
	  //declaring variables
	  int x1,y1;
	  int x2,y2;
	  int l,b;
	  int a;

	  //creating object for class point
	  POINT P;

	  //function to find side length of rectangle
	  void side1(void)
	  {
		l=abs(x2-x1);
	  }

	  //function to find breadth of rectangle
	  void side2(void)
	  {
		b=abs(y2-y1);
	  }

	public:
	  //creating default constructor
	  RECTANGLE()
	  {
		x1=0;
		y1=0;
		x2=1;
		y2=1;
	  }

	  //creating parameterised constructor
	  RECTANGLE(int X1,int Y2)
	  {
		x1=X1;
		y2=Y2;
		cout<<"The left bottom x coordinate is "<<x1<<endl<<"For other x cooridinate "<<endl;
		//calling function of point to take value of x coordinate
		x2=P.setx();
		cout<<"The right top y coordinate is "<<y2<<endl<<"For other y coordinate "<<endl;
		//calling function of point to take value of y coordinate
		y1=P.sety();
	  }

	  //creating function to calculate area of the rectangle
	  int area(void)
	  {
		//calling function to calculate the length and breadth of the rectangle
		side1();
		side2();

		//returning value of the area of the rectangle
		return (l*b);
	  }

	  //creating function to display the corner points of the rectangle 
	  void display(void)
	  {
		cout<<"For bottom left point of the rectangle "<<endl;
		P.print(x1,y1);
		cout<<"For bottom right point of the rectangle "<<endl;
		P.print(x2,y1);
		cout<<"For top right point of the rectangle "<<endl;
		P.print(x2,y2);
		cout<<"For top left point of the rectangle "<<endl;
		P.print(x1,y2);
	  }
};

//creating main
int main()
{
	//declaring variables
	int x1,y2,x,y;

	//declaring class
	POINT PT;

	//take the points as input
	x=PT.setx();
	y=PT.sety();

	//printing the point 
	PT.print(x,y);

	cout<<endl<<"Now for rectangle "<<endl;

	//asking for values of bottom left and top right corner points
	cout<<"Enter bottom left corner point x coordinate : "<<endl;
	cin>>x1;
	cout<<"Enter top right corner point y coordinate : "<<endl;
	cin>>y2;

	//creating object of the class
	RECTANGLE R1;
	RECTANGLE R2(x1,y2);

	//printing corners of rectangle formed by default constructor
	cout<<"Corners of the rectangle formed when no input was given : "<<endl;
	R1.display();

	//printing corners of the rectangle formed by parameterised constructor
	cout<<"Corners of rectangle formed by our given measurements : "<<endl;
	R2.display();

	//displaying area of rectangle formed by parameterised constructor
	int a=R2.area();
	cout<<"Area of the rectangle is "<<a<<endl;

	//terminating the program
	return 0;
}
