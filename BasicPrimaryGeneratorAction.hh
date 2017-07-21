#ifndef BASIC_PRIMARY_GENERATOR
#define BASIC_PRIMARY_GENERATOR

#include "G4VUserPrimaryGeneratorAction.hh"

using namespace CLHEP;
class BasicPrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction
{
public:
	void GeneratePrimaries(G4Event* anEvent);
	~BasicPrimaryGeneratorAction(){
	}
};

#endif
