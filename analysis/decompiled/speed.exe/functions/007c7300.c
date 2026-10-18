/* speed.exe 007c7300 __free_dbg_lk; analysis pseudocode, not buildable source.
 * calls 007d4aa0 _memset
 * calls 007d1050 FUN_007d1050
 * calls 007c79c0 _CheckBytes
 * calls 007d2670 __CrtDbgReport
 * calls 007d4c50 FUN_007d4c50
 * calls 007c7a10 __CrtCheckMemory
 * calls 007c7f30 __CrtIsValidHeapPointer
 */

/* Library Function - Single Match
    __free_dbg_lk
   
   Library: Visual Studio 2003 Debug */

void __thiscall __free_dbg_lk(undefined4 param_1,uint param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int *_Dst;
  
  if (DAT_009baa14 != 0) {
    if (DAT_009baa04 == DAT_009baa14 + -1) {
      iVar2 = __CrtCheckMemory(param_1);
      if ((iVar2 == 0) &&
         (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x44c,0,"_CrtCheckMemory()"), iVar2 == 1)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      DAT_009baa04 = 0;
    }
    else {
      DAT_009baa04 = DAT_009baa04 + 1;
    }
  }
  if (param_2 != 0) {
    if ((param_3 == 1) &&
       (iVar2 = _CheckBytes((param_2 & 0xfffffffc) - 4,DAT_0090630f,4), iVar2 != 0)) {
      iVar2 = __CrtDbgReport(1,0,0,0,
                             "The Block at 0x%p was allocated by aligned routines, use _aligned_free()"
                             ,param_2);
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      iVar2 = (*(code *)PTR_FUN_00906cc0)(3,param_2,0,param_3,0,0,0);
      if (iVar2 == 0) {
        iVar2 = __CrtDbgReport(0,0,0,0,&DAT_008941f8,"Client hook free failure.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        iVar2 = __CrtIsValidHeapPointer(param_2);
        if ((iVar2 == 0) &&
           (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x46c,0,"_CrtIsValidHeapPointer(pUserData)"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        _Dst = (int *)(param_2 - 0x20);
        if (((((*(uint *)(param_2 - 0xc) & 0xffff) != 4) && (*(int *)(param_2 - 0xc) != 1)) &&
            ((*(uint *)(param_2 - 0xc) & 0xffff) != 2)) &&
           ((*(int *)(param_2 - 0xc) != 3 &&
            (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x472,0,"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
            iVar2 == 1)))) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((DAT_00906300 & 4) == 0) {
          iVar2 = _CheckBytes(_Dst + 7,DAT_0090630c,4);
          if ((iVar2 == 0) &&
             (iVar2 = __CrtDbgReport(1,0,0,0,"DAMAGE: before %hs block (#%d) at 0x%p.\n",
                                     (&PTR_DAT_00906310)[_Dst[5] & 0xffff],_Dst[6],_Dst + 8),
             iVar2 == 1)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar2 = _CheckBytes((int)_Dst + _Dst[4] + 0x20,DAT_0090630c,4);
          if ((iVar2 == 0) &&
             (iVar2 = __CrtDbgReport(1,0,0,0,"DAMAGE: after %hs block (#%d) at 0x%p.\n",
                                     (&PTR_DAT_00906310)[_Dst[5] & 0xffff],_Dst[6],_Dst + 8),
             iVar2 == 1)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if (_Dst[5] == 3) {
          if (((_Dst[3] != -0x1234544) || (_Dst[6] != 0)) &&
             (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x489,0,
                                     "pHead->nLine == IGNORE_LINE && pHead->lRequest == IGNORE_REQ")
             , iVar2 == 1)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          _memset(_Dst,(uint)DAT_0090630d,_Dst[4] + 0x24);
          FUN_007d1050(_Dst);
        }
        else {
          if ((_Dst[5] == 2) && (param_3 == 1)) {
            param_3 = 2;
          }
          if ((_Dst[5] != param_3) &&
             (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x497,0,"pHead->nBlockUse == nBlockUse"),
             iVar2 == 1)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          DAT_009baa10 = DAT_009baa10 - _Dst[4];
          if ((DAT_00906300 & 2) == 0) {
            if (*_Dst == 0) {
              if ((DAT_009baa00 != _Dst) &&
                 (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x4a6,0,"_pLastBlock == pHead"), iVar2 == 1))
              {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              DAT_009baa00 = (int *)_Dst[1];
            }
            else {
              *(int *)(*_Dst + 4) = _Dst[1];
            }
            if (_Dst[1] == 0) {
              if ((DAT_009baa0c != _Dst) &&
                 (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x4b0,0,"_pFirstBlock == pHead"), iVar2 == 1)
                 ) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              DAT_009baa0c = (int *)*_Dst;
            }
            else {
              *(int *)_Dst[1] = *_Dst;
            }
            _memset(_Dst,(uint)DAT_0090630d,_Dst[4] + 0x24);
            FUN_007d1050(_Dst);
          }
          else {
            _Dst[5] = 0;
            _memset(_Dst + 8,(uint)DAT_0090630d,_Dst[4]);
          }
        }
      }
    }
  }
  return;
}

