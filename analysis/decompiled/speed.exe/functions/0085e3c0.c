/* speed.exe 0085e3c0 __chdrive; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 0085e473 FUN_0085e473
 * calls 007cb280 FUN_007cb280
 * calls 007cb1d0 __dosmaperr
 * calls 007cb270 FUN_007cb270
 * calls EXTERNAL:0000004a GetLastError
 * calls EXTERNAL:00000015 SetCurrentDirectoryA
 * calls 0085e468 FUN_0085e468
 */

/* Library Function - Single Match
    __chdrive
   
   Library: Visual Studio 2003 Debug */

int __cdecl __chdrive(int _Drive)

{
  undefined4 *puVar1;
  BOOL BVar2;
  DWORD DVar3;
  int iVar4;
  char local_24 [4];
  undefined4 local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008c7b58;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  if ((0 < _Drive) && (_Drive < 0x20)) {
    ExceptionList = &pvStack_14;
    __lock(7);
    local_8 = 0;
    local_24[0] = (char)_Drive + '@';
    local_24[1] = 0x3a;
    local_24[2] = 0;
    BVar2 = SetCurrentDirectoryA(local_24);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      __dosmaperr(DVar3);
      local_20 = 0xffffffff;
    }
    else {
      local_20 = 0;
    }
    local_8 = 0xffffffff;
    FUN_0085e468();
    iVar4 = FUN_0085e473();
    return iVar4;
  }
  ExceptionList = &pvStack_14;
  puVar1 = (undefined4 *)FUN_007cb270();
  *puVar1 = 0xd;
  puVar1 = (undefined4 *)FUN_007cb280();
  *puVar1 = 0xf;
  ExceptionList = pvStack_14;
  return -1;
}

