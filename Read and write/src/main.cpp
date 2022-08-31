#include <iostream>

namespace nasp 
{

	template <typename T>
	void Print(T t) 
	{
		std::cout << t << "\n";
	}
}

int main()
{
	nasp::Print("ses");
}