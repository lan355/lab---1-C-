#include "pch.h"
#include <iostream>
#include <string>


int main()
{
	setlocale(LC_ALL, "Russian");

	struct books {

		std::string Creator;
		std::string genre;
		std::string title;
		int edition;

	};

	books readText;

	readText.Creator = "Дмитрий Емец";

	readText.genre = "Фэнтези";

	readText.title = "Мефодий Буслаев";

	readText.edition = 19000;

	std::string readTextCreator = "";
	std::string readTextGenre = "";
	std::string readTextTitle = "";

	int ResultEdition = 10000;

	int edition = readText.edition;

	if (edition <= ResultEdition) {

		ResultEdition = edition;
		readTextCreator = readText.Creator;
		readTextGenre = readText.genre;
		readTextTitle = readText.title;

		std::cout << "\nCreator:" << readTextCreator << "\nGenre:" << readTextGenre << "\nTitle:" << readTextTitle << "\nEdition:" << ResultEdition << std::endl;

	}
	else
	{
		std::cout << "Этот первый тераж превышает допустимого(10000)";
	}

	std::cout << std::endl;

	books readText2;

	readText2.Creator = "Рекс Стаут";

	readText2.genre = "Детектив";

	readText2.title = "Звонок в дверь";

	readText2.edition = 7000;


	std::string readTextCreator2 = "";
	std::string readTextGenre2 = "";
	std::string readTextTitle2 = "";
	std::string readTextEdition2 = "";

	int ResultEdition2 = 10000;

	int edition2 = readText2.edition;

	if (edition2 <= ResultEdition2) {

		ResultEdition2 = edition2;
		readTextCreator2 = readText2.Creator;
		readTextGenre2 = readText2.genre;
		readTextTitle2 = readText2.title;


		std::cout << "\nCreator:" << readTextCreator2 << "\nGenre:" << readTextGenre2 << "\nTitle:" << readTextTitle2 << "\nEdition:" << ResultEdition2 << std::endl;
	}
	else
	{
		std::cout << "Этот второй тераж превышает допустимого(10000)";
	}

	return 0;
}
