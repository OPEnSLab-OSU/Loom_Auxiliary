#!/bin/bash

# This can be further autmated in the future to increment version / take
# version as parameter, and add new entry to package_loom_index.json

cd ./Arduino_Profile
rm loom-samd-*.tar.bz2
tar -jcvf loom-samd-0.0.1.tar.bz2 samd

echo "Update release with:"
echo "Size:"
wc -c < loom-samd-0.0.1.tar.bz2
echo "SHA:"
shasum -a 256 loom-samd-0.0.1.tar.bz2


