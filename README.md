Ratel
================================================

Introduction
------------
A system of Ratel which enables Dynamic Binary Interpreter (DBI) on Intel SGX Enclaves for unmodified Linux applications.

License
-------
See [License.txt](License.txt) for details.

Documentation
-------------
- [A guide of Ratel setup](https://docs.google.com/document/d/1-5b_rjOpaQnSnKLnoPCyvUnyVEVsy7f1CxrNsKV5z3Q/edit#)


Download and Install
------------
### Prerequisites:
- Ensure that you have one of the following required operating systems:  
  * Ubuntu\* 16.04.3 LTS Desktop 64bits
  * Ubuntu\* 16.04.3 LTS Server 64bits
- Ensure that you have a machine with hardware support for Intel SGX:
  * Please check [SGX-hardware](https://github.com/ayeks/SGX-hardware) for more details

### A Guide of Setup:
**1. Download and Install the Ratel Driver**

Use the following command(s) to download the latest source code of Ratel Driver:
  ```
    $ git clone https://github.com/ratel-enclave/ratel-driver.git .
  ```
Follow the instructions in the [ratel-driver](https://github.com/ratel-enclave/ratel-driver) project to build and install the Ratel driver.

**2. Download and Install the Ratel SDK Package**

Use the following command(s) to download the latest source code of Ratel SDK:
  ```
    $ git clone https://github.com/ratel-enclave/ratel-sdk.git .
  ```
Follow the instructions in the [ratel-sdk](https://github.com/ratel-enclave/ratel-sdk) project to build and install the Ratel SDK.

**3. Download and Install the Ratel PSW Package**

Use the following command(s) to download the latest source code of Ratel PSW:
  ```
    $ git clone https://github.com/ratel-enclave/ratel-psw.git .
  ```
Follow the instructions in the [ratel-psw](https://github.com/ratel-enclave/ratel-psw) project to build and install the ratel PSW.

**4. Download and Install the Ratel Package**

Use the following command(s) to download the latest source code of Ratel:
  ```
    $ git clone https://github.com/ratel-enclave/ratel.git .
  ```
Run ***dyrio2sgx.sh*** with sudo, no need of args (even though the scripts says so):
  ```
    $ cd misc/ && sudo ./dyrio2sgx.sh
  ```
Go to the ***cpu_setup*** folder and do make:
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
Perform **source** command in the ratel directory:
  ```
    $ source /opt/intel/sgxsdk/environment
  ```
Then run **make** in the same directory (e.g., /home/myhome/github/ratel):
  ```
    $ make
  ```
Compile your example program with **-pie -fPIC** gcc flags or go to the ***dbi_test*** folder then do **make** to do the test by our existing examples:
  ```
    $ cd dbi_test/ && make
  ```
Run program with Ratel:
  ```
    $ ./ratel -- ./dbi_test/hello
    Hello
  ```


