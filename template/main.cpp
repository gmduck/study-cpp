#include <iostream>

namespace cslee
{
	template<typename T>
	class Vector
	{
		T* elem;
		int size;
		int capacity;

	public:
		Vector() : size{ 0 }, elem{ nullptr }, capacity{ 0 } {}
		explicit Vector(int s) : size{ s }, elem{ new T[s] }, capacity{ s } // �ڵ� ����ȯ ����
		{
			memset(elem, 0, sizeof(T)* size);
		}
		void printElem()
		{
			for (auto i = 0; i < size; ++i) std::cout << elem[i] << std::endl;
		}
	};

	class A // �ڵ� ����ȯ �׽�Ʈ
	{
	public:
		int num;
		explicit A(int a) : num{ a } {} 
	};

	void printA(A a)
	{
		std::cout << a.num << std::endl;
	}
}

int main()
{
	cslee::Vector<char>* charVector = new cslee::Vector<char>(100);
	charVector->printElem();
	return 0;
}