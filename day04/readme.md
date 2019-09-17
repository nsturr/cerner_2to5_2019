# Day 03 - Java Shell and Kumo Word Cloud

This little JDK JShell with [JDK 12.0.2](https://jdk.java.net/12/) to generate a PNG word cloud
from an input text file. I've been facinated with new JShell and use it a lot at work. This let me
explore a little of the save/open and class-path command line option.

Download the [Kumo 1.8](https://repo1.maven.org/maven2/com/kennycason/kumo/1.8/) JAR and Java 12 JDK and run
the JShell. Load the JSH and open the generated PNG file.

JShell usage:
```
  C:\Workspace\cerner_2to5_2019\day04> "c:\Program Files\Java\jdk-12.0.2\bin\jshell.exe" --class-path kumo-1.8.jar
  |  Welcome to JShell -- Version 12.0.2
  |  For an introduction type: /help intro

  jshell> /open wordcloud.jsh
  log4j:WARN No appenders could be found for logger (com.kennycason.kumo.WordCloud).
  log4j:WARN Please initialize the log4j system properly.
  log4j:WARN See http://logging.apache.org/log4j/1.2/faq.html#noconfig for more info.

  jshell>
```
