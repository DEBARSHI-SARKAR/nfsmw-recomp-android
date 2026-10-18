/* speed.exe 0081e318 FUN_0081e318; analysis pseudocode, not buildable source.
 * calls 0081f7cb FUN_0081f7cb
 * calls 008223c3 FUN_008223c3
 * calls 0081f264 FUN_0081f264
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0081e318(undefined4 param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int local_8;
  
  if (DAT_009c2188 == '\0') {
    return -10;
  }
  iVar2 = FUN_0081f7cb(param_1);
  if (-1 < iVar2) {
    local_8 = -1;
    iVar3 = FUN_008223c3(iVar2,&local_8);
    while (iVar3 != 0) {
      iVar4 = local_8 * 0x90 + DAT_009c21f4;
      iVar3 = 0;
      if (*(char *)(iVar4 + 0x23) != '\0') {
        psVar5 = (short *)(iVar4 + 4);
        fVar1 = (float)param_3 * _DAT_00890bf0;
        do {
          *(float *)(*(int *)(*psVar5 * 0x90 + 100 + DAT_009c21f4) + param_2 * 4) = fVar1;
          FUN_0081f264((int)*psVar5,param_2);
          iVar3 = iVar3 + 1;
          psVar5 = psVar5 + 1;
        } while (iVar3 < (int)(uint)*(byte *)(iVar4 + 0x23));
      }
      iVar3 = FUN_008223c3(iVar2,&local_8);
    }
  }
  return iVar2;
}

