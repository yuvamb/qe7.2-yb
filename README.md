 <img width="160" height="160" alt="Linktree-qr" src="https://github.com/user-attachments/assets/d2947dbc-e777-4f0a-967d-5d0c30abc0fb" />  ![q-e-logo](logo.jpg) 


## Quantum ESPRESSO v7.2 with length gauge dielectric tensor. 
This is a modified version of the open-source Quantum ESPRESSO v7.2 code. The modification has been made in the PP/src/epsilon.f90 file that will generate epsilon.x executable for dielectric function calculations. 

## New position operator
The following position operator was inspired by previous peer-reviewed work [1], [2]:
<img width="1851" height="614" alt="image" src="https://github.com/user-attachments/assets/4318f5de-3b51-4536-8699-47fc0edcc491" />



The formula is compatible with all arbitrary unit cell shapes of dimension A:


<img width="934" height="304" alt="image" src="https://github.com/user-attachments/assets/b483ed47-86f6-4d86-aaca-3c5fbff8d857" />



The dependency on fractional coordinates leverages the local coordinate system.
<img width="495" height="352" alt="image" src="https://github.com/user-attachments/assets/dde510d5-785d-4d23-a8d9-77bc0c902832" />


Currently, the following formulation has only been implemented over the diagonal elements of the dielectric tensor.
<img width="837" height="603" alt="image" src="https://github.com/user-attachments/assets/e10d10fe-8fc9-48cd-b500-e6aee6531c3b" />

Things to keep in mind before running the simulation:
1) Valid only for Gamma point calculations.
2) Run epsilon.x with serial.

More generalised cases will be implemented in future updates.  

## Refrences
[1] R. Resta, "The Quantum–Mechanical Position Operator in Extended Systems," Physical Review Letters, vol. 80, no. 9, p. 1800, 1998. 

[2] E. V. F. d. Aragão, D. Moreno, S. Battaglia, G. L. Bendazzoli, S. Evangelisti, T. Leininger, N. Suaud and J. A. Berger, "A simple position operator for periodic systems," Physical Review B, vol. 99, no. 20, p. 205144, 2019.

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


## LICENSE

All the material included in this distribution is free software;
you can redistribute it and/or modify it under the terms of the GNU
General Public License as published by the Free Software Foundation;
either version 2 of the License, or (at your option) any later version.

These programs are distributed in the hope that they will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
for more details.

