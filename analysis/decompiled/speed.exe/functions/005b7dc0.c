/* speed.exe 005b7dc0 FUN_005b7dc0; analysis pseudocode, not buildable source.
 * calls 005b7c30 FUN_005b7c30
 */

void __thiscall FUN_005b7dc0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x54) = param_2;
  if (param_2 != 0) {
    FUN_005b7c30();
  }
  return;
}

