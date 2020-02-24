Ratel
================================================

Introduction
------------
A system of Ratel which enables Dynamic Binary Interpreter (DBI) on Intel SGX Enclaves for unmodified Linux applications. Ratel is built on a robust DBT system for x86_64 binaries called DynamoRIO. The central focus of this project is a design that preserves two-way transparency: the DBT engine runs on top of a SGX-enabled software stack, both of which originally assume direct low-level control of the binary and its OS interfaces. Ratel ensures that the DBT engine maintains its original goal of ensuring transparency to the virtualized application, while hiding from the SGX software stack that the DBT engine interposes between itself and the virtualized application.

Ratel is a more lightweight guest OS with benefits comparing to running a rich or complete OS or to other homologous sysytems (e.g., SCONE, Graphene), elaborated to run and protect user-level applications in isolation from other software on the untrusted system and to even be able to enable re-use of existing DynamoRIO clients for code optimization and introspection (as being a part of our ongoing work).

Ratel supports unmodified, native Linux applications with no access to source code, developer effort, or changes to the binaries.
Presently, Ratel runs on Linux and Intel SGX enclaves on Linux platforms and can be the ease of porting to different OSes. Rate only works on the x86_64 architecture and is currently tested on Ubuntu 16.04 (both server and desktop version), along with Linux kernel versions 4.x. We recommend building and installing Ratel on the same host platform. If you find problems with Ratel on other Linux distributions, please feel free to contact us with a detailed bug report.

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
- Ensure that you have a machine with hardware support for Intel SGX:
  * Please check [SGX-hardware](https://github.com/ayeks/SGX-hardware) for more details

### Building with Intel SGX Dependencies:
The Linux Ratel SGX software stack is comprised of the Intel(R) SGX driver, the Ratel SGX SDK, and the Ratel SGX Platform Software (PSW). To build all the dependencies for Ratel completely, do the following steps:

**1. Download and Install the Intel SGX Driver**

Use the following command(s) to download the latest source code of the SGX Driver. Also, you can download and install it from the official Intel GitHub repositories <https://github.com/01org/linux-sgx-driver>:
  ```
    $ git clone https://github.com/ratel-enclave/ratel-driver.git .
  ```
Follow the instructions in the [ratel-driver](https://github.com/ratel-enclave/ratel-driver) project to build and install the SGX driver.

**2. Download and Install the Ratel SDK Package**

Use the following command(s) to download the latest source code of Ratel SDK:
  ```
    $ git clone https://github.com/ratel-enclave/ratel-sdk.git .
  ```
Follow the instructions in the [ratel-sdk](https://github.com/ratel-enclave/ratel-sdk) project to build and install the Ratel SDK. Particularly, note that use ***/opt/intel*** as installation location.

**3. Download and Install the Ratel PSW Package**

Use the following command(s) to download the latest source code of Ratel PSW:
  ```
    $ git clone https://github.com/ratel-enclave/ratel-psw.git .
  ```
Follow the instructions in the [ratel-psw](https://github.com/ratel-enclave/ratel-psw) project to build and install the ratel PSW.

### Building and Setting Ratel-SGX:
**1. Download and Install the Ratel Package**

Use the following command(s) to download the latest source code of Ratel:
  ```
    $ git clone https://github.com/ratel-enclave/ratel.git .
  ```
Run ***dyrio2sgx.sh*** with sudo, no need of args (even though the scripts says so):
  ```
    $ cd misc/ && sudo ./dyrio2sgx.sh
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

How to Run an Application in Ratel?
-----------------------------------
**1. Run Built-in Examples in Graphene-SGX**

Go to the ***dbi_test*** folder then do **make** to do the test by our existing examples:
  ```
    $ cd dbi_test/ && make
  ```
Run program with Ratel:
  ```
    $ ./ratel ./dbi_test/hello
    Hello
  ```
Alternatively, compile your example program with **-pie -fPIC** gcc flags, then run them same as above.
  ```
    $ ./ratel ./xxx
  ```
NOTE: Beginning with Ubuntu 17.10, Ubuntu developers decided to build packages with PIE enabled as the default across all architectures, please check [here](https://en.wikipedia.org/wiki/Position-independent_code) and [here](https://lists.ubuntu.com/archives/ubuntu-devel/2017-June/039816.html) for more.

What is the Status of the Ratel Implementation?
-----------------------------------------------
It is now being developed actively by Ratel Team for enabling more features, such as implementing multi-processing, bridging the Ratel client interface for DBI, supporting multi-language environment and additional functionalities required in various settings.

Although Ratel surely is not full-featured or stable enough, we have demonstrated the effectiveness of Ratel across more than 6 benchmark suites (e.g., Parsec-Splash-2, SPEC CPU, HBench-OS, IOzone, etc.) and dozens of real-world applications (e.g., Privado-Torch, Lighttpd, H2O, Memcached, SQLite, CURL, etc.). The related test cases we did can be seen from [here](https://github.com/ratel-enclave/ratel-tests). Ratel is rendering itself promising for many users and enterprises as it can be deployed or extended in different environments. 

Contributors
------------
The founders of the Ratel project are

    * Pinghai Yuan, Satyaki Sen and Prateek Saxena at National University of Singapore; and
    * Jinhua Cui at National University of Defense Technology and National University of Singapore; and
    * Shweta Shinde at UC Berkeley.

Any kind of contributions for Ratel are always welcome! We will push a contributing guideline to the source and accept pull requests when the project becomes much better and more stable.

Contact
-------
For any questions or bug reports, please feel free to write to <ratel.enclave@gmail.com> or post an issue on our GitHub repository: <https://github.com/ratel-enclave/ratel/issues>.
