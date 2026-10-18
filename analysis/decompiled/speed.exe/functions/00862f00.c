/* speed.exe 00862f00 FUN_00862f00; analysis pseudocode, not buildable source.
 * calls 0081f7cb FUN_0081f7cb
 * calls 0081f7ff FUN_0081f7ff
 * calls 008223c3 FUN_008223c3
 */

int FUN_00862f00(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  iVar4 = -7;
  if (DAT_009c2188 == '\0') {
    iVar4 = -10;
  }
  else {
    iVar1 = FUN_0081f7cb(param_1);
    if (-1 < iVar1) {
      local_8 = -1;
      iVar2 = FUN_008223c3(iVar1,&local_8);
      while (iVar2 != 0) {
        iVar2 = local_8 * 0x90 + DAT_009c21f4;
        if ((*(int *)(iVar2 + 0x18) < 1) && (iVar3 = FUN_0081f7ff(local_8), -1 < iVar3)) {
          if (*(ushort *)(iVar2 + 0x8e) < 0x11) {
            iVar2 = 0x7fffffff;
          }
          else {
            iVar2 = ((((*(int *)(iVar2 + 0x14) - iVar3) * 100) /
                      (int)(uint)*(ushort *)(iVar2 + 0x20) << 0xc) /
                     (int)(uint)*(ushort *)(iVar2 + 0x8e) << 0xc) /
                    (int)(uint)*(ushort *)(iVar2 + 0x6e);
          }
          if (iVar4 < iVar2) {
            iVar4 = iVar2;
          }
        }
        iVar2 = FUN_008223c3(iVar1,&local_8);
      }
    }
  }
  return iVar4;
}

