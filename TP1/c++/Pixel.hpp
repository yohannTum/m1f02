#include <iostream>

class Pixel {
public :
	int r, g, b;

	Pixel();

	~Pixel();

	void print();

	int getR();
	
	int getG();

	int getB();

	void set(int r, int g, int b);

	void setR(int n);

	void setG(int n);

	void setB(int n);
};
