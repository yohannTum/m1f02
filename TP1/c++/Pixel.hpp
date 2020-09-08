#include <iostream>

class Pixel {
public :
	int r, g, b;

	Pixel();

	~Pixel();

	int getR();
	
	int getG();

	int getB();

	void setR(int n);

	void setG(int n);

	void setB(int n);
};
