#include<iostream>
using namespace std;

//类模板与继承

//如果父类是类模板，那么子类在继承的时候就要声明父类中T的数据类型
//如果要保持父类的模板灵活性，那么子类也要构建成类模板（27行）

template<class T>
class Base
{
public:
	T m;
};


//class Son :public Base //错误，要知道父类中的T的类型，才能继承给子类
class Son:public Base<int>
{

};
void test01()
{
	Son s1;
}

//如果想灵活指定父类中的T类型，子类也要变成模板
template<class T1,class T2>
class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << "T1的类型为：" << typeid(T1).name() << endl;
		cout << "T2的类型为：" << typeid(T2).name() << endl;
	}
	T1 obj;
};

void test02()
{
	Son2<int,char> S2;//int给了T1 obj，char给了T2也就是父类的T（父类中的T变成了char)

}
int main()
{
	test02();
	return 0;
}