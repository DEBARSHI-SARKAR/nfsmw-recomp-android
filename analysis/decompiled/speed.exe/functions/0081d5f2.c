/* speed.exe 0081d5f2 FUN_0081d5f2; analysis pseudocode, not buildable source.
 * calls 0081c131 FUN_0081c131
 * calls 0081d7a4 FUN_0081d7a4
 * calls 0081d5c5 FUN_0081d5c5
 * calls 0081f7cb FUN_0081f7cb
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0081d5f2(undefined4 param_1,int param_2,float param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int local_8;
  
  if (DAT_009c2188 != '\0') {
    iVar2 = FUN_0081c131(param_1);
    if (iVar2 == 0) {
      uVar3 = 0xfffffff8;
    }
    else {
      if (param_2 == -1) {
        local_8 = 6;
        do {
          FUN_0081d5c5(param_3);
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      else {
        FUN_0081d5c5(param_3);
      }
      iVar2 = FUN_0081f7cb(*(undefined4 *)(iVar2 + 4));
      if (-1 < iVar2) {
        if (param_2 == -1) {
          iVar5 = iVar2 * 0x90 + DAT_009c21f4;
          iVar2 = 0;
          if (*(char *)(iVar5 + 0x23) != '\0') {
            psVar6 = (short *)(iVar5 + 4);
            do {
              sVar1 = *psVar6;
              iVar4 = sVar1 * 0x90 + DAT_009c21f4;
              if (*(float *)(iVar4 + 0x38) != param_3) {
                *(float *)(iVar4 + 0x38) = param_3;
                *(float *)(iVar4 + 0x48) = _DAT_0090bd14 * param_3;
                FUN_0081d7a4((int)sVar1);
              }
              iVar2 = iVar2 + 1;
              psVar6 = psVar6 + 1;
            } while (iVar2 < (int)(uint)*(byte *)(iVar5 + 0x23));
          }
        }
        else {
          iVar2 = iVar2 * 0x90 + DAT_009c21f4;
          if ((char)(&DAT_008c5bea)[(uint)*(byte *)(iVar2 + 0x23) * 6 + param_2] != -0x80) {
            iVar5 = (int)*(short *)(iVar2 + 4 +
                                   (char)(&DAT_008c5bea)
                                         [(uint)*(byte *)(iVar2 + 0x23) * 6 + param_2] * 2);
            iVar2 = iVar5 * 0x90 + DAT_009c21f4;
            *(undefined4 *)(iVar2 + 0x30) = 0;
            if (*(float *)(iVar2 + 0x38) != param_3) {
              *(float *)(iVar2 + 0x38) = param_3;
              *(float *)(iVar2 + 0x48) = _DAT_0090bd14 * param_3;
              FUN_0081d7a4(iVar5);
            }
          }
        }
      }
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0xfffffff6;
}

