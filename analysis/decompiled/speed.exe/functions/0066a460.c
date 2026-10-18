/* speed.exe 0066a460 FUN_0066a460; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0066a460(int param_1,float param_2)

{
  if ((_DAT_00890968 < *(float *)(param_1 + 0xb0)) && (param_2 < *(float *)(param_1 + 0xb0))) {
    *(float *)(param_1 + 0xb0) = *(float *)(param_1 + 0xb0) - param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return;
}

