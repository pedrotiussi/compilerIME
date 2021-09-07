#include <stdio.h>
#include <cstring>
#include <stdlib.h> 

#include "lexical_analyzer.h"
#include <errno.h>

void ERROR_FUNC(){
    printf("Invalid arguments\nUsage: awe_comp [SCRIPT_NAME] [-o OUTPUT_FILE_NAME]\n");
    exit(1);
}

int main(int argc, char const *argv[])
{
    // BEGIN command line inputs
    std::string input_file_name = "programa";
    std::string output_file_name = "executavel";
    if (argc == 2) {
        if (!strcmp(argv[1],"-o")) {
            ERROR_FUNC();
        } else {
            input_file_name = argv[1];
        }
    } else if (argc == 3) {
        if (!strcmp(argv[1], "-o")) {
            output_file_name = argv[2];
        } else {
            ERROR_FUNC();
        }
    } else if (argc == 4) {
        if (!strcmp(argv[1], "-o")) {
            input_file_name = argv[3];
            output_file_name = argv[2];
        } else if (!strcmp(argv[2],"-o")) {
            input_file_name = argv[1];
            output_file_name = argv[3];
        } else {
            ERROR_FUNC();
        }
    } else if (argc > 4) {
        ERROR_FUNC();
    }
    printf("input_file_name: %s\noutput_file_name: %s\n", input_file_name.c_str(), output_file_name.c_str());
    // END command line inputs

    program = fopen(input_file_name.c_str(), "r");
    if (!program) {
        fprintf(stderr, "Failed to open %s: %s\n", input_file_name.c_str(), strerror(errno));
    }
    do{
        token = nextToken();
        printf("%d ", token);
        if (token == CHARACTER){
            printf("CHAR ");
            printf("id=%d %c ", tokenSecundario, getCharConst(tokenSecundario));
        }
        if (token == NUMERAL){
            printf("INT ");
            printf("id=%d %d ", tokenSecundario, getIntConst(tokenSecundario));
        }
        if (token == STRINGVAL){
            printf("STRING ");
            printf("id=%d %s ", tokenSecundario, getStringConst(tokenSecundario).c_str());
        }
        if (token == IDT){
            printf("ID ");
            printf("id=%d ", tokenSecundario);
        }
        printf("\n");
    } while(token != END);
    return 0;
}