#!/bin/zsh

find src/ | entr -s 'make && ./bin/kvstore'
