#include "myPhysics.h"
#include <cmath>

int main(){
    double E0 = -0.5*phys::mass_electron*pow(phys::charge_proton,4)/(4*pow(phys::h_planck*phys::ep0,2))/phys::charge_proton;
    cout << "E0 = " << E0 << " eV" << endl;
    return 0; 
}