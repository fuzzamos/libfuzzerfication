#!/bin/sh

set -ex

GHCOPTS="-Wall -package libfuzzer -package x509"

clang -Wall -c -I/opt/ghc/8.0.1/lib/ghc-8.0.1/include/ hsinit.c
ghc-asan ${GHCOPTS} -c test.hs
ghc-wrapper ${GHCOPTS} -no-hs-main -lFuzzer -o test test.o hsinit.o
