/* speed.exe 0068e2e0 FUN_0068e2e0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0068e2e0(int param_1)

{
  if (*(int *)(param_1 + 0x138) == 0) {
    if (_DAT_00890968 <= *(float *)(param_1 + 0xd0)) goto LAB_0068e31f;
  }
  else if ((*(int *)(param_1 + 0x138) != 2) || (*(float *)(param_1 + 0xd0) <= _DAT_00890968))
  goto LAB_0068e31f;
  *(undefined4 *)(param_1 + 0xd0) = 0;
LAB_0068e31f:
  if (_DAT_008aabe0 < *(float *)(param_1 + 0xd0)) {
    *(undefined4 *)(param_1 + 0x138) = 0;
    return;
  }
  if (_DAT_008ab23c <= *(float *)(param_1 + 0xd0)) {
    *(undefined4 *)(param_1 + 0x138) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x138) = 2;
  return;
}

