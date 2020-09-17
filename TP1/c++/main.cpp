#include "Image.hpp"


int main() {
	int h = 1000;
	int l = 1000;
	Image im(h, l);
	im.modifyEveryPixels(10000);
	return 0;
}
