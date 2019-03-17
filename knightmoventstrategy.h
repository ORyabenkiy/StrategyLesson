#ifndef KNIGHTMOVENTSTRATEGY_H
#define KNIGHTMOVENTSTRATEGY_H
#include "imovestrategy.h"

class KnightMoventStrategy : public IMoveStrategy
{
public:
    std::vector<BoardCellPosition> getAvailableMoves(const ChessPiece& piece) override;

private:
    bool isValidPosition(size_t row, size_t column);
};

#endif // KNIGHTMOVENTSTRATEGY_H
