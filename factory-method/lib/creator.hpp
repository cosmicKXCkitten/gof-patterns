#pragma once 
#include "document.hpp"


class Creator {
public:
    virtual Document* create() = 0;
    virtual ~Creator() { }
};


class TextDocumentCreator : public Creator {
public:
    Document* create() override;
};


class PictureDocumentCreator : public Creator {
public:
    Document* create() override;
};