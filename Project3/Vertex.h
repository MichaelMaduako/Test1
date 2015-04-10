#ifndef VERTEX_H
#define VERTEX_H

#include <vector>
using namespace std;


class Vertex
{
public:
	/* Vertex() - default constructor
	 Preconditions: none
	 Postconditions: creates a Vertex object with
	 unique integer ID. */

	 Vertex();


	 /* GetID() - returns the ID of the Vertex object.
	 Preconditions: none
	 Postconditions: returns the integer ID of the
	 Vertex object. */

	 int GetID() const;

private:
	 int m_id;
	 static int id;
};

//Overload << operator as non member function
ostream & operator << (ostream & out, const Vertex& ID);



#endif
