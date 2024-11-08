#ifndef BRIGHTENER_H
#define BRIGHTENER_H

#include <vector>

struct Image {
	int rows;
	int columns;
	uint8_t pixels[1024 * 1024]; 
};

class ImageBrightener {

public:
	ImageBrightener(Image& inputImage);
	int BrightenWholeImage();
private:
	Image& m_inputImage;
};

#endif 
