/* speed.exe 004defa0 FUN_004defa0; analysis pseudocode, not buildable source.
 * calls 004aed10 FUN_004aed10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004defa0(int param_1,float param_2)

{
  float10 fVar1;
  
  param_2 = *(float *)(param_1 + 0x2c) - param_2;
  *(float *)(param_1 + 0x2c) = param_2;
  if ((_DAT_00890968 <= param_2) && (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 500) != 2)
     ) {
    return *(undefined4 *)(param_1 + 0x38);
  }
  fVar1 = (float10)FUN_004aed10(0x40400000);
  *(float *)(param_1 + 0x2c) = (float)fVar1;
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 500);
}

