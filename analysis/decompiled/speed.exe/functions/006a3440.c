/* speed.exe 006a3440 FUN_006a3440; analysis pseudocode, not buildable source.
 * calls 006a3180 FUN_006a3180
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006a3440(int param_1,float param_2)

{
  if (0 < *(int *)(param_1 + 100)) {
    FUN_006a3180();
  }
  if (_DAT_00890968 < *(float *)(param_1 + 0x68)) {
    param_2 = *(float *)(param_1 + 0x68) - param_2;
    *(float *)(param_1 + 0x68) = param_2;
    if (param_2 < _DAT_00890968 != (param_2 == _DAT_00890968)) {
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
  }
  return;
}

