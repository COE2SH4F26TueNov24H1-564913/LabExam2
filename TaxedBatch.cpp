#include "TaxedBatch.hpp"

TaxedBatch::TaxedBatch() : StockBatch() {}

TaxedBatch::TaxedBatch(int count, double initVal, double extraVal) : StockBatch(count, initVal, extraVal) {}

TaxedBatch::TaxedBatch(const TaxedBatch& other) : StockBatch(other) {}

TaxedBatch::~TaxedBatch() {}

TaxedBatch& TaxedBatch::operator=(const TaxedBatch& other) {
    if (this != &other) {
        StockBatch::operator=(other);
    }
    return *this;
}

// TODO 5: Override batchValuation() (Maximum 8 lines of implementation)
double TaxedBatch::batchValuation() const {
    return static_cast<double>(0);
}
