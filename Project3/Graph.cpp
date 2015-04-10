#include <cstdlib>
#include <vector>
#include <fstream>
#include <iostream>
#include "Graph.h"
#include "Vertex.h"
#include "Edge.h"

using namespace std;

Graph::Graph()
{ /* nothing to do */ }

Graph::Graph(vector<Vertex *> vertices, vector<Edge *> edges) :
  m_vertices(vertices), m_edges(edges)
{
  for (int i = 0; i < vertices.size(); i++)
    if (vertices[i] == NULL) {
      cerr << "Error: Graph constructor expects non-null vertices." << endl;
      exit(1);
    }

  for (int i = 0; i < edges.size(); i++)
    if (edges[i]->GetV1() == NULL || edges[i]->GetV2() == NULL) {
      cerr << "Error: Graph constructor expects edges with non-null vertices." << endl;
      exit(1);
    }
}

bool Graph::LoadFromFile(string fileName) {
  int numVertices;
  int v1, v2;
  vector<Vertex*> vertices;
  vector<Edge*> edges;
  ifstream dataFile;

  /* Set exception flags for file input stream */

  dataFile.exceptions(ios::failbit | ios::badbit);

  try {

    dataFile.open(fileName.c_str());
    dataFile >> numVertices;
    for ( int i = 0; i < numVertices; i++ )
      vertices.push_back( new Vertex() );

    dataFile >> v1 >> v2;

    while ( v1 > 0 && v2 > 0 ) {
      if (v1 <= numVertices && v2 <= numVertices )
        edges.push_back( new Edge(vertices[v1-1], vertices[v2-1]) );
      dataFile >> v1 >> v2;
    }

    dataFile.close();
  }
  catch (exception e) {
    return false;
  }

  m_vertices = vertices;
  m_edges = edges;

  return true;
}

vector <Vertex *> Graph::GetVertices() const
{
	return m_vertices;
}

vector <Edge *> Graph::GetEdges() const
{
	return m_edges;
}

int Graph::GetNumVertices() const
{
	return m_vertices.size();
}

int Graph::GetNumEdges() const
{
	return m_edges.size();
}
