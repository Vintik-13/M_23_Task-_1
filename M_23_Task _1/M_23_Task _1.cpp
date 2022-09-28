/*Задание 1. Реализация продвинутого ввода и вывода дней недели

Что нужно сделать
Используя макросы, реализуйте небольшую программу по вводу дня недели 
и выводу этого дня недели в текстовом виде в консоль.
В начале программы пользователь вводит день недели в виде его порядкового
номера. В результате в консоли появляется буквенное отображение этого
дня недели.
В этом упражнении запрещается использовать классические переменные,
кроме как для хранения ввода пользователя. Использовать строковые 
литералы напрямую тоже нельзя. Всё должно быть реализовано исключительно
на макросах.
Советы и рекомендации
Конкатенация двух фрагментов может породить токен, который в свою
очередь является именем макроса, и этот макрос тоже раскроется.
Используйте это свойство для перевода константы дня недели в строковый
литерал.
Обязательно просмотрите итоговый код после препроцессинга из CLion с
помощью Shift-Shift → Preprocess current TU.
*/

#include <iostream>
#include <regex>
#include <string>

#define MONDEY 1
#define TUESDEY 2
#define WENESDEY 3
#define THURSDEY 4
#define FRIDAY 5
#define SETURDAY 6
#define SUNDEY 7


int main()
{
	const std::string PATTERN = "[1-7]{1}";
	std::regex reg_p(PATTERN);

    std::string str_day_week;
	do
	{
		std::cout << "Enter the serial number of the day of the week: ";
		std::getline(std::cin, str_day_week);
	} while (!std::regex_match(str_day_week, reg_p));

	int int_day_week = std::stoi(str_day_week);

	switch (int_day_week) {
	case MONDEY:
		std::cout << "The " << MONDEY << " day of the week is monday";
		break;
	case TUESDEY:
		std::cout << "The " << TUESDEY << " day of the week is tuesdey";
		break;
	case WENESDEY:
		std::cout << "The " << WENESDEY << " day of the week is wenesdey";
		break;
	case THURSDEY:
		std::cout << "The " << THURSDEY << " day of the week is thursdey";
		break;
	case FRIDAY:
		std::cout << "The " << FRIDAY << " day of the week is friday";
		break;
	case SETURDAY:
		std::cout << "The " << SETURDAY << " day of the week is seturday";
		break;
	case SUNDEY:
		std::cout << "The " << SUNDEY << " day of the week is sundey";
		break;
	default:
		break;
	}
}


