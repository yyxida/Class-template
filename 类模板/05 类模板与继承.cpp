#include<iostream>
using namespace std;

//��ģ����̳�

//�����������ģ�壬��ô�����ڼ̳е�ʱ���Ҫ����������T����������
//���Ҫ���ָ����ģ������ԣ���ô����ҲҪ��������ģ�壨27�У�

template<class T>
class Base
{
public:
	T m;
};


//class Son :public Base //����Ҫ֪�������е�T�����ͣ����ܼ̳и�����
class Son:public Base<int>
{

};
void test01()
{
	Son s1;
}

//��������ָ�������е�T���ͣ�����ҲҪ���ģ��
template<class T1,class T2>
class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << "T1������Ϊ��" << typeid(T1).name() << endl;
		cout << "T2������Ϊ��" << typeid(T2).name() << endl;
	}
	T1 obj;
};

void test02()
{
	Son2<int,char> S2;//int����T1 obj��char����T2Ҳ���Ǹ����T�������е�T�����char)

}
int main()
{
	test02();
	return 0;
}