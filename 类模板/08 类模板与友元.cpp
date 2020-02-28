#include<iostream>
using namespace std;
#include<string>
//通过全局函数打印Person的信息

//总结：建议全局函数做类内实现，用法简单，而且编译器可以直接识别

//提前让编译器知道Person类的存在
template<class T1, class T2>
class Person;

//类外的实现
template<class T1, class T2>
void printPerson2(Person<T1, T2>p)
{
	cout << "姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
}

template<class T1,class T2>
class Person
{
	//全局函数内类实现
	friend void printPerson(Person<T1, T2>p)
	{
		cout << "姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
	}


	//全局函数类外实现
	//加一个空模板的参数列表
	//如果全局函数是类外实现的话，需要让编译器提前知道这个函数的存在
	friend void printPerson2<>(Person<T1, T2>p);

public:
	Person(T1 name, T2 age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}
private:
	T1 m_Name;
	T2 m_Age;

};
//全局函数在类内实现的测试
void test01()
{
	Person<string, int>p("田所浩二", 24);
	printPerson(p);
}
//全局函数在类外实现的测试
void test02()
{
	Person<string, int>p("田所浩二", 24);
	printPerson2(p);
}


int main()
{
	test01();
	test02();

	return 0;
}