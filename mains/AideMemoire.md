Ex00 : truncate -s 
0: (000) No permission.
1: (001) Execute permission.
2: (010) Write permission.
3: (011) Write and execute permissions.
4: (100) Read permission.
5: (101) Read and execute permissions.
6: (110) Read and write permissions.
7: (111) Read, write, and execute permissions.

Ex03 = -exec basename {} .sh \ \executes the basename command on each found file, specifying .sh as the suffix to remove, which strips the extension from each filename.

ex 04 = ifconfig: This command displays all the network configuration details.
grep ether: Filters the output to only include lines that contain the word "ether", which precedes the MAC addresses in the output.
awk '{print $2}': Parses each line filtered by grep to extract the second field, which is the MAC address in the output from ifconfig.

ex05 = echo 42 > spam the \ for the name and then truncate -s 2  + chmod properly