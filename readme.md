Devcontainer setup for Eigen and Matplotlib-cpp with UV 


p11project folder is used for UV management of system python
    once devcontainer is running we can demo via:

        cd ../p11project/
        uv run test.py

    UV will enforce sync of pyproject.toml in this folder with system python packages
    If this were a deployable container we could use dev packages for those not intended for final image

    This will also make pybind11 available for future cross-language support
    
    UV/scikit-build use CMake, can potentially be integrated with cmake for main project later
        note: want to investigate transitioning to meson/UV or full bazel eventually... this is best for now.

Project root contains eigen/matplotlib-cpp example implementation
    once devcontainer is running we can demo:
    
        cmake -S . -B build
        cmake --build build --target example_project
        ./build/example_project 
