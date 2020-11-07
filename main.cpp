#include <iostream>
#include "include/core/SkPaint.h"
#include "include/core/SkCanvas.h"

int main() 
{
	auto paint = new SkPaint();
	paint->setAntiAlias(false);
	SkCanvas * canvas = nullptr;
	std::cout << "Skia test" << '\n';
	return 0;
}
