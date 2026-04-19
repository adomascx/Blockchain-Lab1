#pragma once

#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>
#include <cstdint>
#include <random>
#include <fstream>
using namespace std;

string _float_to_hex32(double inputValue);

string PHA256(const string &inputstring);

// Improved 128-bit (32 hex chars) fold of a floating point magnitude.
// Retains the concept of extracting decimal digits but adds robust handling
// and a SplitMix-inspired avalanche to diffuse bits better.
string _float_to_hex32_AI(double inputValue);

// Improved "PHA256" style function producing 64 hex chars by combining two
// improved 128-bit folds of the final (x, y) accumulators.
string PHA256_AI(const string &inputstring);