// InlineHookDLL.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "InlineHookDLL.h"


// This is an example of an exported variable
INLINEHOOKDLL_API int nInlineHookDLL=0;

// This is an example of an exported function.
INLINEHOOKDLL_API int fnInlineHookDLL(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CInlineHookDLL::CInlineHookDLL()
{
    return;
}
