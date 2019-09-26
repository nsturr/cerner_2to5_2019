# Day 06 - C++ Share Info Display

This little C++ program is a programmatic way to get information of a share on a device
calling into Microsoft's APIs.  This is a litle different in that it is UNICODE.

This was build with Visual Studio 12's command line builder (CL -GX) against 'Netapi32.lib'.

Example calls:
```
  C:\Workspace\cerner_2to5_2019\day06> shareinfo.exe
  Need share name (see NET SHARE).

  C:\Workspace\cerner_2to5_2019\day06> shareinfo.exe MISSING
  Error retriving share 'MISSING' info.

  C:\Workspace\cerner_2to5_2019\day06> shareinfo.exe C$
  C$ => C:\
```
