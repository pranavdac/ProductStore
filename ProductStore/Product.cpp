#include "Product.h"

Product::Product()
{
}
Product::Product(int id,string title,string desc,double price,int like)
{
    this->id=id;
	this->title=title;
	this->description=desc;
	this->price=price;
	this->like=like;
}
Product::~Product()
{
}
