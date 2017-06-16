#include <iostream>
#include <map>
#include <vector>
#include <stdexcept>

using namespace std;

class Graph {
protected :
     map <int , vector <int > > outgoing ;
public :
    Graph ( const vector <int > & startPoints , const vector <int > &endPoints )
    {
        if( startPoints . size () != endPoints . size ())
            throw invalid_argument (" Start / end point lists differ in length ");

        for ( unsigned i = 0; i < startPoints . size (); i++ )
        {
            int start = startPoints [i], end = endPoints [i];
            outgoing [ start ]. push_back ( end );
            outgoing [ end ]; // Just to indicate this node exists
        }
    }
    int numOutgoing ( const int nodeID ) const
    {
        return adjacent ( nodeID ). size ();
    }

    const vector <int > & adjacent ( const int nodeID ) const
    {
        map <int , vector <int > >:: const_iterator i = outgoing . find ( nodeID );
        if(i == outgoing . end ())
            throw invalid_argument (" Invalid node ID");
        return i-> second ;
    }
 };



int main()
{
    cout << "Hello world!" << endl<<endl<<endl;
    vector<int> a,b;
    a.push_back(1);
    a.push_back(2);
    b.push_back(3);
    b.push_back(4);
    Graph g(a,b);
    cout<<g.numOutgoing(2);
    g.adjacent(3);
    return 0;
}
