#ifndef NQUEENS_PUZZLE
#define NQUEENS_PUZZLE

#include <vector>

namespace puzzles
{
    using namespace std;

    class NQueensPuzzle
    {
    private:
        unsigned int m_Size { 0 };

    public:
        NQueensPuzzle() = delete;
        NQueensPuzzle( const NQueensPuzzle&) = delete;
        NQueensPuzzle& operator = (const NQueensPuzzle&) = delete;

        NQueensPuzzle( unsigned int size);

    public:
        void Solve( vector<vector<unsigned int>>& solutions);

    private:
        bool CheckInsertion( const vector<vector<bool>>& board, unsigned int row, unsigned int col) const;
        bool CheckBeating( const vector<vector<bool>>& board, unsigned int r, unsigned int c) const;

    private:
        void InsertQueen( vector<vector<bool>>& board, unsigned int row, unsigned int col);
        void DeleteQueen( vector<vector<bool>>& board, unsigned int row, unsigned int col);
        void Run( vector<vector<bool>>& board, unsigned int row, unsigned int queens, vector<vector<unsigned int>>& solutions);
    };
}

#endif /* NQUEENS_PUZZLE */
