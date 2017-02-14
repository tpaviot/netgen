# Configure step
cmake -G Ninja -DINSTALL_DIR=$PREFIX \
 -DCMAKE_BUILD_TYPE=Release \
 -DCMAKE_PREFIX_PATH=$PREFIX \
 -DCMAKE_SYSTEM_PREFIX_PATH=$PREFIX \
 .

# Build step
ninja

# Install step
ninja install

# test
ninja test