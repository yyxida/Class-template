#include<iostream>
using namespace std;
#include<string>
//ͨ��ȫ�ֺ�����ӡPerson����Ϣ

//�ܽ᣺����ȫ�ֺ���������ʵ�֣��÷��򵥣����ұ���������ֱ��ʶ��

//��ǰ�ñ�����֪��Person��Ĵ���
template<class T1, class T2>
class Person;

//�����ʵ��
template<class T1, class T2>
void printPerson2(Person<T1, T2>p)
{
	cout << "������" << p.m_Name << "���䣺" << p.m_Age << endl;
}

template<class T1,class T2>
class Person
{
	//ȫ�ֺ�������ʵ��
	friend void printPerson(Person<T1, T2>p)
	{
		cout << "������" << p.m_Name << "���䣺" << p.m_Age << endl;
	}


	//ȫ�ֺ�������ʵ��
	//��һ����ģ��Ĳ����б�
	//���ȫ�ֺ���������ʵ�ֵĻ�����Ҫ�ñ�������ǰ֪����������Ĵ���
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
//ȫ�ֺ���������ʵ�ֵĲ���
void test01()
{
	Person<string, int>p("�����ƶ�", 24);
	printPerson(p);
}
//ȫ�ֺ���������ʵ�ֵĲ���
void test02()
{
	Person<string, int>p("�����ƶ�", 24);
	printPerson2(p);
}


int main()
{
	test01();
	test02();

	return 0;
}