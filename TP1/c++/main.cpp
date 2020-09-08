#include "Image.hpp"


int main() {
	int h = 10;
	int l = 10;
	Image im(h, l);
	for (int i=0 ; i<h ; i++)
		for (int j=0 ; j<l ; j++)
			im.set(i, j, 5, 100, 255);

	std::cout << "Hello world Image!" << std::endl;
	return 0;
}
