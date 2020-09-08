#include <iostream>
#include "Pixel.hpp"

class Image {
private:
	int h, l;

	Pixel *tab;

public:
	Image(int h, int l);

	~Image();

	Pixel get(int h, int l);

	Pixel set(int h, int l, int r, int g, int b);
};
