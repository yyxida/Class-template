#include<iostream>
#include<string>
using namespace std;

//�ܽ᣺
//ͨ����ģ�崴�����󣬿��������ַ�ʽ�����д���
//ʹ�ñȽϹ㷺���ǵ�һ�֣�����ָ������

//��ģ���������������
template <class T1, class T2>
class Person
{
public:

	Person(T1 Name,T2 age)
	{
		m_Name = Name;
		m_Age = age;
	}

	T1 m_Name;
	T2 m_Age;

	void Showperson()
	{
		cout << "������" << this->m_Name << "\t���䣺" << this->m_Age << endl;
	}
};



//1������ָ������
void Printperson1(Person<string, int> &P)
{
	P.Showperson();
}
void test01()
{
	Person<string, int>p("�����ƶ�", 24);
	Printperson1(p);
}



//2������ģ�廯
template <class T1, class T2>
void Printperson2(Person<T1, T2>&P)
{
	P.Showperson();
	cout << "T1������Ϊ��" << typeid(T1).name() << endl;
	cout << "T2������Ϊ��" << typeid(T2).name() << endl;

}

void test02()
{
	Person<string, int>p("��������", 25);
	Printperson2(p);

}
//3��������ģ�廯
template<class T> 
void Printperson3(T &P)
{
	P.Showperson();
	cout << "T���������ͣ�" << typeid(T).name() << endl;
}


void test03()
{
	Person<string, int>p("��������", 26);
	Printperson3(p);

}



int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}