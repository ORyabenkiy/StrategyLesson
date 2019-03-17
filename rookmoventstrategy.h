#ifndef ROOKMOVENTSTRATEGY_H
#define ROOKMOVENTSTRATEGY_H
#include "imovestrategy.h"

class RookMoventStrategy : public IMoveStrategy
{
public:
    std::vector<BoardCellPosition> getAvailableMoves(const ChessPiece& piece) override;

private:
    bool isValidPosition(size_t row, size_t column);
};

#endif // ROOKMOVENTSTRATEGY_H
