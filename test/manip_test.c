#include <opert.h>
#include <ctest.h>

CTEST(check_test, path_lim_exceeded)
{
    const char *str = "w7OEa/OX/BQkG3kL/PWWCNIqd6/JA8OVWmV1oQCnG6LBhyouRod/mNulyqDQjHjwMhfPNDBbhCGnY546rYSOXFOmeZNcL1vCQjVVDzqTu24nwnQV2qB8l0tDQCbT95mXInejQ458SHpcgisc4nZhViJ0rLz/KpDuh4qGjQVSpONIliwoNfROlRGf9XnD4VyvL3hjrTO69dGcudiHSdyd8WHbNEUrDA8pGQH7GvJM9SypN/NWCOXLG8WBPs4dNMfaaqUU5gVilACKMd";

    const int result = check(str);

    const int expected = -2; 
    ASSERT_EQUAL(expected, result); 
}

CTEST(check_test, path_lim_ok)
{
    const char *str = "w7OEa/OX/BQkG3kL/PWWCNIqd6/JA8OVWmV1oQCnG6LBhyouRod/mNulyqDQjHjw";

    const int result = check(str);

    const int expected = 0; 
    ASSERT_EQUAL(expected, result); 
}

CTEST(check_test, forbid_symb_ok)
{
    const char *str = "w7OEa/OX/BQkG3kL/PWW*CNIqd6/JA8OVWmV1oQCnG6LBhyouRod/mNulyqDQjHjw";

    const int result = check(str);

    const int expected = -1; 
    ASSERT_EQUAL(expected, result); 
}

CTEST(check_test, forbid_symb_non)
{
    const char *str = "w7:\\OX\\BQkG3kL\\PWWCNIqd6\\JA8OVWmV1oQCnG6LBhyouRod\\mNulyqDQjHjw";

    const int result = check(str);

    const int expected = 0; 
    ASSERT_EQUAL(expected, result); 
}

