#include <iostream>

int main() {
	// ����� 1
	// ������������ ���� char
	char symbol1 = 128; // � �������������
	char symbol2 = -128; // ������ ��� ������������
	std::cout << symbol1 << std::endl;
	std::cout << symbol2 << std::endl;
	std::cout << (symbol1 == symbol2) << std::endl; // �������� �� ���������
	// ������������ ���� double
	double number = 1.7E+308 * 10;
	std::cout << number << std::endl;
	// ����� 2
	int digit;
	std::cout << "Enter the digit: ";
	std::cin >> digit;
	switch (digit) {
	case 0:
		std::cout << "The first letter of this digit is 'z'";
		break;
	case 1:
		std::cout << "The first letter of this digit is 'o'";
		break;
	case 2:
		std::cout << "The first letter of this digit is 't'";
		break;
	case 3:
		std::cout << "The first letter of this digit is 't'";
		break;
	case 4:
		std::cout << "The first letter of this digit is 'f'";
		break;
	case 5:
		std::cout << "The first letter of this digit is 'f'";
		break;
	case 6:
		std::cout << "The first letter of this digit is 's'";
		break;
	case 7:
		std::cout << "The first letter of this digit is 's'";
		break;
	case 8:
		std::cout << "The first letter of this digit is 'e'";
		break;
	case 9:
		std::cout << "The first letter of this digit is 'n'";
		break;
	default:
		std::cout << "This is not the digit :(";
	}
	return 0;
}
