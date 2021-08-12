#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>

#include "nqueens_puzzle/nqueens_puzzle.h"
#include "kata/trie.h"

namespace but = boost::unit_test;
using namespace puzzles;
using namespace std;

bool CheckDuplicates( vector<vector<unsigned int>>& solutions)
{
    kata::Trie<unsigned int> trie;
    for( auto s : solutions)
    {
        if( trie.Find( s))
            return true;

        trie.Insert( s);
    }

    return false;
}

bool CheckBeating( vector<vector<unsigned int>>& solutions)
{
    if( solutions.size() == 0)
        return false;

    const unsigned int size = solutions[0].size();

    for( auto s : solutions)
    {
        vector<pair<unsigned int, unsigned int>> positions;
        for( unsigned int i = 0; i < size; i ++)
            positions.push_back( {s[i], i});

        for( unsigned int i = 0; i < size; i ++)
        {
            const auto queen = positions[i];

            for( unsigned int k = i + 1; k < size; k ++)
            {
                const auto next = positions[ k];

                if( queen.first == next.first)
                    return true;

                if( queen.second == next.second)
                    return true;

                unsigned int deltaRow = max( queen.first, next.first) - min( queen.first, next.first);
                unsigned int deltaCol = max( queen.second, next.second) - min( queen.second, next.second);
                if( deltaRow == deltaCol)
                    return true;
            }
        }
    }

    return false;
}

BOOST_AUTO_TEST_CASE( OneQueenTest)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 1);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 1);
    BOOST_TEST( solutions[0].size() == 1);
    BOOST_TEST( ! CheckBeating( solutions));
}

BOOST_AUTO_TEST_CASE( TwoQueenTest)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 2);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 0);
}

BOOST_AUTO_TEST_CASE( ThreeQueenTest)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 3);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 0);
}

BOOST_AUTO_TEST_CASE( FourQueenTest)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 4);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 2);
    BOOST_TEST( solutions[0].size() == 4);
    BOOST_TEST( ! CheckDuplicates( solutions) );
    BOOST_TEST( ! CheckBeating( solutions));
}

BOOST_AUTO_TEST_CASE( FiveQueenTest)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 5);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 10);
    BOOST_TEST( solutions[0].size() == 5);
    BOOST_TEST( ! CheckDuplicates( solutions) );
    BOOST_TEST( ! CheckBeating( solutions));
}

BOOST_AUTO_TEST_CASE( SixQueenTest)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 6);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 4);
    BOOST_TEST( solutions[0].size() == 6);
    BOOST_TEST( ! CheckDuplicates( solutions) );
    BOOST_TEST( ! CheckBeating( solutions));
}

BOOST_AUTO_TEST_CASE( SevenQueenTest)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 7);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 40);
    BOOST_TEST( solutions[0].size() == 7);
    BOOST_TEST( ! CheckDuplicates( solutions) );
    BOOST_TEST( ! CheckBeating( solutions));
}

BOOST_AUTO_TEST_CASE( EigthQueenTest)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 8);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 92);
    BOOST_TEST( solutions[0].size() == 8);
    BOOST_TEST( ! CheckDuplicates( solutions) );
    BOOST_TEST( ! CheckBeating( solutions));
}

BOOST_AUTO_TEST_CASE( NineQueenTest)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 9);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 352);
    BOOST_TEST( solutions[0].size() == 9);
    BOOST_TEST( ! CheckDuplicates( solutions) );
    BOOST_TEST( ! CheckBeating( solutions));
}

