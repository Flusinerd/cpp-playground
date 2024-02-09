#!/bin/zsh

find ./src ./inc -type f | entr -s 'bear -- make clean && make all && clear && ./bin/kvstore'
