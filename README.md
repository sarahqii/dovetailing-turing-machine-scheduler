# Dovetailing Turing Machine Scheduler

**Course Project:** This project is developed as the final project for CSC-213: Operating Systems (Fall 2026, Grinnell College).

**Authors:** Sarah Qi & David Lee

## Overview

A Turing machine scheduler in C that uses dovetailing to run many machines concurrently, for computations that may never halt. A Turing machine on an input can accept, reject, or loop forever, so running machines one after another can get stuck. Dovetailing interleaves the computations a few steps at a time, so any computation that halts eventually finishes. This is essentially preemptive CPU scheduling: a small operating system whose processes are Turing machines.

The project demonstrates:

- **Closure properties of recognizable languages:** intersection, union, concatenation, and Kleene star.
- **A Busy Beaver search:** running every 2-state and 3-state, 2-symbol Turing machine on a blank tape.

It also draws on CSC-341: Automata, Formal Languages, and Computational Complexity.

## Related OS Concepts
*Status: in development.*

## License

This project is licensed under the [MIT License](LICENSE).