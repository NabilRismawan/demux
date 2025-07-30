# Gunakan base image Linux dari Wokwi yang sudah berisi Clang/WASI SDK
FROM wokwi/builder-clang-wasm

# Ganti ke user root untuk instalasi
USER root
RUN apk add gcompat libc6-compat

# Install arduino-cli versi Linux
RUN  wget -O /tmp/cli.tar.gz \
        https://downloads.arduino.cc/arduino-cli/arduino-cli_latest_Linux_64bit.tar.gz && \
    tar -C /usr/local/bin -zxvf /tmp/cli.tar.gz && \
    rm /tmp/cli.tar.gz
RUN arduino-cli core update-index && arduino-cli core install arduino:avr