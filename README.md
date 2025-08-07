<<<<<<< HEAD
![q-e-logo](logo.jpg)

This is the distribution of the Quantum ESPRESSO suite of codes (ESPRESSO:
opEn-Source Package for Research in Electronic Structure, Simulation, and
Optimization)

[![License: GPL v2](https://img.shields.io/badge/License-GPL%20v2-blue.svg)](https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html)
=======
## Quantum ESPRESSO v7.2 with length gauge dielectric tensor. 
This is a modified version of the open-source Quantum ESPRESSO v7.2 code. The modification has been made in the PP/src/epsilon.f90 file that will generate epsilon.x executable for dielectric function calculations. 

## New position operator
The following position operator was inspired by previous peer-reviewed work [1], [2]:
<img width="1037" height="272" alt="image" src="https://github.com/user-attachments/assets/2aaf7b10-9d74-4f92-a0ae-57887fd42a00" />



The formula is compatible with all arbitrary unit cell shapes of dimension A:


<img width="365" height="101" alt="image" src="https://github.com/user-attachments/assets/d3fa34b9-4411-4f1d-9710-8de3af6162b6" />



The dependency on fractional coordinates leverages the local coordinate system.
![fig2_fractional_coordinate](https://github.com/user-attachments/assets/fc912b9e-8592-47ef-a808-1cd47cb4bf7e)


Currently, the following formulation has only been implemented over the diagonal elements of the dielectric tensor.
<img width="821" height="599" alt="image" src="https://github.com/user-attachments/assets/c43def83-810f-4fdb-a5e6-78d757243c38" />

Things to keep in mind before running the simulation:
1) Valid only for Gamma point calculations
2) Run epsilon.x with serial.

More generalized cases will be implemented in future updates.  

## Refrences
[1] R. Resta, "The Quantum–Mechanical Position Operator in Extended Systems," Physical Review Letters, vol. 80, no. 9, p. 1800, 1998. 

[2] E. V. F. d. Aragão, D. Moreno, S. Battaglia, G. L. Bendazzoli, S. Evangelisti, T. Leininger, N. Suaud and J. A. Berger, "A simple position operator for periodic systems," Physical Review B, vol. 99, no. 20, p. 205144, 2019.
>>>>>>> bdab7801028654669acc058a9c407e5cd95fb819

## USAGE
Quick installation instructions for CPU-based machines. For GPU execution, see
file [README_GPU.md](README_GPU.md). Go to the directory where this file is. 

Using "make"
(`[]` means "optional"):
```
./configure [options]
make all
```
"make" alone prints a list of acceptable targets. Optionally,
`make -jN` runs parallel compilation on `N` processors.
Link to binaries are found in bin/.

Using "CMake" (v.3.14 or later):

```
mkdir ./build
cd ./build
cmake -DCMAKE_Fortran_COMPILER=mpif90 -DCMAKE_C_COMPILER=mpicc [-DCMAKE_INSTALL_PREFIX=/path/to/install] ..
make [-jN]
[make install]
```
Although CMake has the capability to guess compilers, it is strongly recommended to specify
the intended compilers or MPI compiler wrappers as `CMAKE_Fortran_COMPILER` and `CMAKE_C_COMPILER`.
"make" builds all targets. Link to binaries are found in build/bin.
If `make install` is invoked, directory `CMAKE_INSTALL_PREFIX`
is prepended onto all install directories.
<<<<<<< HEAD

For more information, see the general documentation in directory Doc/, 
package-specific documentation in \*/Doc/, and the web site 
http://www.quantum-espresso.org/. Technical documentation for users and
developers 
can be found on [Wiki page on gitlab](https://gitlab.com/QEF/q-e/-/wikis/home).

## PACKAGES

- PWscf: structural optimisation and molecular dynamics on the electronic ground state, with self-consistent solution of DFT equations;
- CP: Car-Parrinello molecular dynamics;
- PHonon: vibrational and dielectric properties from DFPT (Density-Functional Perturbation Theory);
- TD-DFPT: spectra from Time-dependent DFPT;
- HP: calculation of Hubbard parameters from DFPT;
- EPW: calculation of electron-phonon coefficients, carrier transport, phonon-limited superconductivity and phonon-assisted optical processes;
- PWCOND: ballistic transport;
- XSpectra: calculation of X-ray absorption spectra;
- PWneb: reaction pathways and transition states with the Nudged Elastic Band method;
- GWL: many-body perturbation theory in the GW approach using ultra-localised Wannier functions and Lanczos chains;
- QEHeat: energy current in insulators for thermal transport calculations in DFT.
- KCW: Koopmans-compliant functionals in a Wannier representation

## Modular libraries
The following libraries have been isolated and partially encapsulated in view of their release for usage in other codes as well:

- UtilXlib: performing basic MPI handling, error handling, timing handling.
- FFTXlib: parallel (MPI and OpenMP) distributed three-dimensional FFTs, performing also load-balanced distribution of data (plane waves, G-vectors and real-space grids) across processors.
- LAXlib: parallel distributed dense-matrix diagonalization, using ELPA, SCALapack, or a custom algorithm.
- KS Solvers: parallel iterative diagonalization for the Kohn-Sham Hamiltonian (represented as an operator),using block Davidson and band-by-band or block Conjugate-Gradient algorithms.
- LRlib: performs a variety of tasks connected with (time-dependent) DFPT, to be used also in connection with Many-Body Perturbation Theory.
- upflib: pseudopotential-related code.
- devXlib: low-level utilities for GPU execution

## Contributing
Quantum ESPRESSO is an open project: contributions are welcome.
Read the [Contribution Guidelines](CONTRIBUTING.md) to see how you
can contribute.

## LICENSE

All the material included in this distribution is free software;
you can redistribute it and/or modify it under the terms of the GNU
General Public License as published by the Free Software Foundation;
either version 2 of the License, or (at your option) any later version.

These programs are distributed in the hope that they will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
675 Mass Ave, Cambridge, MA 02139, USA.
=======
>>>>>>> bdab7801028654669acc058a9c407e5cd95fb819
