/* Your chosen car: <car></car>
 * You have the option to choose from the builtin cars:
 * 155-DTM, acura-nsx-sz, baja-bug, buggy, car1-ow1, car1-stock1, car1-trb1, car1-trb3, car2-trb1, car3-trb1, car4-trb1, car5-trb1, car6-trb1,
 * car7-trb1, car8-trb1, kc-2000gt, kc-5300gt, kc-a110, kc-alfatz2, kc-bigh, kc-cobra, kc-coda, kc-conrero, kc-corvette-ttop, kc-daytona, kc-db4z,
 * kc-dbs, kc-dino, kc-ghibli, kc-giulietta, kc-grifo, kc-gt40, kc-gto, kc-p4, p406, pw-206wrc, pw-306wrc, pw-corollawrc, pw-evoviwrc, pw-focuswrc,
 * pw-imprezawrc
 * 
 * Please type the chosen one's name in the tag above (for example: <car>buggy</car>)
*/
#ifndef CDRIVER_H_
#define CDRIVER_H_

#include "Typedefs.h"
#include "math.h"
#include "stdio.h"

	// SimpleDriver implements a simple and heuristic controller for driving
	structCarControl CDrive(structCarState cs);

	// Print a shutdown message 
	void ConShutdown();
	
	// Print a restart message 
	void ConRestart();

	// Initialization of the desired angles for the rangefinders
	void Cinit(float *angles);
	
	// Solves the gear changing subproblems
	int getGear(structCarState *cs);

	// Solves the steering subproblems
	float getSteer(structCarState *cs);
	
	// Solves the gear changing subproblems
	float getAccel(structCarState *cs);
	
	// Apply an ABS filter to brake command
	float filterABS(structCarState *cs,float brake);

	// Solves the clucthing subproblems
	void clutching(structCarState *cs, float *clutch);

#endif /*CDRIVER_H_*/