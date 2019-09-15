# Day 03 - C++ Where Am I program

This little C++ program is a programmatic way to get some of the information you can find
in IPCONFIG /ALL on the command line. It's a little dated in that it only displays IPv4 but
it was a quick way to demonstrate calling into Microsoft's APIs to get the host name, IP
address, and domain fully qualified name.

This was build with (ahem) Visual Studio 12's command line builder against 'Ws2_32.lib'.

Example:
```
  C:\Workspace\cerner_2to5_2019\day03> whereami.exe
  Host    : W1745617
  Address : 172.19.235.33
  Full    : W1745617.northamerica.cerner.net
```
