class Object
{
protected:
	int Type;
	int Size;
public:
	Object(void);
};

class DataCtrl : Object
{
};

class Scalar : Object
{
private:
	DataElememnt Data;
public:
	Scalar(void);
};

class Matrix : Object
{
protected:
};

class Vector : Object
{
};

class Set : Object
{
};

class Bag : Object
{
};

class Function : Object
{
};

class Operator : Object
{
};

class Class : Object
{
};

struct DataElement
{
	void *Pointer;
	int Size;
	int Type;
};
