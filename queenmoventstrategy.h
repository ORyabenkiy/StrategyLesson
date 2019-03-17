#ifndef QUEENMOVENTSTRATEGY_H
#define QUEENMOVENTSTRATEGY_H
#include "imovestrategy.h"

class QueenMoventStrategy : public IMoveStrategy
{
public:
    std::vector<BoardCellPosition> getAvailableMoves(const ChessPiece& piece) override;

private:
    bool isValidPosition(size_t row, size_t column);
};

#endif // QUEENMOVENTSTRATEGY_H
