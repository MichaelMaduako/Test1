#include <vector>
#include <iostream>
#include "Vertex.h"

using namespace std;


Vertex::Vertex()
{
	m_id = id++;
}

int Vertex::id = 0;

int Vertex::GetID()const
{
	return m_id;
}

ostream & operator << (ostream & out, const Vertex& ID)
{
	cout << "ID: " << ID.GetID() << endl;
	return out;
}
