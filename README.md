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
