#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>

#include "nqueens_puzzle/nqueens_puzzle.h"
#include "kata/trie.h"


namespace but = boost::unit_test;
using namespace puzzles;
using namespace std;

BOOST_AUTO_TEST_CASE( OneQueenTest)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 1);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 1);
    BOOST_TEST( solutions[0].size() == 1);
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

    kata::Trie<unsigned int> trie;
    for( auto s : solutions)
    {
        BOOST_TEST( trie.Find( s) == false);
        trie.Insert( s);
    }
}

BOOST_AUTO_TEST_CASE( FiveQueenTest)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 5);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 10);
    BOOST_TEST( solutions[0].size() == 5);

    kata::Trie<unsigned int> trie;
    for( auto s : solutions)
    {
        BOOST_TEST( trie.Find( s) == false);
        trie.Insert( s);
    }
}

BOOST_AUTO_TEST_CASE( SixQueenTest)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 6);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 4);
    BOOST_TEST( solutions[0].size() == 6);

    kata::Trie<unsigned int> trie;
    for( auto s : solutions)
    {
        BOOST_TEST( trie.Find( s) == false);
        trie.Insert( s);
    }
}

BOOST_AUTO_TEST_CASE( SevenQueenTest)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 7);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 40);
    BOOST_TEST( solutions[0].size() == 7);

    kata::Trie<unsigned int> trie;
    for( auto s : solutions)
    {
        BOOST_TEST( trie.Find( s) == false);
        trie.Insert( s);
    }
}

BOOST_AUTO_TEST_CASE( EigthQueenTest)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 8);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 92);
    BOOST_TEST( solutions[0].size() == 8);

    kata::Trie<unsigned int> trie;
    for( auto s : solutions)
    {
        BOOST_TEST( trie.Find( s) == false);
        trie.Insert( s);
    }
}

BOOST_AUTO_TEST_CASE( NineQueenTest)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 9);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 352);
    BOOST_TEST( solutions[0].size() == 9);

    kata::Trie<unsigned int> trie;
    for( auto s : solutions)
    {
        BOOST_TEST( trie.Find( s) == false);
        trie.Insert( s);
    }
}

