## A2 alex-2.0
Similar to Lua and Javascript, it includes a register-based virtual machine. 

## install 
```
make
make install

:$ a2
A2 power by zixun.
>
```

## Tutorial?
Run `make` to generate `liba2.a` library `a2` executable program. you can write bound program by youself. or use `test_a2` program interpreted scripts file at `./test/test_a2`.

I wrote a simple command line program to explain A2 script. check detail at `./src/a2.c`

## Benchmark
I've compared to a lot of languages, such as `lua`, `python`, `perl`, `php`, `ruby`.  

test on 5000 data will be insertion sorted. the test case is :
```
A2 file at     ./test/vm.a2
perl file at   ./test/tp.pl
python file at ./test/tpy.py
php file at    ./test/th.php
lua file at    ./test/t.lua and ./test/tlua.c
ruby file at   ./test/tr.rb
```
### Performance testing
my machine configuration: 

```
cpu: 2.4GHz Intel Core 2Duo 
OS: mac osX 
gcc version 4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2336.11.00)
```

```
A2     1.7143 s
lua    2.6443 s
perl   9.7350 s
python 8.5539 s
php    4.8107 s
ruby   15 s
```

### JIT
JIT use [dynasm](http://luajit.org/dynasm_features.html) implementation. [a2_jitx64.desc](https://github.com/lvzixun/A2/blob/master/src/a2_jitx64.desc) is source code. 

the jit Performance testing
```
A2(not jit)   1.7143s
A2(with jit)  0.4560s
```
performance improvement of 73%, is 3.7 times that of not jit.

you can open `#define A2_JIT` at `a2_conf.h`, jit currently only supports x64 posix.

## Question?
send me an email: lvzixun@gmail.com

## wiki
home wiki: https://github.com/lvzixun/A2/wiki

## PS
英语老师死得早，各位就凑合这看吧  -_-!
