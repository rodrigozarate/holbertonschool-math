# 0x01. Math - Sequence
## Learning Objectives

    Sequences
    Arithmetic and Geometric sequences. 3. Recurrent sequences
    Induction
    Limits
    Classic sequences

### Requirements

    How to use structures
    How to use linked lists

## Tasks
### 0. The Heron sequence

The Heron sequence is defined by: with .

Write a function that return the Heron sequence until having convergence with an error less or equal to .

    Prototype: t_cell *heron(double p, double x0);
    You must use linked lists.

#### File: 0-heron.c

### 1. The Fibonacci sequence

The Fibonacci sequence is defined by: is valid for with .

Code the Fibonacci sequence until having a geometric behavior. How can we deduce the gold number ?

    Prototypes: t_cell *Fibonnaci(); double gold_number(t_cell *head);
    You must use linked lists.
    You can use the library <math.h> in your code

#### File: 1-fibonacci.c

### 2. Mandelbrot’s Sets

The Mandelbrot’s set is the set of complex numbers c for which the function does not diverge when iterated from . If we assume that the sequence diverges if it becomes greater then 2.

Code the Mandelbrot’s set in a PGM file with a recurrent sequence:
https://upload.wikimedia.org/wikipedia/commons/thumb/2/21/Mandel_zoom_00_mandelbrot_set.jpg/1024px-Mandel_zoom_00_mandelbrot_set.jpg![Mandelbrot’s set](https://en.wikipedia.org/wiki/Mandelbrot_set#/media/File:Mandel_zoom_00_mandelbrot_set.jpg)
