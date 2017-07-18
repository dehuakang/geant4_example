#include "G4RunManager.hh"
#include "QBBC.hh"
#include "G4Proton.hh"
#include "BasicDetectorConstruction.hh"
#include "BasicPrimaryGeneratorAction.hh"


int main(int argc,char** argv){

 G4RunManager * runManager = new G4RunManager;



 // Detector construction

 runManager->SetUserInitialization(new BasicDetectorConstruction());

 // Physics list

 G4VModularPhysicsList* physicsList = new QBBC;

 runManager->SetUserInitialization(physicsList);



 // Primary generator action

 runManager->SetUserAction(new BasicPrimaryGeneratorAction());



 // Initialize G4 kernel

 runManager->Initialize();

   //Cause the run manager to generate a single event using the
 //primary generator action registered above.

 runManager->BeamOn(1);


 //After the run is complete, free up the memory used by run
 //manager and return

 delete runManager;
 return 0;

}
