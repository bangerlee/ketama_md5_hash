ketama_md5_hash
===============

ketama_md5_hash is a md5 digest generator for C and python, it accepts a string and outputs an unsigned int, which could be used as a hash value.

Installation
=======
```bash
git clone git://github.com/bangerlee/ketama_md5_hash.git
cd ketama_md5_hash/libketama
make
make install
cd ../python_ketama
python setup.py install
```

Examples
========

After the installation, here is the example for C:
```bash
cd ketama_md5_hash/libketama 
./ketama_test abc
  The md5 digest for abc is 2555380112
```

Here is the example for python:
```bash
cd ketama_md5_hash/python_ketama
python test.py 
Input the string: abc
  The md5 digest for abc is 2555380112
```

API
===
C: ketama_hashi(string);   
python: ketama.hashi(string);

License
=======
See the license in the libketama/ketama.c and libketama/md5.c.
