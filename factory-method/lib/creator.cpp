#include "creator.hpp"
#include "document.hpp"


Document* TextDocumentCreator::create() {
    return new TextDocument();
}


Document* PictureDocumentCreator::create() {
    return new PictureDocument();
}