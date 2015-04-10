#include <iostream>
#include "Graph.h"

using namespace std;

void PrintMenu();

int main()
{
	Graph graph;
	Vertex vertex;
//	Matrix matrix;
//	Edge edge;

	char input;
		//Print opening message to user for input
		cout << "There is no data file loaded." << endl;
		cout << "\n";
		PrintMenu();
		cin >> input;

		//Unless user enters l,v,e, or c then keep asking user for input
		while(input != 'q')
		{


			//Unless you quit, you will go through the processes in the menu
			string filename;
			//If the user wishes to LOAD a graph data file...
			switch(input)
			{
				case 'l':

					cout << "Enter the file name: ";
					cin >> filename;
					cout << "\n";

					//If the data file does not exist
					if(graph.LoadFromFile(filename) == false)
					{
						cout << "Error loading data file (" << filename << ")." << endl;
						cout << "There is no data file loaded. " << endl;

					}//If the data file does exist
					else
						cout << "The data file " << filename << " is currently loaded." << endl;

					cout << "\n";
					PrintMenu();
					cin >> input;
					cout << "\n";
					break;


				//If the user wishes to list the VERTICES of the graph
				case 'v':

					Vertex *v;
					Edge *e, *next;
					while()
					cout << e->GetV1()->GetID();

					cout << "\n";
					cout << "Vertices: \n";


					cout << "\n";

					PrintMenu();
					cin >> input;
					break;


				//If the user wishes to list the EDGES of the graph
				case 'e':

					cout << "\n";
					cout << "Edges: \n";
					cout << "\n";
					PrintMenu();
					cin >> input;
					break;


				// If the user wishes to list the CONNECTED COMPONENT of the graph
				case 'c':

					cout << "\n";
					cout << "Find the connected component of a given vertex."
						 << "\n"
						 << "Enter vertex ID: ";


					cout << vertex.GetID();


					cout << "\n";

					PrintMenu();
					cin >> input;
					cout << "\n";
					break;






				//If the input does not match the following responses
				default:
					cerr << "That input is invalid." << endl;
					cout << "\n";
					PrintMenu();
					cin >> input;
				}


		}

	cout << "Goodbye!";
	return 0;
}





void PrintMenu()
{
	cout << "Choose an action from the following menu: \n" <<
			"l - load a data file \n" <<
			"v - list the vertices of the loaded graph \n" <<
			"e - list the edges of the loaded graph \n" <<
			"c - list the connected component of a specific vertex \n" <<
			"q - quit \n" <<
			"Selection: ";
}
