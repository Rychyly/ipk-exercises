#ifndef STATISTICS
#define STATISTICS

#include <vector>
#include <algorithm>
#include <cmath>

template<typename Container>
typename Container::value_type mean(const Container& v) {
    if (v.empty()) {
        throw std::invalid_argument("Leerer Container");
    }
    typename Container::value_type sum = 0;
    for (auto e : v) {
        sum += e;
    }
    return(sum/v.size());
}

template<typename Container>
typename Container::value_type median(const Container& v) {
    if (v.empty()) {
        throw std::invalid_argument("Leerer Container");
    }
    std::vector<typename Container::value_type> vector;
    for (auto e : v) {
        vector.push_back(e);
    }
//    std::sort(vector.begin(), vector.end());  // Needs a newer C++ standard!
    if (v.size() % 2 == 0) {
        return((vector[vector.size()/2 - 1] + vector[vector.size()/2])/2);
    } else {
        return(vector[(vector.size()-1)/2]);
    }
}

template<typename Container>
typename Container::value_type moment(const Container& v, int k) {
    if (v.empty()) {
        throw std::invalid_argument("Leerer Container");
    }
    typename Container::value_type sum = 0;
    for (auto e : v) {
        sum += std::pow(e, k);
    }
    return(sum/v.size());
}

template<typename Container>
typename Container::value_type standard_deviation(const Container& v) {
    if (v.empty()) {
        throw std::invalid_argument("Leerer Container");
    }
    typename Container::value_type mu = mean(v);
    typename Container::value_type sum = 0;
    for (auto e : v) {
        sum += std::pow(e - mu, 2);
    }
    return(std::pow(sum, 0.5)/v.size());
}

#endif
