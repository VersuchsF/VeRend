alias cm-s := cmake-setup
alias b := build
alias r := run
alias cm-g := cmake-gui

cmake-setup:
    cmake -S . -B build/

build jobs-count:
    cd build/ && ninja -j{{ jobs-count }}

run:
    ./build/sandbox/sandbox

cmake-gui:
    cmake-gui -S . -B build/
