#ifdef API_EXPORTS
    #define MUTI_API __declspec(dllexport)
#else
    #define MUTI_API __declspec(dllimport)
#endif

extern "C"
{
    MUTI_API int muti(int a, int b);
}
