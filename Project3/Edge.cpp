#include <vector>
#include <iostream>
#include "Edge.h"
#include "Vertex.h"


using namespace std;

Edge::Edge(Vertex *v1, Vertex *v2)
	:m_v1(v1), m_v2(v2)
{
	if(v1 == NULL && v2 == NULL)
		cerr << "This is an empty vertex. " << endl;

}

Vertex* Edge::GetV1()const
{
	return m_v1;
}

Vertex* Edge::GetV2()const
{
	return m_v2;
}
void Edge::SetV1(Vertex *v)
{
	if(v != NULL)
		m_v1 = v;
	else
		cerr << "This is an empty vertex. " << endl;
}

void Edge::SetV2(Vertex *v)
{
	if(v != NULL)
		m_v2 = v;
	else
		cerr << "This is an empty vertex. " << endl;
}

ostream& operator <<(ostream &sout, const Edge &e)
{
	cout << "ID: " << e.GetV1() << "<- -> ID: " << e.GetV2() << endl;
	return sout;
}
