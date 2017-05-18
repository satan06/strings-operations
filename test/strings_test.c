#include <strings.h>
#include <ctest.h>

CTEST(schr_test, find_item_ok)
{
    const char *str = "/wroginer/erg/wg33hwh4/hw4hh4\0";
    const char item = '/';

    const char *result = schr(str, item);

    ASSERT_NOT_NULL(result); 
}

CTEST(schr_test, find_item_fail)
{
    const char *str = "/wroginer/erg/wg33hwh4/hw4hh4\0";
    const char item = '\\';

    const char *result = schr(str, item);

    ASSERT_NULL(result); 
}

CTEST(slen_test, correct_length)
{
    const char *str = "/ssdsg/weh";

    const int result = slen(str);

	const int expected = 10;
    ASSERT_EQUAL(expected, result); 
}

CTEST(slen_test, incorrect_length)
{
    const char *str = "/ssdsg/weh/56.3/sb";

    const int result = slen(str);

	const int expected = 3;
    ASSERT_NOT_EQUAL(expected, result); 
}

CTEST(sspn_test, incor_win_path_f)
{
    const char *str = "C4:4\\erhrnb\\wrnbn\\webxvb";

    const int result = sspn(str);

	const int expected = -1;
    ASSERT_EQUAL(expected, result); 
}

CTEST(sspn_test, incor_win_path_s)
{
    const char *str = "C:4\\erhrnb\\wrnbn\\webxvb";

    const int result = sspn(str);

	const int expected = -1;
    ASSERT_EQUAL(expected, result); 
}

CTEST(sspn_test, double_slash)
{
    const char *str = "/erhrnb//wrnbn/webxvb";

    const int result = sspn_l(str);

	const int expected = -1;
    ASSERT_EQUAL(expected, result); 
}

CTEST(sspn_test, double_bslash)
{
    const char *str = "C:\\erhrnb\\\\wrnbn\\webxvb";

    const int result = sspn(str);

	const int expected = -1;
    ASSERT_EQUAL(expected, result); 
}

CTEST(valwin_nme_test, win_AA_disk)
{
    const char *str = "AA:\\erhrnb\\wrnbn\\webxvb";

    const char *result = valwin_nme(str);

    ASSERT_NOT_NULL(result); 
}

CTEST(valwin_nme_test, win_Aa_disk)
{
    const char *str = "Aa:\\erhrnb\\wrnbn\\webxvb";

    const char *result = valwin_nme(str);

    ASSERT_NOT_NULL(result); 
}

CTEST(valwin_nme_test, win_aa_disk)
{
    const char *str = "aa:\\erhrnb\\wrnbn\\webxvb";

    const char *result = valwin_nme(str);

    ASSERT_NOT_NULL(result); 
}

CTEST(valwin_nme_test, win_aA_disk)
{
    const char *str = "aA:\\erhrnb\\wrnbn\\webxvb";

    const char *result = valwin_nme(str);

    ASSERT_NOT_NULL(result); 
}

CTEST(valwin_nme_test, win_A_disk)
{
    const char *str = "A:\\erhrnb\\wrnbn\\webxvb";

    const char *result = valwin_nme(str);

    ASSERT_NOT_NULL(result); 
}

CTEST(valwin_nme_test, win_a_disk)
{
    const char *str = "a:\\erhrnb\\wrnbn\\webxvb";

    const char *result = valwin_nme(str);

    ASSERT_NOT_NULL(result); 
}

CTEST(valwin_nme_test, win_num_disk)
{
    const char *str = "4:\\erhrnb\\wrnbn\\webxvb";

    const char *result = valwin_nme(str);

    ASSERT_NULL(result); 
}

CTEST(valwin_nme_test, win_ch_disk)
{
    const char *str = "/:\\erhrnb\\wrnbn\\webxvb";

    const char *result = valwin_nme(str);

    ASSERT_NULL(result); 
}

CTEST(valwin_nme_test, win_chch_disk)
{
    const char *str = "[:\\erhrnb\\wrnbn\\webxvb";

    const char *result = valwin_nme(str);

    ASSERT_NULL(result); 
}

CTEST(valwin_nme_test, win_chchch_disk)
{
    const char *str = "[?:\\erhrnb\\wrnbn\\webxvb";

    const char *result = valwin_nme(str);

    ASSERT_NULL(result); 
}