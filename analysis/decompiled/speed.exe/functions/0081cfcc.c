/* speed.exe 0081cfcc FUN_0081cfcc; analysis pseudocode, not buildable source.
 * calls 0081c131 FUN_0081c131
 * calls 0081e318 FUN_0081e318
 * calls 0081f7cb FUN_0081f7cb
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0081cfcc(undefined4 param_1,int param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (DAT_009c2188 == '\0') {
    return 0xfffffff6;
  }
  iVar2 = FUN_0081c131(param_1);
  if (iVar2 == 0) {
    uVar4 = 0xfffffff8;
  }
  else {
    *(float *)(*(int *)(iVar2 + 0x104) + param_2 * 4) = (float)param_3 * _DAT_00890bf0;
    iVar3 = FUN_0081f7cb(*(undefined4 *)(iVar2 + 4));
    if (-1 < iVar3) {
      iVar5 = 0;
      if (*(char *)(iVar2 + 0x16) != '\0') {
        iVar3 = iVar3 * 0x90 + 4;
        do {
          psVar1 = (short *)(iVar3 + DAT_009c21f4);
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + 2;
          *(undefined4 *)(*(int *)(*psVar1 * 0x90 + 100 + DAT_009c21f4) + param_2 * 4) =
               *(undefined4 *)(*(int *)(iVar2 + 0x104) + param_2 * 4);
        } while (iVar5 < (int)(uint)*(byte *)(iVar2 + 0x16));
      }
      FUN_0081e318(*(undefined4 *)(iVar2 + 4),param_2,param_3);
    }
    uVar4 = 0;
  }
  return uVar4;
}

