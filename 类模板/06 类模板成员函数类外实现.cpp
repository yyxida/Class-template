#include<iostream>
using namespace std;

//��ģ���Ա��������ʵ��
//�ܽ�:��ģ���г�Ա��������ʵ��ʱ����Ҫ����ģ������б� 
//Person<T1,T2>::Person(T1 Name, T2 Age)  �����������ݡ�

template<class T1,class T2>
class Person
{
public:
	Person(T1 Name, T2 Age);
		//{
		//	m_Age = Age;
		//	m_Name = Name;
		//}

		void showPerson();
	//{
	//	cuot << "������" << this->m_Name << "���䣺" << this->m_Age << endl;
	//}
	T1 m_Name;
	T2 m_Age;

};

//���캯������ʵ��
template<class T1, class T2>
Person<T1,T2>::Person(T1 Name, T2 Age)
{
	m_Age = Age;
	m_Name = Name;
}

//��Ա����������ʵ��
template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "������" << this->m_Name << "���䣺" << this->m_Age << endl;

}

void test01()
{
	Person<string, int> P("�����ƶ�",24);
	P.showPerson();
}
int main()
{
	test01();
	return 0;
}