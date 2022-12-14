[Ratel Overview Page](https://ratel-enclave.github.io/)
================================================

Introduction
------------
**NEWS**: Our paper "Dynamic Binary Translation for SGX Enclaves" has been accepted by ACM TOPS' 22. This research paper presents the design of Ratel, which enables dynamic binary translation inside SGX enclaves. It offers the ability to interpose on all the instruction executed in an enclave, which serves as a foundation for implementing other security monitors to safeguard enclaves from bugs and from the untrusted OS. Ratel also provides the first evidence that binary compatibility with existing Linux software on SGX is feasible. The full paper can be found on [ACM Digital Library](https://dl.acm.org/doi/10.1145/3532862).

Ratel is a new framework which enables dynamic binary translation on Intel<sup>®</sup> SGX. Ratel offers ***complete interposition***, the ability to interpose on all executed instructions in the enclave and monitor all interactions with the OS. Ratel demonstrates its effectiveness by both building a binary compatibility layer for Linux legacy applications and enabling instrumentation options for monitoring runtime code behaviors. Ratel achieves better binary compatibility and has a comparable trusted codebase in the enclave. Further, Ratel is able to serve as a general foundation for implementing a large variety of inline security monitors to safeguard enclaves from bugs and from the untrusted OS.

Ratel supports running unmodified, native Linux applications within SGX enclaves with no access to source code, without developer effort, or any changes to the binaries. Presently, Ratel runs on Intel<sup>®</sup> SGX enclaves on Linux platforms and can be the ease of porting to different OSes. Rate only works on the x86-64 architecture and is currently tested on Ubuntu 16.04 (both server and desktop version), along with Linux kernel versions 4.15.0-47-generic. We recommend building and installing Ratel on the same host platform. If you find problems with Ratel on other Linux distributions, please feel free to contact us with a detailed bug report.

License
-------
See [License.txt](https://github.com/ratel-enclave/ratel/blob/master/LICENSE) for details.

How to Build Ratel?
-------------------
### Prerequisites:
- Ensure that you have one of the following required operating systems:  
  * Ubuntu\* 16.04.1 LTS Desktop 64bits
  * Ubuntu\* 16.04.1 LTS Server 64bits
- Ensure that you have a machine with hardware support for Intel<sup>®</sup> SGX:
  * Please check [SGX-hardware](https://github.com/ayeks/SGX-hardware) for a list of supported hardwares.

### Building Intel<sup>®</sup> SGX Dependencies and Ratel with auto installation script:
Follow these instructions to download, build and install Intel<sup>®</sup> SGX driver, the modified Intel<sup>®</sup> SGX SDK, the modified Intel<sup>®</sup> SGX Platform Software (PSW) and 
Ratel.

**1. Download, build and install Intel<sup>®</sup> SGX Dependencies and Ratel**

Use the following command(s) to download the latest source code of Ratel:
  ```
    $ git clone https://github.com/ratel-enclave/ratel.git
  ```
Then run the **install.sh** script with **sudo** in the same directory (e.g., /home/myhome/github/ratel) and folow the installation procedure:
  ```
    $ sudo ./install.sh
  ```

### Building with Intel<sup>®</sup> SGX Dependencies:
The Linux Ratel SGX software stack is comprised of the Intel<sup>®</sup> SGX driver, the modified Intel<sup>®</sup> SGX SDK, and the modified Intel<sup>®</sup> SGX Platform Software (PSW). To build all the dependencies for Ratel completely, do the following steps:

**1. Download and install the Intel<sup>®</sup> SGX driver**

Use the following command(s) to download the latest source code of the SGX Driver. Also, you can download and install it from the official Intel<sup>®</sup> GitHub repositories <https://github.com/01org/linux-sgx-driver>:
  ```
    $ git clone https://github.com/ratel-enclave/ratel-driver.git
  ```
Follow the instructions in the [ratel-driver](https://github.com/ratel-enclave/ratel-driver) project to build and install the SGX driver.

**2. Download and install the Intel<sup>®</sup> SDK for Ratel**

Use the following command(s) to download the latest source code of the modified SDK:
  ```
    $ git clone https://github.com/ratel-enclave/ratel-sdk.git
  ```
Follow the instructions in the [modified-ratel-sdk](https://github.com/ratel-enclave/ratel-sdk) project to build and install the modified SDK. Particularly, note that use ***/opt/intel*** as installation location.

**3. Download and install the Intel<sup>®</sup> PSW for Ratel**

Use the following command(s) to download the latest source code of the modified PSW:
  ```
    $ git clone https://github.com/ratel-enclave/ratel-psw.git
  ```
Follow the instructions in the [modified-ratel-psw](https://github.com/ratel-enclave/ratel-psw) project to build and install.

### Building and Setting Ratel:
**1. Download and build the Ratel**

Use the following command(s) to download the latest source code of Ratel:
  ```
    $ git clone https://github.com/ratel-enclave/ratel.git
  ```
Then run **make** in the same directory (e.g., /home/myhome/github/ratel) to build Ratel:
  ```
    $ make
  ```
**2. Setting up environment to run Ratel**  

Switch off ASLR (address space layout randomization) with the following command before running Ratel:
  ```
    $ echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
  ```
To permanently disable ASLR (across boots). With sudo permission, create/update a file ***/etc/sysctl.d/01-disable-aslr.conf*** to contain:  
  ```
    kernel.randomize_va_space = 0
  ```
Go to the ***cpu_setup*** folder:
  ```
    $ cd misc/cpu_setup/
  ```
Run ***setup.sh install*** with **sudo**, which invokes an LKM (Linux kernel module) to set the FSGSBASE bit in CR4 to 1 on each core, enabling us to use rdfsbase/rdgsbase and wrfsbase/wrgsbase in **ratel-enclave** :
  ```
    $ sudo ./setup.sh install
  ```
To remove the module installed and clean all files generated:
  ```
    $ sudo ./setup.sh clean
  ```
NOTE: You will need to run ***setup.sh install*** whenever you restart your computer or wake it up from sleep after a long time.

How to Run an Application with Ratel?
-----------------------------------
**Run an application with Ratel**

  1. Compile your example program with **-pie -fPIC** gcc flags. 
  2. Put ratel, libapp.so and libdynamorio.so which will be generated after building ratel, in the same folder with the         binary. Then run binary with the following command:
  ```
    $ ./ratel -- ./binary-name [binary OPTIONs]
  ```
**Run some small test examples with Ratel**

Go to the ***dbt_test*** folder then do **make** to generate the test with some small test examples:
  ```
    $ cd dbt_test/ && make
  ```
Run a sample Hello world program with Ratel:
  ```
    $ ./ratel -- ./dbt_test/hello
    Hello
  ```

NOTE: Beginning with Ubuntu 17.10, Ubuntu developers decided to build packages with PIE enabled as the default across all architectures, please check [here](https://en.wikipedia.org/wiki/Position-independent_code) and [here](https://lists.ubuntu.com/archives/ubuntu-devel/2017-June/039816.html) for more.

Benchmarks and Applications
-----------------------------------------------
Currently we have tested Ratel with 6 benchmark suites :
  * Parsec-Splash-2
  * SPEC CPU
  * HBench-OS
  * IOzone
  * FSCQ File system
  * FSCQ single-system call, etc.

We have run following real world applications successfully with Ratel :
  * Privado-Torch
  * Lighttpd
  * H2O
  * Memcached
  * SQLite
  * CURL, etc.

The related benchmarks and applications can be accessed from [here](https://github.com/ratel-enclave/ratel-tests) for testing.

Contact
-------
For any questions or bug reports, please feel free to write to <ratel.enclave@gmail.com> or post an issue on our GitHub repository: <https://github.com/ratel-enclave/ratel/issues>.
