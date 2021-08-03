#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>

#include "nqueens_puzzle/nqueens_puzzle.h"

namespace but = boost::unit_test;
using namespace puzzles;
using namespace std;

BOOST_AUTO_TEST_CASE( BoardOfSize01Puzzle)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 1);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 1);
    BOOST_TEST( solutions[0].size() == 1);
}

BOOST_AUTO_TEST_CASE( BoardOfSize02Puzzle)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 2);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 0);
}

BOOST_AUTO_TEST_CASE( BoardOfSize03Puzzle)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 3);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 0);
}

BOOST_AUTO_TEST_CASE( BoardOfSize04Puzzle)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 4);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 2);
    BOOST_TEST( solutions[0].size() == 4);
}

BOOST_AUTO_TEST_CASE( BoardOfSize05Puzzle)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 5);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 10);
    BOOST_TEST( solutions[0].size() == 5);
}

BOOST_AUTO_TEST_CASE( BoardOfSize06Puzzle)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 6);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 4);
    BOOST_TEST( solutions[0].size() == 6);
}

BOOST_AUTO_TEST_CASE( BoardOfSize07Puzzle)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 7);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 40);
    BOOST_TEST( solutions[0].size() == 7);
}

BOOST_AUTO_TEST_CASE( BoardOfSize08Puzzle)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 8);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 92);
    BOOST_TEST( solutions[0].size() == 8);
}

BOOST_AUTO_TEST_CASE( BoardOfSize09Puzzle)
{
    vector<vector<unsigned int>> solutions;

    NQueensPuzzle puzzle( 9);
    puzzle.Solve( solutions);

    BOOST_TEST( solutions.size() == 352);
    BOOST_TEST( solutions[0].size() == 9);
}

