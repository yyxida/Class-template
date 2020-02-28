#include<iostream>
#include<string>
using namespace std;

//总结：
//通过类模板创建对象，可以有三种方式像函数中传参
//使用比较广泛的是第一种：传入指定类型

//类模板对象做函数参数
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
		cout << "姓名：" << this->m_Name << "\t年龄：" << this->m_Age << endl;
	}
};



//1，传入指定类型
void Printperson1(Person<string, int> &P)
{
	P.Showperson();
}
void test01()
{
	Person<string, int>p("田所浩二", 24);
	Printperson1(p);
}



//2，参数模板化
template <class T1, class T2>
void Printperson2(Person<T1, T2>&P)
{
	P.Showperson();
	cout << "T1的类型为：" << typeid(T1).name() << endl;
	cout << "T2的类型为：" << typeid(T2).name() << endl;

}

void test02()
{
	Person<string, int>p("田所浩三", 25);
	Printperson2(p);

}
//3，整个类模板化
template<class T> 
void Printperson3(T &P)
{
	P.Showperson();
	cout << "T的数据类型：" << typeid(T).name() << endl;
}


void test03()
{
	Person<string, int>p("田所浩四", 26);
	Printperson3(p);

}



int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}