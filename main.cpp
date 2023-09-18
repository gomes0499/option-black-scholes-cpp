#include <iostream>
#include <cmath>
#include <boost/math/distributions/normal.hpp>

// Black-Scholes Call Option Pricing Function
double blackScholesCall(double S, double X, double r, double T, double sigma) {
    boost::math::normal_distribution<> d(0.0, 1.0);

    // Calculate d1 and d2 parameters
    double d1 = (std::log(S / X) + (r + (std::pow(sigma, 2) / 2.0)) * T) / (sigma * std::sqrt(T));
    double d2 = d1 - sigma * std::sqrt(T);

    // Calculate the call option price
    return S * boost::math::cdf(d, d1) - X * std::exp(-r * T) * boost::math::cdf(d, d2);
}

int main() {
    // Asset Price
    double S = 100.0;

    // Exercise price
    double X = 100.0;

    // Annual Risk-Free Rate
    double r = 0.05;

    // Time to Maturity in Years
    double T = 1.0;

    // Annual Volatility
    double sigma = 0.2;

    // Compute the call option price
    double callPrice = blackScholesCall(S, X, r, T, sigma);

    // Output the call option price
    std::cout << "The call option price is: " << callPrice << std::endl;

    return 0;
}
