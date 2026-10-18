/* speed.exe 00729f30 FUN_00729f30; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00729f30(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)(param_1 + 0x58) - _DAT_009a3b40;
  fVar2 = *(float *)(param_1 + 0x5c) - _DAT_009a3b44;
  fVar5 = *(float *)(param_1 + 0x60) - _DAT_009a3b48;
  fVar6 = *(float *)(param_2 + 0x58) - _DAT_009a3b40;
  fVar4 = *(float *)(param_2 + 0x5c) - _DAT_009a3b44;
  fVar3 = *(float *)(param_2 + 0x60) - _DAT_009a3b48;
  if (SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar5 * fVar5) <=
      SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3)) {
    return 1;
  }
  return 0;
}

