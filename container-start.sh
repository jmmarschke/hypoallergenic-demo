#!/usr/bin/env bash

echo "Executing start script"

sudo git submodule update --init --recursive

sudo rm -rf ./p11project/build

cd p11project

uv sync

echo "Completed start script"
