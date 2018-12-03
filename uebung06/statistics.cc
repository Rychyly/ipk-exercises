double mean(const std::vector<double>& v) {
    if (v.empty()) {
        throw std::invalid_argument("Leerer Vektor");
        return(0);
    }
    double sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
    }
    return(sum/v.size());
}

double median(const std::vector<double>& v) {
    if (v.empty()) {
        throw std::invalid_argument("Leerer Vektor");
        return(0);
    }
//    std::sort(v.begin(), v.end());
    if (v.size() % 2 == 0) {
        return((v[v.size()/2 - 1] + v[v.size()/2])/2);
    } else {
        return(v[(v.size()-1)/2]);
    }
}

double moment(const std::vector<double>& v, int k) {
    std::vector<double> vk(v.size());
    for (int i = 0; i < v.size(); i++) {
        vk[i] = std::pow(v[i], k);
    }
    return(mean(vk));
}

double standard_deviation(const std::vector<double>& v) {
    double mu = mean(v);
    std::vector<double> diff(v.size());
    for (int i = 0; i < v.size(); i++) {
        diff[i] = v[i] - mu;
    }
    return(std::pow(moment(diff, 2), 0.5));
}

