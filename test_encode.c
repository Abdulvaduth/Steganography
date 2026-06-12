#include <stdio.h>
#include "encode.h"
#include "types.h"

OperationType check_operation_type(char *argv[])
{
    /*
    Step - 1 : Check the argv[1] is "-e" or not
        yes-> return e_encode;
    Step - 2 : Check the argv[1] is "-d" or not
        yes-> return e_decode;
        No -> e_unsupported;
    */
}

// hi this is my work

int main(int argc, char* argv[])
{
    EncodeInfo encInfo;

    int res = check_operation_type(argv);

    if(res == e_encode)
    {
        if(read_and_validate_encode_args(argc,argv, &encInfo) == e_success)
        {
            //print the success mess
        }
        else
        {
            //print the failure mess
        }
    }
    return 0;
}
