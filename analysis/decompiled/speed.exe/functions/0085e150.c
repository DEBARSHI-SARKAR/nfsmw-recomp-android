/* speed.exe 0085e150 FUN_0085e150; analysis pseudocode, not buildable source.
 * calls 007cb1d0 __dosmaperr
 * calls EXTERNAL:0000004a GetLastError
 * calls EXTERNAL:0000000a CreateDirectoryA
 */

undefined4 FUN_0085e150(LPCSTR param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  BVar1 = CreateDirectoryA(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 == 0) {
    local_8 = GetLastError();
  }
  else {
    local_8 = 0;
  }
  if (local_8 == 0) {
    uVar2 = 0;
  }
  else {
    __dosmaperr(local_8);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

