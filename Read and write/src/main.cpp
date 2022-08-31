#include <iostream>
#include <fstream>
#include <string>


namespace nasp 
{
	//Template print function
	template <typename T>
	void Print(T t) 
	{
		std::cout << t << "\n";
	}

	//Writes to textfile
	void WriteToFile(std::string filePath) 
	{
		std::ofstream file(filePath);
		std::string fileContent;
		std::getline(std::cin, fileContent);
		file << fileContent;
		file.close();
	}

	std::string filePath = "myFile.txt";

	void ReadFromFile() 
	{
		std::string fileContent;
		std::ifstream openFile("myFile.txt");
		while(std::getline(openFile, fileContent)) 
		{
			std::cout << "Filecontent: " << fileContent << "\n";
		}
		openFile.close();
	}
}

int main()
{
	nasp::Print("Skriv något:");
	nasp::WriteToFile(nasp::filePath);
	nasp::ReadFromFile();
}