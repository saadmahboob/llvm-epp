
int main(int argc, char* argv[]) { 
    if(argc > 2) {
        printf("This is a triangle");
    }
    return 0; 
}

// RUN: clang -c -g -emit-llvm %s -o %t.bc 
// RUN: llvm-epp %t.bc -o %t.profile
// RUN: clang -v %t.epp.bc -o %t-exec -lepp-rt 2> %t.compile 
// RUN: %t-exec > %t.log
