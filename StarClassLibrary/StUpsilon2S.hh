/***************************************************************************
 *
 * $Id: StUpsilon2S.hh,v 1.1 2010/01/28 19:33:20 jwebb Exp $
 *
 * Author: Thomas Ullrich, May 99 (based on Geant4 code, see below) 
 ***************************************************************************
 *
 * The design of the StParticleDefinition class and all concrete
 * classes derived from it is largely based on the design of the 
 * G4ParticleDefinition class from Geant4 (RD44).
 * Although the code is in large parts different (modified or rewritten)
 * and adapted to the STAR framework the basic idea stays the same.
 *
 ***************************************************************************
 *
 * $Log: StUpsilon2S.hh,v $
 * Revision 1.1  2010/01/28 19:33:20  jwebb
 * Added the upsilon resonances to the StarClassLibrary.  This makes the particles
 * available by name and by PDG id in StParticleTable.
 *
 * Revision 1.1  1999/05/14 18:49:32  ullrich
 * Initial Revision
 *
 **************************************************************************/
#ifndef StUpsilon2S_hh
#define StUpsilon2S_hh

#include "StMeson.hh"

class StUpsilon2S : public StMeson {
public:
    static StUpsilon2S* instance() {return &mUpsilon2S;}
    static StUpsilon2S* upsilon2s() {return &mUpsilon2S;}
    
private:
    static StUpsilon2S mUpsilon2S;
    
    StUpsilon2S(const string  &  aName,  
	   double           mass,     
	   double           width,
	   double           charge,   
	   int              iSpin,
	   int              iParity,
	   int              iConjugation,
	   int              iIsospin,   
	   int              iIsospinZ, 
	   int              gParity,
	   const string  &  pType,
	   int              lepton,
	   int              baryon,
	   int              encoding,
	   bool             stable,
	   double           lifetime);
};

#endif
