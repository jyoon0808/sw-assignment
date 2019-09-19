title: Software Tutorial 3
output: tutorial3.html 
controls: true 
style: style.css

--

# Terminal 101


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

--

# Computer System 101

--

### Memory

* Endianness
* Word size
* Memory Alignment
* Memory hierarchy
  * Register
  * Cache (L1, L2, L3)
  * RAM
  * Hard disk
* Memory Mapped IO

--

### Multi-Tasking

* Thread
* Scheduling
* Hardware & software interrupts
* Context switching
* Real-time requirement
* Hardware timers
* Direct Memory Access (DMA)

--

### Function & Instruction Execution

* Parameters
* Jump
* Indirect Jump (function pointer)
* Stack
* Heap

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

* What is a debugger
* Watch variable
* Breakpoint
* Step instructions

