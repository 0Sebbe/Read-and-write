#include <iostream>
#include <fstream>
#include <string>


namespace nasp 
{
	template <typename T>
	void Print(T t) 
	{
		std::cout << t << "\n";
	}

	void WriteToFile(std::string filePath) 
	{
		std::ofstream file(filePath);
		std::string fileContent;
		std::getline(std::cin, fileContent);
		file << fileContent;
		file.close();
	}

	std::string filePath = "myFile.txt";

}

int main()
{
	nasp::Print("Skriv något:");
	nasp::WriteToFile(nasp::filePath);
}