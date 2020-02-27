//#include<iostream>
//using namespace std;
////类模板的成员函数并不是一开始就创建，而是调用时才创建。
//class Person1
//{
//public:
//	void Showperson1()
//	{
//		cout << "person1 Phow";
//	}
//};
//
//class Person2
//{
//public:
//	void Showperson2()
//	{
//		cout << "person2 Phow";
//	}
//};
//
//template<class T>
//class MyClass
//{
//public:
//	T obj;
//	//模板中的成员函数，并不是一开始就创建，调用模板时才创建
//	void func1()
//	{
//		obj.Showperson1();
//	}
//	void func2()
//	{
//		obj.Showperson2();
//	}
//
//};
//
//void test01()
//{
//	MyClass<Person1>m;
//	m.func1();
//	//m.func2(); “Showperson2”: 不是“Person1”的成员
//}
//int main()
//{
//	test01();
//	return 0;
//}