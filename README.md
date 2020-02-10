Pangolin
================================================

Introduction
------------
A system of Pangolin which enables Dynamic Binary Interpreter (DBI) on Intel SGX Enclaves for unmodified Linux applications.

License
-------
See [License.txt](License.txt) for details.

Documentation
-------------
- [A guide of Pangolin setup](https://docs.google.com/document/d/1-5b_rjOpaQnSnKLnoPCyvUnyVEVsy7f1CxrNsKV5z3Q/edit#)


Download and Install
------------
### Prerequisites:
- Ensure that you have one of the following required operating systems:  
  * Ubuntu\* 16.04.3 LTS Desktop 64bits
  * Ubuntu\* 16.04.3 LTS Server 64bits
- Ensure that you have a machine with hardware support for Intel SGX:
  * Please check [SGX-hardware](https://github.com/ayeks/SGX-hardware) for more details

### A Guide of Setup:
**1. Download and Install the Pangolin Driver**

Use the following command(s) to download the latest source code of Pangolin Driver:
  ```
    $ git clone https://github.com/pangolin-enclave/pangolin-driver.git .
  ```
Follow the instructions in the [pangolin-driver](https://github.com/pangolin-enclave/pangolin-driver) project to build and install the Pangolin driver.

**2. Download and Install the Pangolin SDK Package**

Use the following command(s) to download the latest source code of Pangolin SDK:
  ```
    $ git clone https://github.com/pangolin-enclave/pangolin-sdk.git .
  ```
Follow the instructions in the [pangolin-sdk](https://github.com/pangolin-enclave/pangolin-sdk) project to build and install the Pangolin SDK.

**3. Download and Install the Pangolin PSW Package**

Use the following command(s) to download the latest source code of Pangolin PSW:
  ```
    $ git clone https://github.com/pangolin-enclave/pangolin-psw.git .
  ```
Follow the instructions in the [pangolin-psw](https://github.com/pangolin-enclave/pangolin-psw) project to build and install the Pangolin PSW.

**4. Download and Install the Pangolin Package**

Use the following command(s) to download the latest source code of Pangolin:
  ```
    $ git clone https://github.com/pangolin-enclave/pangolin.git .
  ```
Run ***dyrio2sgx.sh*** with sudo, no need of args (even though the scripts says so):
  ```
    $ cd misc/ && sudo ./dyrio2sgx.sh
  ```
Go to the ***cpu_setup*** folder and do make:
  ```
    $ cd misc/cpu_setup/ && make
  ```
Run ***run.sh*** with sudo, which invokes an LKM to set the FSGSBASE bit in CR4 to 1, enabling us to use rdfsbase/rdgsbase and wrfsbase/wrgsbase in **pangolin-enclave**. If needed, use command **dmesg** getting the log to check this bit is set successfully or not:
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
Perform **source** command in the pangolin directory:
  ```
    $ source /opt/intel/sgxsdk/environment
  ```
Then run **make** in the same directory (e.g., /home/myhome/github/pangolin):
  ```
    $ make
  ```
Compile your example program with **-pie -fPIC** gcc flags or go to the ***dbi_test*** folder then do **make** to do the test by our existing examples:
  ```
    $ cd dbi_test/ && make
  ```
Run program with Pangolin:
  ```
    $ ./pangolin -- ./dbi_test/hello
    Hello
  ```


