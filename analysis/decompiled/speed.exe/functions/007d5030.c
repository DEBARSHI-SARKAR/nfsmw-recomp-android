/* speed.exe 007d5030 __heapchk; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007d5092 FUN_007d5092
 * calls 007d509d FUN_007d509d
 * calls 007d67a0 ___sbh_heap_check
 */

/* Library Function - Single Match
    __heapchk
   
   Library: Visual Studio 2003 Debug */

int __cdecl __heapchk(void)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 *puVar4;
  int local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd1c8;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  local_20 = -2;
  if (DAT_009c531c == 3) {
    ExceptionList = &pvStack_14;
    __lock(4);
    local_8 = 0;
    ___sbh_heap_check();
    local_8 = 0xffffffff;
    FUN_007d5092();
    iVar1 = FUN_007d509d();
    return iVar1;
  }
  ExceptionList = &pvStack_14;
  BVar2 = HeapValidate(DAT_009c5318,0,(LPCVOID)0x0);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      puVar4 = (undefined4 *)FUN_007cb280();
      *puVar4 = 0x78;
      puVar4 = (undefined4 *)FUN_007cb270();
      *puVar4 = 0x28;
    }
    else {
      local_20 = -4;
    }
  }
  ExceptionList = pvStack_14;
  return local_20;
}

