#include "Pixel.hpp"

Pixel::Pixel() : r(0), g(0), b(0) {

}

Pixel::~Pixel() {

}

void Pixel::print() {
	std::cout << this->r << " ";
}

int Pixel::getR() {
	return this->r;
}

int Pixel::getG() {
	return this->g;
}

int Pixel::getB() {
	return this->b;
}

void Pixel::set(int r, int g, int b) {
	this->r = r;
	this->g = g;
	this->b = b;
}

void Pixel::setR(int n) {
	this->r = n;
}

void Pixel::setG(int n) {
	this->g = n;
}

void Pixel::setB(int n) {
	this->b = n;
}



