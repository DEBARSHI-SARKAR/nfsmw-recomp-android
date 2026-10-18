/* speed.exe 0081e3cb FUN_0081e3cb; analysis pseudocode, not buildable source.
 * calls 0081ef59 thunk_FUN_0081d7a4
 * calls 0081f7cb FUN_0081f7cb
 * calls 008223c3 FUN_008223c3
 */

int FUN_0081e3cb(undefined4 param_1,undefined1 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int local_c;
  int local_8;
  
  if (DAT_009c2188 == '\0') {
    return -10;
  }
  iVar2 = FUN_0081f7cb(param_1);
  if (-1 < iVar2) {
    local_c = -1;
    iVar3 = FUN_008223c3(iVar2,&local_c);
    while (iVar3 != 0) {
      local_8 = 0;
      iVar3 = local_c * 0x90 + DAT_009c21f4;
      if (*(char *)(iVar3 + 0x23) != '\0') {
        psVar4 = (short *)(iVar3 + 4);
        do {
          sVar1 = *psVar4;
          *(undefined1 *)(sVar1 * 0x90 + 0x5f + DAT_009c21f4) = param_2;
          thunk_FUN_0081d7a4((int)sVar1);
          local_8 = local_8 + 1;
          psVar4 = psVar4 + 1;
        } while (local_8 < (int)(uint)*(byte *)(iVar3 + 0x23));
      }
      iVar3 = FUN_008223c3(iVar2,&local_c);
    }
  }
  return iVar2;
}

