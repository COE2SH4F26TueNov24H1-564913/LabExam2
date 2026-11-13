#ifndef TAXEDBATCH_HPP
#define TAXEDBATCH_HPP

#include "StockBatch.hpp"

class TaxedBatch : public StockBatch {
public:
    TaxedBatch();
    TaxedBatch(int count, double initVal, double extraVal);
    TaxedBatch(const TaxedBatch& other);
    virtual ~TaxedBatch();
    TaxedBatch& operator=(const TaxedBatch& other);

    virtual double batchValuation() const override;
};

#endif
