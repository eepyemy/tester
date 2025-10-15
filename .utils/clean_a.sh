#!/bin/bash

echo "Deleting a.out files..."
find $(git rev-parse --show-toplevel) -name "a.out" -delete -printf "removed %P\n" -or -name ".test" -delete -printf "removed %P\n"