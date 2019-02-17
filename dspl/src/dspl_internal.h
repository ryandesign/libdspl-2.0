/*
* Copyright (c) 2015-2019 Sergey Bakhurin
* Digital Signal Processing Library [http://dsplib.org]
*
* This file is part of libdspl-2.0.
*
* is free software: you can redistribute it and/or modify
* it under the terms of the GNU Lesser  General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* DSPL is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public License
* along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef DSPL_INTERNAL_H
#define DSPL_INTERNAL_H


#define DSPL_FARROW_LAGRANGE_COEFF  0.16666666666666666666666666666667

#define DSPL_RAND_MOD_X1            2147483647
#define DSPL_RAND_MOD_X2            2145483479

// sqrt(2^31)
#define FFT_COMPOSITE_MAX           46340

void transpose(double* a, int n, int m, double* b);
void transpose_cmplx(complex_t* a, int n, int m, complex_t* b);
void transpose_hermite(complex_t* a, int n, int m, complex_t* b);

int fft_krn(complex_t* t0, complex_t* t1, fft_t* p, int n, int addr);


void dft2 (complex_t *x,  complex_t* y);

#define DFT3_W         0.866025403784439  
void dft3 (complex_t *x,  complex_t* y);

void dft4 (complex_t *x,  complex_t* y);

#define DFT5_W1       -1.250000000000000         
#define DFT5_W2        0.559016994374947         
#define DFT5_W3        1.538841768587630         
#define DFT5_W4        0.587785252292473        
#define DFT5_W5        0.363271264002680      
void dft5 (complex_t *x,  complex_t* y);

#define DFT7_W1      -1.166666666666666518636930
#define DFT7_W2       0.790156468525400224045541
#define DFT7_W3       0.055854267289647742400494
#define DFT7_W4       0.734302201235752405317214
#define DFT7_W5      -0.440958551844098378680314
#define DFT7_W6      -0.340872930623931369442658
#define DFT7_W7       0.533969360337725240661655
#define DFT7_W8      -0.874842290961656665615465    
void dft7 (complex_t *x,  complex_t* y);

#define DFT16_W1       0.923879532511287
#define DFT16_W2       0.382683432365090
#define DFT16_W3       0.707106781186548
void dft16 (complex_t *x,  complex_t* y);

void transpose4x4(complex_t *x,  complex_t* y);


/* Window functions */
int win_bartlett        (double *w, int n, int win_type);
int win_bartlett_hann	  (double *w, int n, int win_type);
int win_blackman        (double *w, int n, int win_type);
int win_blackman_harris (double *w, int n, int win_type);
int win_blackman_nuttall(double *w, int n, int win_type);
int win_cheby           (double *w, int n, double param);
int win_cos             (double *w, int n, int win_type);
int win_flat_top        (double *w, int n, int win_type);
int win_gaussian        (double *w, int n, int win_type, double sigma);
int win_hamming         (double *w, int n, int win_type);
int win_hann            (double *w, int n, int win_type);
int win_lanczos	        (double *w, int n, int win_type);
int win_nuttall	        (double *w, int n, int win_type);
int win_rect            (double *w, int n);



#endif

