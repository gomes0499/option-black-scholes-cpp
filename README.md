# Black-Scholes Option Pricing Model in C++

This project provides a simple C++ implementation of the Black-Scholes model for pricing European call options.

## Overview

The Black-Scholes model is a mathematical model for pricing an options contract. Specifically, the model provides a theoretical estimate of the price of European-style options.

This codebase contains a function, `blackScholesCall`, that calculates the price of a European call option based on the following parameters:

- \( S \): Asset Price
- \( X \): Exercise Price (Strike Price)
- \( r \): Annual Risk-Free Rate
- \( T \): Time to Maturity in Years
- \( \sigma \): Annual Volatility

## Dependencies

- Boost library (for normal distribution)

## Building the Project

To build the project, you can use a standard C++ compiler. You will also need to link against the Boost libraries.

## Usage

Compile and run the `main.cpp` file. It will output the price of a European call option with the given parameters.

```bash
The call option price is: [output price]
```

---