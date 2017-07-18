#include "G4VUserPrimaryGeneratorAction.hh"
#include "G4ParticleGun.hh"
#include "G4Proton.hh"
#include "BasicPrimaryGeneratorAction.hh"


class BasicPrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction{
public:
	void BasicPrimaryGeneratorAction::GeneratePrimaries(G4Event* anEvent){

		//Create particle gun
		G4ParticleGun* myGun = new G4ParticleGun();

		//Specify particle to be emitted
		myGun->SetParticleDefinition(G4Proton::ProtonDefinition());

		//Set particle  kinetic energy and direction of travel
		myGun->SetParticleEnergy(50.*keV);
		myGun->SetParticleMomentumDirection(G4ThreeVector(1.0,0,0));

		//Generate one instance of specified particle
		myGun->GeneratePrimaryVertex(anEvent);
	}
};
