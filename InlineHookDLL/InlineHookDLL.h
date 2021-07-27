// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the INLINEHOOKDLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// INLINEHOOKDLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef INLINEHOOKDLL_EXPORTS
#define INLINEHOOKDLL_API __declspec(dllexport)
#else
#define INLINEHOOKDLL_API __declspec(dllimport)
#endif

// This class is exported from the dll
class INLINEHOOKDLL_API CInlineHookDLL {
public:
	CInlineHookDLL(void);
	// TODO: add your methods here.
};

extern INLINEHOOKDLL_API int nInlineHookDLL;

INLINEHOOKDLL_API int fnInlineHookDLL(void);
