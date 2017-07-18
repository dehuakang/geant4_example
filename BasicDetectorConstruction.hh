#ifndef BASIC_DETECTOR_CONSTRUCTION
#define BASIC_DETECTOR_CONSTRUCTION
#include "G4VUserDetectorConstruction.hh"

class BasicDetectorConstruction : public G4VUserDetectorConstruction
{
  public:
    G4VPhysicalVolume* Construct();
};

#endif
