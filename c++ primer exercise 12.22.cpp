struct x
{
	x(int i, int j) :base(i), rem(base%j) {}
	int rem, base;
};

struct n
{
	n(int i) {}
};

class c
{
public:
	c() : i(0), d(i) {}
private:
	int i;
	n d;
};