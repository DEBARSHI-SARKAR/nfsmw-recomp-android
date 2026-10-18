/* speed.exe 00727f80 FUN_00727f80; analysis pseudocode, not buildable source.
 * calls 0064cb90 FUN_0064cb90
 */

void __thiscall FUN_00727f80(int param_1,int param_2)

{
  *(int *)(param_1 + 0x188) = param_2;
  if ((param_2 != 0) && (param_2 != 6)) {
    FUN_0064cb90(DAT_008f815c);
    return;
  }
  FUN_0064cb90(0);
  return;
}

