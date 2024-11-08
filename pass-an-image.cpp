#include <iostream>
#include <memory>
#include <random>
#include "brightener.h"

int main() {
	// Use std::unique_ptr for automatic memory management
	auto image = std::make_unique<Image>();
	image->rows = 512;
	image->columns = 512;

	// Initialize random number generator
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(0, 255);

	std::cout << "Brightening a 512 x 512 image\n";

	// Pass the dereferenced unique_ptr to ImageBrightener
	ImageBrightener brightener(*image);
	int attenuatedCount = brightener.BrightenWholeImage();
	std::cout << "Attenuated " << attenuatedCount << " pixels\n";

	// No need to manually delete the image, unique_ptr will handle it
	return 0;
}
