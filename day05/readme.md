# Day 05 - Java Version of md5sum

We use md5sum for some file verification at work. This is a small Java
program to reproduce the Cygwin64 version I use on the command line.
Built and run with Java 11.

Usage:
```
  C:\Workspace\cerner_2to5_2019\day05> javac md5sum.java

  C:\Workspace\cerner_2to5_2019\day05> java -cp . md5sum md5sum.java
  de5e54c03d581ad7f2a1d530f4514b91
```
