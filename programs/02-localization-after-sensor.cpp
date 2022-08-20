#include <iostream>

int main() {
	float p[] = {0.2, 0.2, 0.2, 0.2, 0.2};
	float pHit = 0.6;
	float pMiss = 0.2;
	
	// 0: miss 1: hit
	bool hit_miss[] = {false, true, true, false, false};

	for (int i = 0; i < sizeof(p)/sizeof(float); i++) {
		if (!hit_miss[i]) p[i] *= pMiss;
		else p[i] *= pHit;
	}

	// Print
	for (auto element : p) std::cout << element << std::endl;

	return 0;
}
