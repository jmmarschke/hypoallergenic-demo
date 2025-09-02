#!/usr/bin/env bash

echo "Executing start script"

git submodule update --init --recursive

cd p11project

uv sync

echo "Completed start script"
