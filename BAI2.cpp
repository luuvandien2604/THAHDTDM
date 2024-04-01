#include <iostream>
#include <cmath>
#include <cstdlib> 

bool LaSoChinhPhuong(int n) {
	int sqrtN = sqrt(n);
	return sqrtN * sqrtN == n;
}

void DemVaInSoChinhPhuong(int n) {
	int count = 0;
	for (int i = 1; i * i < n; i++) {
		std::cout << i * i << " ";
		count++;
	}
	std::cout << "\nCó " << count << " số chính phương nhỏ hơn " << n << std::endl;
}

int main() {
	std::cout << "Nhập số nguyên dương n: ";
	int n;
	std::cin >> n;
	DemVaInSoChinhPhuong(n);
	system("pause"); 
	return 0;
}
