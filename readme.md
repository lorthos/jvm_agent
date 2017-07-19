## JVM Agent

    Native JVM Agent Template
    
### Build

        cmake --build cmake-build-debug --target clean -- -j 4
        cmake --build cmake-build-debug --target jvm_agent -- -j 4

### Run
        java -agentpath:libjvm_agent.dylib ...