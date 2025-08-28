# PbInfo 63 – Factorizare

**Source:** PbInfo 63

## Problem statement

For a given natural number n , determine the prime factor that appears with the largest exponent in the
prime factorization of n. If multiple prime factors have the same highest exponent, output the largest of
those factors. For example, for n = 72 the factorization is 2³ × 3²; the prime factor with the highest
exponent is 2 , so output 2. For n = 100 (which is 2² × 5²), both exponents are equal, so output the
larger prime, 5.

## Example

### Input

#### 72

### Output

#### 2

## Constraints

```
n is a positive integer ( n ≥ 2).
Typically n fits in 32 bits.
```
## Solution idea

Iterate over potential prime divisors from 2 up to √n. For each prime p dividing n , count the
exponent e by repeatedly dividing n by p. Keep track of the factor with the highest exponent; if
another factor has the same exponent but is larger, update the result. If at the end n is greater than 1 , it
is a prime factor with exponent 1. Compare it accordingly. Output the factor stored as the result.

```
1
```
#### •

#### •

```
2
```
#### 1


## Complexity

```
Time: O(√n) for trial division.
Space: O(1)
```
## Files

```
main.cpp
```
Problema Factorizare1 | [http://www.pbinfo.ro](http://www.pbinfo.ro)
https://www.pbinfo.ro/probleme/

raw.githubusercontent.com
https://raw.githubusercontent.com/EdenIBD/Algorithmics/main/pbinfo63/main.cpp

#### • • • 1 2 2


