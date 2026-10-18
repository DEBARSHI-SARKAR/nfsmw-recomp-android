/* speed.exe 00669820 FUN_00669820; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00669820(int *param_1)

{
  if (param_1[0x15] != 0) {
    (**(code **)(*param_1 + 0x10))(param_1[0x15]);
    param_1[0x16] = 0;
    param_1[0x15] = 0;
  }
  return;
}

