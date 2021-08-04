#include <iostream>
#include <vector>

#include "nqueens_puzzle/nqueens_puzzle.h"

using namespace std;

std::ostream& operator<<(std::ostream& ostr, const vector<unsigned int>& vec)
{
    ostr << "[ ";

    const size_t size { vec.size() };
    const size_t size_1 { size - 1 };

    for( size_t i { 0 }; i < size; i ++)
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
    for( const auto& s : solutions)
        cout << s << endl;
    cout << "Count: " << solutions.size() << endl;
}

