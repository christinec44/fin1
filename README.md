# Final Project
## Part 1
### Calculating Pi Using Polygon Geometry

This code approximates Pi by calculating the perimeter of n-gons for large values of n. This code is an edited version of the code provided by Dr. Michael Rozman for Physics 2200 at the University of Connecticut. The orginal code used a formula derived in class for computing the half-angle sin from a given value of sin. However, it output calculations that were not satisfactory by yeilding large error for values of n > 2^15. This error occurs because the formula ends up becoming 1 minus a very small number for large n. Therefore, on a number line the error close to 1 because much farther. It ends up taking a "larger" error over numerous precise numbers. 

This code now has fixed this error problem and plots the new straight line outcome as it should. 
