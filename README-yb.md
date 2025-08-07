Quantum ESPRESSO v7.2 with length gauge dielectric tensor. The following position operator was inspired by previous peer-reviewed work [1], [2]:
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
