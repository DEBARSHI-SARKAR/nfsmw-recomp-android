/* speed.exe 0081e557 FUN_0081e557; analysis pseudocode, not buildable source.
 * calls 0081f207 FUN_0081f207
 * calls 0081f7cb FUN_0081f7cb
 * calls 008223c3 FUN_008223c3
 */

int FUN_0081e557(undefined4 param_1,short param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  if (DAT_009c2188 == '\0') {
    return -10;
  }
  iVar1 = -0x4000;
  if ((param_3 < -0x4000) || (iVar1 = 0x3fff, 0x3fff < param_3)) {
    param_3 = iVar1;
  }
  iVar1 = FUN_0081f7cb(param_1);
  if (-1 < iVar1) {
    local_8 = -1;
    while( true ) {
      iVar2 = FUN_008223c3(iVar1,&local_8);
      if (iVar2 == 0) break;
      iVar2 = local_8 * 0x90 + DAT_009c21f4;
      if (*(char *)(iVar2 + 0x23) == '\x01') {
        *(short *)(iVar2 + 0x1e) = (short)param_3;
        *(short *)(iVar2 + 0x1c) = *(short *)(iVar2 + 0x50) + *(short *)(iVar2 + 0x4c) + param_2;
        if (DAT_009c1fdc == 0) {
          *(undefined2 *)(iVar2 + 0x1c) = 0;
        }
        FUN_0081f207(local_8);
      }
    }
  }
  return iVar1;
}

