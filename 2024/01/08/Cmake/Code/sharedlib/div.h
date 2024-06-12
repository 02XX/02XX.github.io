#ifdef API_EXPORTS
    #define DIV_API __declspec(dllexport)
#else
    #define DIV_API __declspec(dllimport)
#endif

extern "C"
{
    DIV_API int div123(int a, int b);
}
