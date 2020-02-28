#include<iostream>
using namespace std;
//第一种方式：直接包含源文件
//#include"Person.cpp"

//第二种方式，将.h和.cpp的内容写到一起，将后缀名改为.hpp文件
#include"Person.hpp"

//#include<string>

//类模板分文件编写问题以及解决

//template<class T1,class T2>
//class Person
//{
//public:
//
//	Person(T1 name, T2 age);
//
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//
//};
//template<class T1,class T2>
//Person<T1,T2>::Person(T1 name, T2 age)
//{
//	this->m_Age = age;
//	this->m_Name = name;
//}
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "姓名：" << this->m_Name << "年龄：" << this->m_Age << endl;
//}
//
void test01()
{
	Person<string, int>p("田所浩二", 24);
	p.showPerson();
}
int main()
{
	test01();
	return 0;

}

