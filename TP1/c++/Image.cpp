#include "Image.hpp"

Image::Image(int h = 10, int l = 10) {
	tab = new Pixel [h*l];
}

Image::~Image() {
	delete tab;
}

Pixel Image::get(int h, int l) {
	return tab[h*this->l + l];
}

Pixel Image::set(int h, int l, int r, int g, int b) {
	this->get(h, l).setR(r);
	this->get(h, l).setG(g);
	this->get(h, l).setB(b);
}
