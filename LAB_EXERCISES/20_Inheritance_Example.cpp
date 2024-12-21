//Inheritance Example
#include<iostream>
using namespace std;

class Person 
{
	protected:
    	string name;
    	int age;

    public:
        Person(string n, int a):name(n),age(a){}

    virtual void displayInfo() 
	{
        cout<<"\n Name: "<<name;
        cout<<"\n Age: "<<age;
    }
};

class Student : public Person 
{
	private:
    	string schoolName;
    	int grade;

	public:
        Student(string n, int a, string school, int g) : Person(n, a), schoolName(school), grade(g) {}

    void displayInfo() override 
	{
        Person::displayInfo();  
        cout<<"\n School: "<<schoolName;
        cout<<"\n Grade: "<<grade;
    }
};

class Teacher : public Person 
{
	private:
    	string subject;
    	int yearsOfExperience;

	public:
        Teacher(string n, int a, string sub, int exp) : Person(n, a), subject(sub), yearsOfExperience(exp) {}

    void displayInfo() override 
	{
        Person::displayInfo();  
        cout<<"\n Subject: "<<subject;
        cout<<"\n Years of Experience: "<<yearsOfExperience;
    }
};

int main() 
{
    Student student("krisha", 21, "Tops", 12);
    cout<<"\n Student Information:";
    student.displayInfo();
    cout<<"\n\n";

    Teacher teacher("Chinmayee ", 31, "c++", 6);
    cout<<"\n Teacher Information:";
    teacher.displayInfo();
    cout<<"\n";

    return 0;
}
