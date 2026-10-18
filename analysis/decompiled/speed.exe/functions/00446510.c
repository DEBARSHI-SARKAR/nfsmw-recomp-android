/* speed.exe 00446510 FUN_00446510; analysis pseudocode, not buildable source.
 * calls 007477f0 FUN_007477f0
 */

int __fastcall FUN_00446510(int param_1)

{
  if (*(int *)(param_1 + 0xf4) != 0) {
    FUN_007477f0();
  }
  return param_1 + 0x20;
}

