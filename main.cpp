#include <iostream>


void function(int vec[]) {

	for (int i = 4; i >= 0; --i) {

		std::cout << vec[i];

	}
	
}

int main() {

	int vec[5] { 1, 2, 3, 4, 5 };		

	function(vec);

}
