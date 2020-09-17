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

	void set(int h, int l, int r, int g, int b);

	void modifyEveryPixels(int nb_times);


	void print();
};
