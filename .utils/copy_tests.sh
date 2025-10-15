#!/bin/bash

filename=$1
to_dir=$2

cd $(git rev-parse --show-toplevel)
cp -r .utils/ $to_dir/
cp $filename $to_dir/.test.c