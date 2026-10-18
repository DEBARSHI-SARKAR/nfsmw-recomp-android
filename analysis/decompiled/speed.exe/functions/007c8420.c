/* speed.exe 007c8420 __CrtMemDumpAllObjectsSince; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007c86ce FUN_007c86ce
 * calls 007c86d9 FUN_007c86d9
 * calls 007c7ee0 __CrtIsValidPointer
 * calls 007c8710 __printMemBlockData
 * calls 007cd100 __getptd
 * calls 007d2670 __CrtDbgReport
 * calls 007d2f80 ___updatetlocinfo
 */

/* Library Function - Single Match
    __CrtMemDumpAllObjectsSince
   
   Library: Visual Studio 2003 Debug */

void __CrtMemDumpAllObjectsSince(undefined4 *param_1)

{
  code *pcVar1;
  _ptiddata p_Var2;
  int iVar3;
  undefined4 *local_28;
  undefined4 *local_24;
  pthreadlocinfo local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b88e0;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  local_28 = (undefined4 *)0x0;
  ExceptionList = &pvStack_14;
  p_Var2 = __getptd();
  local_20 = (pthreadlocinfo)p_Var2->_tfpecode;
  if (local_20 != (pthreadlocinfo)PTR_DAT_00906b3c) {
    local_20 = ___updatetlocinfo();
  }
  __lock(4);
  local_8 = 0;
  iVar3 = __CrtDbgReport(0,0,0,0,&DAT_008941f8,"Dumping objects ->\n");
  if (iVar3 == 1) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != (undefined4 *)0x0) {
    local_28 = (undefined4 *)*param_1;
  }
  local_24 = DAT_009baa0c;
  do {
    if ((local_24 == (undefined4 *)0x0) || (local_24 == local_28)) {
      local_8 = 0xffffffff;
      FUN_007c86ce();
      FUN_007c86d9();
      return;
    }
    if ((((local_24[5] & 0xffff) != 3) && ((local_24[5] & 0xffff) != 0)) &&
       (((local_24[5] & 0xffff) != 2 || ((DAT_00906300 & 0x10) != 0)))) {
      if (local_24[2] != 0) {
        iVar3 = __CrtIsValidPointer(local_24[2],1,0);
        if (iVar3 == 0) {
          iVar3 = __CrtDbgReport(0,0,0,0,"#File Error#(%d) : ",local_24[3]);
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          iVar3 = __CrtDbgReport(0,0,0,0,"%hs(%d) : ",local_24[2],local_24[3]);
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      iVar3 = __CrtDbgReport(0,0,0,0,"{%ld} ",local_24[6]);
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((local_24[5] & 0xffff) == 4) {
        iVar3 = __CrtDbgReport(0,0,0,0,"client block at 0x%p, subtype %x, %Iu bytes long.\n",
                               local_24 + 8,(int)local_24[5] >> 0x10 & 0xffff,local_24[4]);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (DAT_009c6464 == (code *)0x0) {
          __printMemBlockData(local_20,local_24);
        }
        else {
          (*DAT_009c6464)(local_24 + 8,local_24[4]);
        }
      }
      else if (local_24[5] == 1) {
        iVar3 = __CrtDbgReport(0,0,0,0,"normal block at 0x%p, %Iu bytes long.\n",local_24 + 8,
                               local_24[4]);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        __printMemBlockData(local_20,local_24);
      }
      else if ((local_24[5] & 0xffff) == 2) {
        iVar3 = __CrtDbgReport(0,0,0,0,"crt block at 0x%p, subtype %x, %Iu bytes long.\n",
                               local_24 + 8,(int)local_24[5] >> 0x10 & 0xffff,local_24[4]);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        __printMemBlockData(local_20,local_24);
      }
    }
    local_24 = (undefined4 *)*local_24;
  } while( true );
}

