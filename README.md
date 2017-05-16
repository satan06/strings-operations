[![Build Status](https://travis-ci.org/satan06/strings-operations.svg?branch=master)](https://travis-ci.org/satan06/strings-operations)

The program input receives a line corresponding to the absolute path. For the specified line, perform the following operations:

	1. Determine the type of OS that uses this path;
	2. Convert all the characters in the name of the destination file (without regard to directories) to uppercase;
	3. Place the directory names on the way in reverse order.

Input:

/home/openmpi/1.6.5/lib/OpenMPI/mca_btl_tcp.so

Output:

OS: Linux
Updated path: /OpenMPI/lib/1.6.5/openmpi/home/MCA_BTL_TCP.SO

Input:

CA:\home\openmpi\1.6.5\lib\OpenMPI\mca_btl_tcp.so

Output:

OS: Windows
Updated path: CA:\OpenMPI\lib\1.6.5\openmpi\home\MCA_BTL_TCP.SO