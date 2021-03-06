/*------------------------------------------------------------------------
 *  Estimate FD wavefield at receiver positions                            
 *  
 *  D. Koehn
 *  Kiel, 21/06/2016
 *  ----------------------------------------------------------------------*/

#include "fd.h"

void calc_seis_AC(struct waveAC *waveAC, int ** recpos, int ntr){

	/* global variables */
	extern int NPML, FSSHIFT;	

	/* local variables */
	int i;

	for(i=1;i<=ntr;i++){
	    (*waveAC).precr[i] = (*waveAC).pr[recpos[2][i]+FSSHIFT][recpos[1][i]+NPML];
            (*waveAC).preci[i] = (*waveAC).pi[recpos[2][i]+FSSHIFT][recpos[1][i]+NPML];
	}

	
}
