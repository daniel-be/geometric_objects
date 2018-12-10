#include "point.hpp"

template <int DIM>
Point<DIM>::Point(const Point& p)
{
	for (int i = 0; i < DIM; i++) this->x[i] = p.x[i];
}

template <int DIM>
::Point<DIM>::Point(double x0, double x1, double x2)
{
	this->x[0] = x0;
	if (DIM > 1) this->x[1] = x1;
	if (DIM > 2) this->x[2] = x2;
	if (DIM > 3) throw("Constructor by coordinates not implemented for DIM > 3");
}


template <int DIM>
Point<DIM>& ::Point<DIM>::operator=(const Point& p)
{
	for (int i = 0; i < DIM; i++) this->x[i] = p.x[i];
	return *this;
}

template <int DIM>
bool Point<DIM>::operator==(const Point& p)
{
	for (int i = 0; i < DIM; i++) if (this->x[i] != p.x[i]) return false;
	return true;
}
