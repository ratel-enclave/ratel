[Ratel Overview Page](https://ratel-enclave.github.io/)
================================================

Introduction
------------
A system of Ratel which enables Dynamic Binary Tranlation (DBT) on Intel(R) SGX Enclaves for unmodified Linux applications. Ratel is a more lightweight comparing to running a rich or complete OS, elaborated to run and protect user-level applications in isolation from other software on the untrusted system and to even be able to enable re-use of existing DynamoRIO clients for dynamic code optimization and introspection (as being a part of our ongoing work).

Ratel supports unmodified, native Linux applications with no access to source code, developer effort, or changes to the binaries. Presently, Ratel runs on Linux and Intel(R) SGX enclaves on Linux platforms and can be the ease of porting to different OSes. Rate only works on the x86-64 architecture and is currently tested on Ubuntu 16.04 (both server and desktop version), along with Linux kernel versions 4.15.0. We recommend building and installing Ratel on the same host platform. If you find problems with Ratel on other Linux distributions, please feel free to contact us with a detailed bug report.

License
-------
See [License.txt](https://github.com/ratel-enclave/ratel/blob/master/LICENSE) for details.

Documentation
-------------
- [A guide of Ratel setup](https://docs.google.com/document/d/1-5b_rjOpaQnSnKLnoPCyvUnyVEVsy7f1CxrNsKV5z3Q/edit#)

How to Build Ratel?
-------------------
### Prerequisites:
- Ensure that you have one of the following required operating systems:  
  * Ubuntu\* 16.04.1 LTS Desktop 64bits
  * Ubuntu\* 16.04.1 LTS Server 64bits
- Ensure that you have a machine with hardware support for Intel(R) SGX:
  * Please check [SGX-hardware](https://github.com/ayeks/SGX-hardware) for more details

### Building with Intel(R) SGX Dependencies:
The Linux Ratel SGX software stack is comprised of the Intel(R) SGX driver, the patched Intel(R) SGX SDK, and the patched Intel(R) SGX Platform Software (PSW). To build all the dependencies for Ratel completely, do the following steps:

**1. Download and Install the Intel(R) SGX Driver**

Use the following command(s) to download the latest source code of the SGX Driver. Also, you can download and install it from the official Intel(R) GitHub repositories <https://github.com/01org/linux-sgx-driver>:
  ```
    $ git clone https://github.com/ratel-enclave/ratel-driver.git .
  ```
Follow the instructions in the [ratel-driver](https://github.com/ratel-enclave/ratel-driver) project to build and install the SGX driver.

**2. Download and Install the Intel(R) SDK patched for Ratel**

Use the following command(s) to download the latest source code of the patched SDK:
  ```
    $ git clone https://github.com/ratel-enclave/ratel-sdk.git .
  ```
Follow the instructions in the [patched-ratel-sdk](https://github.com/ratel-enclave/ratel-sdk) project to build and install the patched SDK. Particularly, note that use ***/opt/intel*** as installation location.

**3. Download and Install the Intel(R) PSW patched for Ratel**

Use the following command(s) to download the latest source code of the patched PSW:
  ```
    $ git clone https://github.com/ratel-enclave/ratel-psw.git .
  ```
Follow the instructions in the [patched-ratel-psw](https://github.com/ratel-enclave/ratel-psw) project to build and install the patched PSW.

### Building and Setting Ratel-SGX:
**1. Download and Install the Ratel**

Use the following command(s) to download the latest source code of Ratel:
  ```
    $ git clone https://github.com/ratel-enclave/ratel.git .
  ```
Go to the ***cpu_setup*** folder and do **make**:
  ```
    $ cd misc/cpu_setup/ && make
  ```
Run ***run.sh*** with sudo, which invokes an LKM to set the FSGSBASE bit in CR4 to 1, enabling us to use rdfsbase/rdgsbase and wrfsbase/wrgsbase in **ratel-enclave**. If needed, use command **dmesg** getting the log to check this bit is set successfully or not:
  ```
    $ sudo ./run.sh
  ```
Switch off ASLR with the following command:
  ```
    $ echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
  ```
Or to permanently disable ASLR (across boots). With sudo permission, create/update a file ***/etc/sysctl.d/01-disable-aslr.conf*** to contain:  
  ```
    kernel.randomize_va_space = 0
  ```
Then run **make** in the same directory (e.g., /home/myhome/github/ratel):
  ```
    $ make
  ```

How to Run an Application with Ratel?
-----------------------------------
**1. Run Built-in Examples with Ratel**

Go to the ***dbt_test*** folder then do **make** to do the test by our existing examples:
  ```
    $ cd dbt_test/ && make
  ```
Run program with Ratel:
  ```
    $ ./ratel ./dbt_test/hello
    Hello
  ```
Alternatively, compile your example program with **-pie -fPIC** gcc flags, then run them same as above.
  ```
    $ ./ratel ./xxx [OPTION]
  ```
NOTE: Beginning with Ubuntu 17.10, Ubuntu developers decided to build packages with PIE enabled as the default across all architectures, please check [here](https://en.wikipedia.org/wiki/Position-independent_code) and [here](https://lists.ubuntu.com/archives/ubuntu-devel/2017-June/039816.html) for more.

Benchmarks and Applications
-----------------------------------------------
Currently we have tested Ratel with 6 benchmark suites :
  * [Parsec-Splash-2]
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

The related benchmarks and applications can be accessed from [here](https://github.com/ratel-enclave/ratel-tests).

Contact
-------
For any questions or bug reports, please feel free to write to <ratel.enclave@gmail.com> or post an issue on our GitHub repository: <https://github.com/ratel-enclave/ratel/issues>.
