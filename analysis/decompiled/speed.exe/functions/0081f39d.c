/* speed.exe 0081f39d FUN_0081f39d; analysis pseudocode, not buildable source.
 * calls 0081ef3e FUN_0081ef3e
 * calls 0081f7cb FUN_0081f7cb
 * calls 008223c3 FUN_008223c3
 */

int FUN_0081f39d(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  if (DAT_009c2188 == '\0') {
    return -10;
  }
  iVar1 = FUN_0081f7cb(param_1);
  if (-1 < iVar1) {
    local_8 = 0xffffffff;
    iVar2 = FUN_008223c3(iVar1,&local_8);
    while (iVar2 != 0) {
      FUN_0081ef3e(local_8);
      iVar2 = FUN_008223c3(iVar1,&local_8);
    }
  }
  return iVar1;
}

