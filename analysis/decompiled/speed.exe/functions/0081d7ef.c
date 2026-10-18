/* speed.exe 0081d7ef FUN_0081d7ef; analysis pseudocode, not buildable source.
 * calls 0081d7a4 FUN_0081d7a4
 * calls 0081f7cb FUN_0081f7cb
 * calls 008223c3 FUN_008223c3
 * calls 008218a0 FUN_008218a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0081d7ef(undefined4 param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int local_c;
  int local_8;
  
  if (DAT_009c2188 == '\0') {
    return -10;
  }
  iVar2 = FUN_0081f7cb(param_1);
  if (-1 < iVar2) {
    local_c = -1;
    fVar1 = (float)param_2 * _DAT_00890bf0;
    iVar3 = FUN_008223c3(iVar2,&local_c);
    while (iVar3 != 0) {
      local_8 = 0;
      iVar3 = local_c * 0x90 + DAT_009c21f4;
      if (*(char *)(iVar3 + 0x23) != '\0') {
        psVar5 = (short *)(iVar3 + 4);
        do {
          iVar6 = (int)*psVar5;
          iVar4 = iVar6 * 0x90 + DAT_009c21f4;
          *(undefined4 *)(iVar4 + 0x30) = 0;
          if (*(float *)(iVar4 + 0x38) != fVar1) {
            *(float *)(iVar4 + 0x38) = fVar1;
            FUN_008218a0(iVar6);
            FUN_0081d7a4(iVar6);
          }
          local_8 = local_8 + 1;
          psVar5 = psVar5 + 1;
        } while (local_8 < (int)(uint)*(byte *)(iVar3 + 0x23));
      }
      iVar3 = FUN_008223c3(iVar2,&local_c);
    }
  }
  return iVar2;
}

