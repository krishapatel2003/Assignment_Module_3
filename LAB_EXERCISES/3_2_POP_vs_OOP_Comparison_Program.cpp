//POP_vs_OOP_Comparison_Program
//oop
#include <iostream>  
using namespace std; 
class Rectangle 
{
	private:
    	float length;
    	float width;

	public:
        Rectangle(float l, float w) 
		{
        	length=l;
        	width=w;
    	}

    float calculate_area() 
	{
        return length*width;
    }
};

int main() 
{
    float length, width;

    std::cout<<"Enter the length of the rectangle: ";
    std::cin>>length;
    std::cout<<"Enter the width of the rectangle: ";
    std::cin>>width;

    Rectangle rect(length, width);

    std::cout<<"\n The area of the rectangle is: "<<rect.calculate_area()<<std::endl;

    return 0;
}
