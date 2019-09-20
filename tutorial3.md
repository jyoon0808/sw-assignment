title: Software Tutorial 3
output: tutorial3.html 
controls: true 
style: style.css

--

# Terminal 101

--

### Terminologies

* CPU Architecture
  * x86-64 (amd64)
  * ARM
  * others...
* Source & Pre-built binary
* Stable, nightly, LTS
* GUI & CLI
* Return code
* IDE
* Embedded System
* Linker

--

### Basics

* Common Shells
  * Unix: BASH -> ZSH
  * Windows: CMD -> PowerShell (pwsh)
* IO streams: stdin, stdout, stderr
* Tab Completion

--

### File Path Representation

* Unix
  * root: `/`
  * Directory delimiter: `/`
  * Home: `~`
* Windows:
  * Drive: `X:\` (where `X` is the letter for your drive)
  * Directory delimiter: `\` (but powershell accepts `/` also)
* Current directory: `.`
* Parent: `..`

--

### Terminal Path Configuration

* Path variable: where to find your command line tools.
* Unix: Export using script
* Windows: Environment variable configuration

--

### Common Tools

* `cd`
* `ls`
* `echo`
* `cat`
* `grep`
* `less`
* Command line options
* pipes
* package manager

--

# Computer System 101

--

### Memory

* Signed integer using 2's complement
* Endianness
* Word size
* Memory Alignment
* Memory hierarchy
  * Register
  * Cache (L1, L2, L3)
  * RAM
  * Hard disk
* Memory Mapped IO
* Union
* Discriminated union

--

### Multi-Tasking

* Thread
* Scheduling
* Hardware & software interrupts
* Context switching
* Real-time requirement
* Hardware timers
* Direct Memory Access (DMA)
* Problem with multi-tasking (concurrency)

--

### Function & Instruction Execution

* Parameters
* Jump
* Stack
* Heap
* Recursion
* Indirect Jump (function pointer)
* Dynamic dispatch, virtual method table

--

### Compiler Optimization

* Compile time evaluation
* Variable elimination
* Loop optimization
* Instruction reordering
* Switch optimization
* Importance of `volatile`
* Problem of undefined behaviors

--

# Software Engineering

--

### Modules

* Abstract API
* Separation of concern
* Pure functions
* Access control
* Importance of naming

--

### Debugging

* Debugger
* Watch variable
* Breakpoint
* Step instructions

--

### Common Techniques

* Recursive data type
* Circular buffer
* Modulo
* Recursion to loops

