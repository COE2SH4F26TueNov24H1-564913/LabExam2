#include "StockBatch.hpp"

StockBatch::StockBatch() : unitCosts(nullptr), batchSize(0), taxPercent(0.15) {}

StockBatch::StockBatch(int count, double initVal, double extraVal) : unitCosts(nullptr), batchSize(count), taxPercent(extraVal) {
    if (batchSize > 0) {
        unitCosts = new double[batchSize];
        for (int i = 0; i < batchSize; ++i) {
            unitCosts[i] = initVal + static_cast<double>(i);
        }
    } else {
        batchSize = 0;
    }
}

// TODO 1: Complete the Copy Constructor (Deep Copy)
StockBatch::StockBatch(const StockBatch& other) {
    (void)other;
}

// TODO 2: Complete the Destructor (Release DMA)
StockBatch::~StockBatch() {
}

// TODO 3: Complete the Copy Assignment Operator (Deep Copy + Self-Assignment Guard)
StockBatch& StockBatch::operator=(const StockBatch& other) {
    (void)other;
    return *this;
}

double StockBatch::getCost(int index) const {
    if (index >= 0 && index < batchSize && unitCosts != nullptr) {
        return unitCosts[index];
    }
    return static_cast<double>(0);
}

// TODO 4: Implement batchValuation() (Maximum 8 lines of implementation)
double StockBatch::batchValuation() const {
    return static_cast<double>(0);
}
