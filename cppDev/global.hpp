#ifndef __GLOBAL_HPP
#define __GLOBAL_HPP

//input
//// domain
const double L = 1;
//// mesh properties
const size_t nodeSize = 11;
const size_t internalFieldSize = nodeSize - 2;
const double deltaX = L/(double(nodeSize)-1.);
const double rdeltaX = 1./deltaX;

//physical properties
const double rho = 1;
const double diffusivitiy = 0.02;

// field variable
double* phi;
double* U;
double* exact;

// matrix coeffs and sources
double* source;
double* d;
double* l;
double* u;
double* internalField;

// boundaries
double phiLeft;
double phiRight;

#endif