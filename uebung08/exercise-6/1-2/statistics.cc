#include <iostream>
#include <cmath>

#include "statistics.hh"

double mean(const std::vector<double>& v)
{
  double sum = 0;
  for (auto e : v)
    sum += e;

  return sum / v.size();
}

double median(const std::vector<double>& v)
{
  auto v2(v);
  std::sort(v2.begin(),v2.end());

  if (v.size() % 2 == 0)
    {
      return 0.5 * (v2[v.size()/2 - 1] + v2[v.size()/2]);
    }
  else
    {
      return v2[(v.size()+1)/2 - 1];
    }
}

double moment(const std::vector<double>& v, int k)
{
  double sum = 0;
  for (auto e : v)
    sum += std::pow(e,k);

  return sum / v.size();
}

double std_dev(const std::vector<double>& v)
{
  double m = mean(v);
  double sum = 0;
  for (auto e : v)
    sum += (m - e)*(m - e);

  return std::sqrt(sum / v.size());
}


void statistics(const std::vector<double>& v)
{
  std::cout << "mean: " << mean(v) << std::endl;
  std::cout << "median: " << median(v) << std::endl;
  std::cout << "second moment: " << moment(v,2) << std::endl;
  std::cout << "std_dev: " << std_dev(v) << std::endl;
}
