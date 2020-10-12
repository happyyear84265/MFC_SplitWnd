

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for MFCApplication2.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __MFCApplication2_h_h__
#define __MFCApplication2_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMFCApplication2_FWD_DEFINED__
#define __IMFCApplication2_FWD_DEFINED__
typedef interface IMFCApplication2 IMFCApplication2;

#endif 	/* __IMFCApplication2_FWD_DEFINED__ */


#ifndef __MFCApplication2_FWD_DEFINED__
#define __MFCApplication2_FWD_DEFINED__

#ifdef __cplusplus
typedef class MFCApplication2 MFCApplication2;
#else
typedef struct MFCApplication2 MFCApplication2;
#endif /* __cplusplus */

#endif 	/* __MFCApplication2_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __MFCApplication2_LIBRARY_DEFINED__
#define __MFCApplication2_LIBRARY_DEFINED__

/* library MFCApplication2 */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_MFCApplication2;

#ifndef __IMFCApplication2_DISPINTERFACE_DEFINED__
#define __IMFCApplication2_DISPINTERFACE_DEFINED__

/* dispinterface IMFCApplication2 */
/* [uuid] */ 


EXTERN_C const IID DIID_IMFCApplication2;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("a17fed6a-6c5b-43aa-af2b-1858700695aa")
    IMFCApplication2 : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IMFCApplication2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMFCApplication2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMFCApplication2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMFCApplication2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMFCApplication2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMFCApplication2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMFCApplication2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMFCApplication2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IMFCApplication2Vtbl;

    interface IMFCApplication2
    {
        CONST_VTBL struct IMFCApplication2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMFCApplication2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMFCApplication2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMFCApplication2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMFCApplication2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMFCApplication2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMFCApplication2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMFCApplication2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IMFCApplication2_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_MFCApplication2;

#ifdef __cplusplus

class DECLSPEC_UUID("fd2056e3-2b85-47a8-b770-c0841eae7f73")
MFCApplication2;
#endif
#endif /* __MFCApplication2_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


