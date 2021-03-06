/* FILE: middlePoints.h
   NAME: Erik Mudrak
   Date last modified: 2/20/15
	Directions:
		Contains 100 points necessary to make center dot,
		 giving the effect that the pokeball is opening to 
			the pokemon 
*/ 	

#ifdef __APPLE__       
 #include <GLUT/glut.h>
 #else		       
 #include <GL/glut.h>         
 #endif

#include "Angel.h"  //Provides InitShader, vec4

#ifndef MIDDLE_POINTS
#define MIDDLE_POINTS

  	VertexData vertices_C[numpoints] = {
		// color, position

		////// Center: Total of 100 points,
		///	COMPLETE for glDrawArrays(GL_LINE_STRIP, 0, numpoints)

		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},	
		{vec4(1.0, 0.0, 0.0, 1.0),   vec4(0.0, 0.0, 0.0, 1.0)},		
	};




#endif 

