#include "document.hpp"
#include <iostream>


void TextDocument::show() {
    std::cout << "This is a TEXT document" << std::endl;
}


void PictureDocument::show() {
    std::cout << "This is a PICTURE document" << std::endl;
}
