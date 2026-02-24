# Linear Search vs. Binary Search Benchmark

This repository contains a C++ performance comparison between **Linear Search** and **Binary Search** algorithms. It demonstrates the efficiency gap by searching for a specific target within a range of 1 billion elements and measuring the execution time.

[![Language](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://en.cppreference.com/)
[![Platform](https://img.shields.io/badge/Platform-Windows-lightgrey.svg)](https://microsoft.com)

## 📊 Comparison Overview

The program targets the number `935,971,927` within a range of `0` to `1,000,000,000`.

| Algorithm | Complexity | Measurement Unit | Efficiency |
| :--- | :--- | :--- | :--- |
| **Linear Search** | $O(n)$ | Milliseconds (ms) | Iterates one by one. |
| **Binary Search** | $O(\log n)$ | Nanoseconds (ns) | Splits the range in half. |



## 🛠️ Technical Details
- **Time Measurement:** Uses `std::chrono::high_resolution_clock` for high-precision timing.
- **Console Optimization:** Uses `SetConsoleOutputCP(65001)` for UTF-8 support and ANSI escape codes for colored terminal output.
- **Environment:** Designed specifically for Windows environments (due to `windows.h`).
