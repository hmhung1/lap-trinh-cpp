#include <iostream>

int main() {
	int a[6] = {10,8,5,9,7, 2};

	for (int i = 0; i < 6; i++) {
		int m = i;
		for(int j = i+1; j < 6; j++) {
			if (a[j] < a[m]) {
				m = j;
			}
		}

		if (m != i) {
			int temp = a[i];
			a[i] = a[m];
			a[m] = temp;
		}
	}

	for (int i = 0; i < 6; i++) {
		std::cout << a[i] << std::endl;
	}

	return 0;
}
