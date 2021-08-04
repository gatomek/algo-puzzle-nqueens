#include "nqueens_puzzle/nqueens_puzzle.h"

#include <algorithm>
#include <cassert>

namespace puzzles
{
    NQueensPuzzle::NQueensPuzzle( unsigned int size)
        : m_Size( size)
    {
        assert( m_Size > 0);
    }

    inline bool NQueensPuzzle::CheckInsertion( const vector<vector<bool>>& board, unsigned int row, unsigned int col) const
    {
        return ! board[ row][ col];
    }

    inline void NQueensPuzzle::InsertQueen( vector<vector<bool>>& board, unsigned int row, unsigned int col)
    {
        board[ row][ col] = true;
    }

    inline void NQueensPuzzle::DeleteQueen( vector<vector<bool>>& board, unsigned int row, unsigned int col)
    {
        board[ row][ col] = false;
    }

    bool NQueensPuzzle::CheckBeating( const vector<vector<bool>>& board, unsigned int r, unsigned int c, unsigned int queens) const
    {
        if( queens == 0)
            return true;

        const unsigned int size { m_Size };

        for( unsigned int row { 0 }; row < r; row ++)
            for( unsigned int col { 0 }; col < size; col ++)
                if( board[ row][ col])
                {
                    if( c == col)
                        return false;

                    const unsigned int deltaW = max( r, row) - min( r, row);
                    const unsigned int deltaK = max( c, col) - min( c, col);
                    if( deltaW == deltaK)
                        return false;
                }

        return true;
    }

    void NQueensPuzzle::Solve( vector<vector<unsigned int>>& solutions)
    {
        vector<vector<bool>> board( m_Size);
        for( unsigned int row = 0; row < m_Size; row ++)
            board[ row] = vector<bool>(m_Size, false);

        Run( board, 0, 0, solutions);
    }

    void NQueensPuzzle::Run( vector<vector<bool>>& board, unsigned int row, unsigned int queens, vector<vector<unsigned int>>& solutions)
    {
        assert( row < m_Size);

        const unsigned int size { m_Size };

        for( unsigned int col { 0 }; col < size; col ++)
        {
            assert( CheckInsertion( board, row, col));

            if( CheckBeating( board, row, col, queens))
            {
                InsertQueen( board, row, col);
                queens ++;

                if( queens == size)
                {
                    vector<unsigned int> solution;
                    solutions.reserve( size);

                    for( unsigned int c { 0 }; c < size; c ++)
                        for( unsigned int r { 0 }; r < size; r ++)
                            if( board[ r][ c])
                                solution.push_back( r);

                    solutions.push_back( solution);
                }
                else if( row + 1 < size)
                {
                    Run( board, row + 1, queens, solutions);
                }

                DeleteQueen( board, row, col);
                queens --;
            }
        }
    }
}
