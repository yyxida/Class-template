#include<iostream>
using namespace std;
//��һ�ַ�ʽ��ֱ�Ӱ���Դ�ļ�
//#include"Person.cpp"

//�ڶ��ַ�ʽ����.h��.cpp������д��һ�𣬽���׺����Ϊ.hpp�ļ�
#include"Person.hpp"

//#include<string>

//��ģ����ļ���д�����Լ����

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
//	cout << "������" << this->m_Name << "���䣺" << this->m_Age << endl;
//}
//
void test01()
{
	Person<string, int>p("�����ƶ�", 24);
	p.showPerson();
}
int main()
{
	test01();
	return 0;

}

