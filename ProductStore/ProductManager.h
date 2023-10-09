#ifndef PRODUCTMANAGER_H
#define PRODUCTMANAGER_H
#include "Product.h"
class ProductManager
{

		
	public:
		ProductManager();
		bool Insert(Product p);
		bool Delete(int id);
		bool update(Product p);
		Product retrieve(Product p);
		
		~ProductManager();
	protected:
};

#endif
