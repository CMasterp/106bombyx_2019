# 106bombyx - Butterflys, Chaos theory

- **Binary name:** 106bombyx
- **Repository name:** 106bombyx_2019
- **Repository rigths:** ramassage-tek
- **Language:** everything working on "the dump"
- **Choosed language:** C
- **Compilation:** via Makefile, including re, clean and fclean rules

# Subject

In the 70’s, chaos theory opened the way for a better understanding of the evolution of some animal species. Butterflys for instance. Let’s look at. . . bombyx.
If a generation is crowded, chances are that the next generation will be crowded too, regarding the natural rules of reproduction. But resources may lack for this new generation, so it may not be able to develop.
Therefore, the number of bombyx depends on those two contradictory factors, and its evolution is far from trivial.
Let’s call xi the number of the ith generation of butterflys. Here is a model for the evolution of xi :

|**x1 = n** where n is the number of first generation individuals
|**xi+1 = kxi((1000−xi) / 1000)** , for i ≥ 1, k being the growth rate, from 1 to 4.

In order to study this evolution, you are asked to plot two things:
- The curve representing the number of individuals in relation to the generation (varying from 1 to 100);
- A synthetic scheme summing all the results for a given n; it consists in plotting every value of xi (between two given bounds), in relation to k (k varying from 1 to 4 by 0.01 steps).
In both cases, your program shall print on the standard outuput the values to be entered into gnuplot to draw the graphs.

## Nao Marvin

| Details      | Nao Marvin :robot: (%) |
| ------------- |:-------------:|
| `basic`: 100% \| `mathematical rigor`: 100% \| `number of individuals`: 90% \| `rigor`: 100% \| `synthetic scheme`: 100% | 97.6% |

## Prerequisites

What you need

```
gnuplot
GlibC
gcc
make
```

## Compiling

Clone the repository and go inside. Then,

```
$ make
```

## Usage

```
~/B-MAT-100> ./106bombyx n [k | i0 i1]
```

- **n:** number of first generation individuals
- **k:** growth rate from 1 to 4
- **i0:** initial generation (included)
- **i1:** final generation (included)

## Examples

```
∼/B-MAT-200> ./106bombyx 10 3.3 > data
∼/B-MAT-200> head data
1 10.00
2 32.67
3 104.29
4 308.26
5 703.68
6 688.10
7 708.24
8 681.89
9 715.82
10 671.29
```

```
∼/B-MAT-200> tail data
91 823.60
92 479.43
93 823.60
94 479.43
95 823.60
96 479.43
97 823.60
98 479.43
99 823.60
100 479.43
```

```
∼/B-MAT-200> cat drawer.gnu
set terminal dumb
set nokey
plot “data”
```

```
∼/B-MAT-200> ./106bombyx 10 10000 10010 > data
∼/B-MAT-200> head -n 30 data
1.00 0.10
1.00 0.10
1.00 0.10
1.00 0.10
1.00 0.10
1.00 0.10
1.00 0.10
1.00 0.10
1.00 0.10
1.00 0.10
1.00 0.10
1.01 9.90
1.01 9.90
1.01 9.90
1.01 9.90
1.01 9.90
1.01 9.90
1.01 9.90
1.01 9.90
1.01 9.90
1.01 9.90
1.01 9.90
1.02 19.61
1.02 19.61
1.02 19.61
1.02 19.61
1.02 19.61
1.02 19.61
1.02 19.61
1.02 19.61
```

```
∼/B-MAT-200> cat drawer.gnu | gnuplot
1000 +------------------------------------------------------------------+
     | 	       	       	       	       	       	       	          AAAAAA|
900  |-+ 						     AAAAAAAA A-|
     | 						        AAAAAAAAAAAAAAAA|
800  |-+ 					   AAAAA     AAAAAAAAAAA|
     | 					        AAA             AAAA AAA|
700  |-+ 				        A		AAAA AAA|
     | 				        AAAAAAAAA	        AAAAAAA |
600  |-+ 			 AAAAAAAA	AA	       AAAAAAAAA|
     |			   AAAAAAA		 AAA	      AAAA AAAAA|
500  |-+	       AAAAA			   AAAA	    AAAAA AAAAAA|
     |		    AAAA			      AAAA     AAAAA A A|
400  |-+	 AAAA				         AAAAA     A AA-|
     |	       AAA				             AAAA  AA A |
300  |-+     AAA					       AAAAAA AA|
     |	    AA						         AAA AAA|
200  |-+  AAA						          AAAAAA|
     |	AAA						            AAAA|
100  |-AA 						             AAA|
     |AA	+           +	       +          +	     +        AA|
0    +------------------------------------------------------------------+
     1         1.5          2         2.5         3         3.5         4
```

> :bulb: Mind the float numbers precision!