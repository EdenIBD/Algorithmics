# PbInfo 898 – Sumfactcif

**Source:** PbInfo 898

## Problem statement

We need to compute the sum of the factorials of each digit of a natural number n. Given n , we form the
sum s = d₁! + d₂! + ... + dₖ! where d₁, d₂, ..., dₖ are the digits of n. For example, if
n = 241, then s = 2! + 4! + 1! = 2 + 24 + 1 = 27.

## Example

### Input

#### 241

### Output

#### 27

## Constraints

```
n is a natural number.
Typical tasks allow 0 ≤ n ≤ 10⁹.
```
## Solution idea

The program iterates through the digits of n , computing the factorial of each digit and adding it to a
running sum. To compute a factorial digit!, we can either use a small precomputed array of factorials
for digits 0 ‑ 9 or compute it directly using a loop. We process digits by repeatedly taking n % 10 to get
the last digit and dividing n by 10 to remove the digit until n becomes zero. The sum of factorials is
printed.

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
Time: O(k) where k is the number of digits in n.
Space: O(1)
```
## Files

```
main.cpp
```
Problema SumFactCif | [http://www.pbinfo.ro](http://www.pbinfo.ro)
https://www.pbinfo.ro/probleme/

raw.githubusercontent.com
https://raw.githubusercontent.com/EdenIBD/Algorithmics/main/pbinfo%20898/main.cpp

#### • • • 1 2 2


