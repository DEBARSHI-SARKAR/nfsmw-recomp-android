/* speed.exe 005dc6d0 FUN_005dc6d0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005dc6d0(int param_1,float param_2)

{
  param_2 = param_2 + *(float *)(param_1 + 0x120);
  *(float *)(param_1 + 0x120) = param_2;
  if (param_2 < _DAT_00890968) {
    *(undefined4 *)(param_1 + 0x120) = 0;
    return;
  }
  *(float *)(param_1 + 0x120) = param_2;
  return;
}

