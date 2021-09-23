/* Your chosen car: <car></car>
 * You have the option to choose from 3 different types of cars:
 * - Nascar
 * - Forma1
 * - Supercar
 * Please type the chosen one's name in the tag above (for example: <car>Nascar</car>)
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