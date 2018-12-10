#ifndef STATISTICS_HH
#define STATISTICS_HH

#include <vector>
#include <algorithm>

double mean(const std::vector<double>& v);
double median(const std::vector<double>& v);
double moment(const std::vector<double>& v, int k);
double std_dev(const std::vector<double>& v);
void statistics(const std::vector<double>& v);

#endif // STATISTICS_HH
