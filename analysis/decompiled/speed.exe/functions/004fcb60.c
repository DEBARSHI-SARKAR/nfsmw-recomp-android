/* speed.exe 004fcb60 FUN_004fcb60; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004fcb60(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (((*param_2 + *param_3) * _DAT_008933d4 - *(float *)(iVar1 + 0x40)) * *(float *)(iVar1 + 0x50)
      + ((param_2[1] + param_3[1]) * _DAT_008933d4 - *(float *)(iVar1 + 0x44)) *
        *(float *)(iVar1 + 0x54) +
        ((param_2[2] + param_3[2]) * _DAT_008933d4 - *(float *)(iVar1 + 0x48)) *
        *(float *)(iVar1 + 0x58) <
      -(SQRT((*param_2 - *param_3) * (*param_2 - *param_3) +
             (param_2[1] - param_3[1]) * (param_2[1] - param_3[1]) +
             (param_2[2] - param_3[2]) * (param_2[2] - param_3[2])) * _DAT_008933d4)) {
    return 0;
  }
  uVar2 = FUN_007c4b80();
  return uVar2;
}

