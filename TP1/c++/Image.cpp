#include "Image.hpp"

Image::Image(int h = 10, int l = 10) {
	this->h = h;
	this->l = l;
	tab = new Pixel [this->h*this->l];
}

Image::~Image() {
	delete [] tab;
}

Pixel Image::get(int h, int l) {
	return tab[h*this->l + l];
}

void Image::set(int h, int l, int r, int g, int b) {
	this->get(h, l).set(r, g, b);
}

void Image::modifyEveryPixels(int nb_times) {
	for (int i=0 ; i<nb_times ; i++) {
		for (int j=0 ; j<this->h*this->l ; j++) {
			this->tab[j].set(j, 0, 0);
		}
	}
}

void Image::print() {
	for (int i=0 ; i<this->h*this->l ; i++) {
		if (i%this->l == 0)
			std::cout << std::endl;

		this->tab[i].print();
	}
}
