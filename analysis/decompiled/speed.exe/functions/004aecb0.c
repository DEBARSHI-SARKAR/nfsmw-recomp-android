/* speed.exe 004aecb0 FUN_004aecb0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004aecb0(int param_1,int param_2,undefined4 param_3)

{
  *(int *)(param_1 + 0x24) = param_2;
  _DAT_008ee564 = *(undefined4 *)(param_2 + 0x1c);
  _DAT_008ee568 = FUN_007c4b80();
  _DAT_008ee5b8 = param_3;
  return;
}

