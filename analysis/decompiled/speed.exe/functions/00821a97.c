/* speed.exe 00821a97 FUN_00821a97; analysis pseudocode, not buildable source.
 * calls 0081f7cb FUN_0081f7cb
 * calls 008223c3 FUN_008223c3
 * calls 00824f74 FUN_00824f74
 */

int FUN_00821a97(undefined4 param_1,undefined4 param_2)

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
      FUN_00824f74(local_8,param_2);
      iVar2 = FUN_008223c3(iVar1,&local_8);
    }
  }
  return iVar1;
}

