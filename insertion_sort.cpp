#include <iostream>

void imprime(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

void ordena(int* arr, int n) {
	int i, j, temp;
	
	for(i = 0; i < n; i++){
		j = i;
		
		while(j > 0 && arr[j - 1] > arr[j]){
			temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
			j--;
		}
	}
}

int main() {

	int notas[] = {5, 3, 4, 10, 8, 7, 9};

	imprime(notas, 7);
	ordena(notas, 7);
	imprime(notas, 7);

	return 0;
}