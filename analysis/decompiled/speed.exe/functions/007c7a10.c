/* speed.exe 007c7a10 __CrtCheckMemory; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007c7d47 FUN_007c7d47
 * calls 007c7d52 FUN_007c7d52
 * calls 007c79c0 _CheckBytes
 * calls 007d2670 __CrtDbgReport
 * calls 007d5030 __heapchk
 */

/* Library Function - Single Match
    __CrtCheckMemory
   
   Library: Visual Studio 2003 Debug */

undefined4 __CrtCheckMemory(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  char *local_30;
  undefined4 *local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b8740;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  if ((DAT_00906300 & 1) == 0) {
    return 1;
  }
  ExceptionList = &pvStack_14;
  __lock(4);
  local_8 = 0;
  iVar3 = __heapchk();
  if ((iVar3 == -1) || (iVar3 == -2)) {
    for (local_20 = DAT_009baa0c; local_20 != (undefined4 *)0x0; local_20 = (undefined4 *)*local_20)
    {
      bVar2 = true;
      if (((((local_20[5] & 0xffff) == 4) || (local_20[5] == 1)) || ((local_20[5] & 0xffff) == 2))
         || (local_20[5] == 3)) {
        local_30 = (&PTR_DAT_00906310)[local_20[5] & 0xffff];
      }
      else {
        local_30 = "DAMAGED";
      }
      iVar3 = _CheckBytes(local_20 + 7,DAT_0090630c,4);
      if (iVar3 == 0) {
        iVar3 = __CrtDbgReport(0,0,0,0,"DAMAGE: before %hs block (#%d) at 0x%p.\n",local_30,
                               local_20[6],local_20 + 8);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        bVar2 = false;
      }
      iVar3 = _CheckBytes((int)local_20 + local_20[4] + 0x20,DAT_0090630c,4);
      if (iVar3 == 0) {
        iVar3 = __CrtDbgReport(0,0,0,0,"DAMAGE: after %hs block (#%d) at 0x%p.\n",local_30,
                               local_20[6],local_20 + 8);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        bVar2 = false;
      }
      if ((local_20[5] == 0) &&
         (iVar3 = _CheckBytes(local_20 + 8,DAT_0090630d,local_20[4]), iVar3 == 0)) {
        iVar3 = __CrtDbgReport(0,0,0,0,"DAMAGE: on top of Free block at 0x%p.\n",local_20 + 8);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        bVar2 = false;
      }
      if (!bVar2) {
        if ((local_20[2] != 0) &&
           (iVar3 = __CrtDbgReport(0,0,0,0,"%hs allocated at file %hs(%d).\n",local_30,local_20[2],
                                   local_20[3]), iVar3 == 1)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        iVar3 = __CrtDbgReport(0,0,0,0,"%hs located at 0x%p is %Iu bytes long.\n",local_30,
                               local_20 + 8,local_20[4]);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
      }
    }
  }
  else {
    switch(iVar3) {
    case -6:
      iVar3 = __CrtDbgReport(0,0,0,0,&DAT_008941f8,"_heapchk fails with _HEAPBADPTR.\n");
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      break;
    case -5:
      iVar3 = __CrtDbgReport(0,0,0,0,&DAT_008941f8,"_heapchk fails with _HEAPBADEND.\n");
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      break;
    case -4:
      iVar3 = __CrtDbgReport(0,0,0,0,&DAT_008941f8,"_heapchk fails with _HEAPBADNODE.\n");
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      break;
    case -3:
      iVar3 = __CrtDbgReport(0,0,0,0,&DAT_008941f8,"_heapchk fails with _HEAPBADBEGIN.\n");
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      break;
    default:
      iVar3 = __CrtDbgReport(0,0,0,0,&DAT_008941f8,"_heapchk fails with unknown return value!\n");
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_007c7d47();
  uVar4 = FUN_007c7d52();
  return uVar4;
}

