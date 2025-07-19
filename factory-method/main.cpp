#include <iostream>
#include "lib/creator.hpp"
#include "lib/document.hpp"


void show(Creator* creator) {
    Document* document = creator->create();
    // some work with document
    document->show();
    delete document;
}


int main() {
    Creator* creator1 = new TextDocumentCreator();
    show(creator1);
    delete creator1;

    Creator* creator2 = new PictureDocumentCreator();
    show(creator2);
    delete creator2;

    return 0;
}