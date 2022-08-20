#include <iostream>
#include <vector>

int main() {
	int cell_count = 5;

	// Create a vector array to hold probabilities.
	std::vector<float> p;

	// Add the probabilities into the vector.
	for (int i = 0; i < cell_count; i++) 
		p.push_back(1.0/cell_count);

	// Print the elements.
	for (auto element : p) std::cout << element << std::endl;

	return 0;
}
