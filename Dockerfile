FROM ubuntu:26.04
LABEL authors="hugo"

RUN apt-get update && apt-get install -y \
    gcc-arm-linux-gnueabihf \
    g++-arm-linux-gnueabihf \
    cmake \
    ninja-build \
    make \
    gdb-multiarch \
    git \
    wget \
    bc \
    bison \
    build-essential \
    cpio \
    fakeroot \
    file \
    flex \
    kmod \
    lsb-release \
    lz4 \
    man-db \
    gettext \
    pkg-config \
    libmpc-dev \
    u-boot-tools \
    xz-utils \
    zstd \
    libdw-dev \
    libncurses-dev \
    libssl-dev \
    bindgen \
    rust-src \
    rustc \
    rustfmt \
    rust-clippy \
    sed \
    binutils \
    diffutils \
    gcc \
    g++ \
    patch \
    gzip \
    bzip2 \
    perl \
    tar \
    cpio \
    unzip \
    rsync \
    bc \
    findutils \
    && rm -rf /var/lib/apt/lists/*

RUN update-alternatives --install /usr/bin/install install /usr/bin/gnuinstall 100