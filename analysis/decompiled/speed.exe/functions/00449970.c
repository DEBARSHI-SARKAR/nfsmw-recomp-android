/* speed.exe 00449970 FUN_00449970; analysis pseudocode, not buildable source.
 * calls 00444fe0 FUN_00444fe0
 * calls 007477a0 FUN_007477a0
 */

void __thiscall FUN_00449970(int param_1,undefined4 param_2)

{
  FUN_00444fe0(param_1 + 0x60,param_2);
  if (*(int *)(param_1 + 0xf4) == 0) {
    FUN_007477a0();
  }
  return;
}

