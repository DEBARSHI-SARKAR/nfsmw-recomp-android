/* speed.exe 0066a4b0 FUN_0066a4b0; analysis pseudocode, not buildable source.
 * calls 0045a760 FUN_0045a760
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0066a4b0(int param_1,int param_2)

{
  if (*(float *)(param_1 + 0xb0) < _DAT_00890968 != (*(float *)(param_1 + 0xb0) == _DAT_00890968)) {
    FUN_0045a760(*(undefined4 *)(param_2 + 4));
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(*(int *)(param_2 + 8) + 0xf4);
    return;
  }
  if (*(int *)(param_2 + 4) == *(int *)(param_1 + 0xa0)) {
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(*(int *)(param_2 + 8) + 0xf4);
  }
  return;
}

