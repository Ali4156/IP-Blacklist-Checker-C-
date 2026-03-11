# Security Log Analyzer (C++)

## Author
Raja Ali Shahid  
Email: rajaalishahid2005@gmail.com

## Description
Security Log Analyzer is a simple cybersecurity tool written in C++. The program reads a log file and analyzes login activity to detect suspicious behavior.

It counts successful logins and failed login attempts. If the number of failed attempts exceeds a certain limit, the program warns about a possible brute-force attack.

This project demonstrates how security professionals analyze system logs to detect potential threats.

## Features
- Reads and analyzes log files
- Counts successful login attempts
- Detects multiple failed login attempts
- Alerts about possible brute-force attacks
- Simple command-line interface

## Technologies Used
- C++
- File Handling
- Standard Library

## How to Run

Compile the program:

```bash
g++ log_analyzer.cpp -o analyzer
