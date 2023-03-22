#include <iostream>
void func(int* p, int num) {
	int tmp = *p;
	for (int i = 1; i < num; i++) {
		
		*p*=tmp;
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	
	int n;
	//Task 1
	int arr[]{1,2,3,4,5,6,7,8,9,10};
	int* pa = &arr[0];
	for (int i = 0; i < 10/2; i++) {
		std::swap(*(pa+i*2),*(pa+i*2+1));
	}
	for (int i = 0; i < 10; i++)
		std::cout << arr[i] << " ";
	//Task 2
	n = 2;
	func(&n, 5);
	std::cout << "\n" << n;



	return 0;
}