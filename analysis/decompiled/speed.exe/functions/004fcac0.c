/* speed.exe 004fcac0 FUN_004fcac0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004fcac0(int param_1,float *param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(param_1 + 0x40);
  fVar2 = *param_2 - *(float *)(iVar1 + 0x40);
  fVar4 = param_2[1] - *(float *)(iVar1 + 0x44);
  fVar3 = param_2[2] - *(float *)(iVar1 + 0x48);
  if (fVar2 * *(float *)(iVar1 + 0x50) +
      fVar4 * *(float *)(iVar1 + 0x54) + fVar3 * *(float *)(iVar1 + 0x58) < -param_3) {
    return 0;
  }
  if (param_3 * _DAT_008933d4 < SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) - param_3) {
    uVar5 = FUN_007c4b80();
    return uVar5;
  }
  uVar5 = FUN_007c4b80();
  return uVar5;
}

