#ifndef STOCKBATCH_HPP
#define STOCKBATCH_HPP

#include <iostream>
using namespace std;

class StockBatch {
protected:
    double* unitCosts;
    int batchSize;
    double taxPercent;

public:
    StockBatch();
    StockBatch(int count, double initVal, double extraVal);
    StockBatch(const StockBatch& other);
    virtual ~StockBatch();
    StockBatch& operator=(const StockBatch& other);

    double getCost(int index) const;
    virtual double batchValuation() const;
};

#endif
