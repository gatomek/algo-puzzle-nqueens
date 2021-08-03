#include <iostream>
#include <vector>

#include "nqueens_puzzle/nqueens_puzzle.h"

using namespace std;

std::ostream& operator<<(std::ostream& ostr, const vector<unsigned int>& vec)
{
    ostr << "[ ";

    const unsigned int size { vec.size() };
    const unsigned int size_1 { vec.size() - 1 };

    for( int i { 0 }; i < size; i ++)
    {
        ostr << vec[ i];
        if( i != size_1)
            ostr << ", ";
    }

    ostr << " ]";

    return ostr;
}

int main()
{
    cout << "8-Queens Puzzle" << endl << endl;

    vector<vector<unsigned int>> solutions;
    solutions.reserve( 100);

    puzzles::NQueensPuzzle puzzle( 8);
    puzzle.Solve( solutions);

    cout << "Solutions: " << endl;
    for( const vector<unsigned int>& s : solutions)
        cout << s << endl;
    cout << "Count: " << solutions.size() << endl;
}

