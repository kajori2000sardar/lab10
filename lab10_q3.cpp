//include library
#include<iostream>

using namespace std;

//creating class
class rectangle
{
	private:
	  //declaring variables
	  int l;
	  int b;
	public:
	  //function to take input
	  void input()
	  {
		cout<<"Enter length of rectangle "<<endl;
		cin>>l;
		cout<<"Enter breadth of rectangle "<<endl;
		cin>>b;
	  }
	  //function to calculate and return area
	  int area(void)
	  {
		int a=l*b;
		return a;
	  }
	  //function to calculate and return perimeter
	  int perimeter(void)
	  {
		int p=2*(l+b);
		return p;
	  }
};

//creating main
int main()
{
	//creating class object
	rectangle R1;
	rectangle R2;

	//taking input in those classes
	R1.input();
	R2.input();

	//calculating the areas of those classes
	int r1a=R1.area();
	int r2a=R2.area();

	//calculating the perimeter of those classes
	int r1p=R1.perimeter();
	int r2p=R2.perimeter();

	//comparing the areas
	if(r1a>r2a)
		cout<<"The area of R1 rectangle is greater than rectangle R2 "<<endl;
	else
		if(r1a<r2a)
			cout<<"The area of rectangle R1 is smaller than rectangle R2 "<<endl;
		else
			cout<<"The area of both R1 and R2 rectangles are equal "<<endl;

	//comparing the perimeters	
	if(r1p>r2p)
		cout<<"The perimeter of rectangle R1 is greater than rectangle R2 "<<endl;
	else 
		if(r1p<r2p)
			cout<<"The perimeter of rectangle R1 is smaller than rectangle R2 "<<endl;
		else
			cout<<"The perimeters of both rectangle R1 and R2 are equal "<<endl;

	//terminating the program
	return 0;
}
