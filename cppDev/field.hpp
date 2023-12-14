#ifndef __FILEDS_HPP
#define __FILEDS_HPP

extern const double L;
//// mesh properties
extern const size_t nodeSize;
extern const size_t internalFieldSize;
extern const double deltaX;
extern const double rdeltaX;

//physical properties
extern const double rho;
extern const double diffusivitiy;

// field variable
extern double* phi;
extern double* U;
extern double* exact;

// matrix coeffs and sources
extern double* source;
extern double* d;
extern double* l;
extern double* u;
extern double* internalField;

// boundaries
extern double phiLeft;
extern double phiRight;

void initVariables();
void destroyVariables();
void correctBC();

#endif