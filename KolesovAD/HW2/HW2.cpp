#include <iostream>

int main() {
	// ����� 1
	std::cout << "������� ���������� ����� ����������, ������� ���������� �������: ";
	int fib_count;
	bool flag = false;
	while (not flag) {
		std::cin >> fib_count;
		if (fib_count < 0) {
			std::cout << "������ ������� ������������� ���������� ����� :(" << std::endl << "���������� ��� ���: ";
		}
		else if (fib_count == 0) {
			std::cout << "0 �����, �� �� -_-" << std::endl;
			flag = true;
		}
		else if (fib_count == 1) {
			std::cout << 1 << "." << std::endl;
			flag = true;
		}
		else {
			std::cout << 1 << ";" << 1;
			int prev_prev_fib_number = 1;
			int prev_fib_number = 1;
			int fib_number;
			for (int i = 2; i < fib_count; i++) {
				fib_number = prev_prev_fib_number + prev_fib_number;
				std::cout << ";" << fib_number;
				prev_prev_fib_number = prev_fib_number;
				prev_fib_number = fib_number;
			}
			std::cout << "." << std::endl;
			flag = true;
		}
	}
	// ����� 2
	std::cout << "������� �����, ������� ������ �����������: ";
	int number;
	std::cin >> number;
	int sign;
	if (number < 0) {
		sign = -1;
	}
	else if (number == 0) {
		sign = 0;
	}
	else {
		sign = 1;
	}
	int pos_number = abs(number);
	int new_number = 0;
	while (pos_number > 0) {
		new_number = new_number * 10 + pos_number % 10;
		pos_number /= 10;
	}
	new_number *= sign;
	std::cout << "����������� �����: " << new_number;
	return 0;
}
