#pragma once


class Document {
public:
    virtual void show() = 0;
    virtual ~Document() { }
};


class TextDocument : public Document {
public:
    void show() override;
};


class PictureDocument : public Document {
    void show() override;
};