/* speed.exe 00819be2 FUN_00819be2; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00819be2(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x18 + (uint)*(byte *)(param_1 + 3) * 8);
  *(float *)(param_1 + 4) = fVar1;
  fVar1 = (*(float *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 3) * 8) - *(float *)(param_1 + 0xc)
          ) / fVar1;
  *(float *)(param_1 + 8) = fVar1;
  *(float *)(param_1 + 8) = fVar1 * _DAT_009c1b54;
  return;
}

