# Longest-Common-Sequence-LCS
A strand of DNA consists of a string of molecules called bases, where the possible bases are
adenine, guanine, cytosine, and thymine. Representing each of these bases by its initial letter, we
can express a strand of DNA as a string over the finite set {A, C, G, T}. For example, the DNA of one
organism may be S1 = ACCGGTCGAGTGCGCGGAAGCCGGCCGAA, and the DNA of another organism
may be S2 = GTCGTTCGGAATGCCGTTGCTCTGTAAA. One reason to compare two strands of DNA
is to determine how “similar” the two strands are, as some measure of how closely related the
two organisms are. One possible measure of similarity could be the length of the longest common
subsequence of bases in the two DNA strands.
Attached is a file consisting of 5 DNA sequences (as strings of {A, C, G, T}). Write a program in
C/C++ to read the DNA sequences (you can number them from 1-5) and find which pair of
sequences have the longest common subsequence. The program should do the following:

A. Implement the dynamic programming algorithm for finding the Longest Common
Subsequence (LCS) for all possible pairs of DNA sequences and the display the length of
LCS for each pair.

B. Display all the Longest Common Subsequences for the pair with the highest value in the
previous question.
