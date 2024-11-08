#include "brightener.h"

ImageBrightener::ImageBrightener(Image& inputImage) : m_inputImage(inputImage) {
}

int ImageBrightener::BrightenWholeImage() {
	int attenuatedPixelCount = 0;
	for (int x = 0; x < m_inputImage.rows; x++) {
		for (int y = 0; y < m_inputImage.columns; y++) {
			int index = x * m_inputImage.columns + y;
			if (m_inputImage.pixels[index] >(255 - 25)) {
				++attenuatedPixelCount;
				m_inputImage.pixels[index] = 255;
			}
			else {
				m_inputImage.pixels[index] += 25;
			}
		}
	}
	return attenuatedPixelCount;
}
