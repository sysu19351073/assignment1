#include<iostream>
using namespace std;
char names[100];
int nums;
int ages;

class Student
{
private:
	int num;
	int age;
	char *name;
public:
	Student();
	void setfun(void);
	void getfun(int nums, int ages, char names[100]);
	void printfun(void);
};

Student::Student() {}

void Student::setfun(void)
{
	cout << "Pleas input the student\'s information: " << endl;
	cout << "Name:\t";
	cin >> names;
	cout << "Age:\t";
	cin >> ages;
	cout << "Num:\t";
	cin >> nums;
}

void Student::getfun(int nums, int ages, char names[100])
{
	num = nums;
	age = ages;
	name = names;
}

void Student::printfun(void)
{
	cout << "The student\'s name is " << name << endl;
	cout << "The student\'s age is " << age << endl;
	cout << "The studnet\'s number is " << num << endl;
}

int main()
{
	Student stu1;
	stu1.setfun();
	stu1.getfun(nums, ages, names);
	stu1.printfun();
	Student stu2;
	stu2.setfun();
	stu2.getfun(nums, ages, names);
	stu2.printfun();
	return 0;
}