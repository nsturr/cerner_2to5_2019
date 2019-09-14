# Day 02 - Windows Batch Git checkout script

This is a definite "Engineering Productivity" script. The four core Java
project we have I constantly switch between master, a branch or two I'm working on,
and a branch I'm reviewing for a code review. This checkout is done en masse and
I'm a command-line guy. This provides a quick way to checkout a requested branch or
master if nothing is provided on all four. The part of this that made it a little
more than a quick wrapper script is the use of Window's shell coloring escape
sequences.

[MSDN link for sequences](https://docs.microsoft.com/en-us/windows/console/console-virtual-terminal-sequences?redirectedfrom=MSDN)
