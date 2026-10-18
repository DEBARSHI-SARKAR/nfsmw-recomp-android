/* speed.exe 0054ad10 FUN_0054ad10; analysis pseudocode, not buildable source.
 * calls 005a8c50 FUN_005a8c50
 * calls 005926b0 FUN_005926b0
 * calls 005a8cb0 FUN_005a8cb0
 * calls 00537970 FUN_00537970
 * calls 00586760 FUN_00586760
 */

void __thiscall FUN_0054ad10(int param_1,int param_2)

{
  if (param_2 < 0) {
    FUN_005a8cb0();
  }
  else if (0 < param_2) {
    FUN_005a8c50();
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_00586760(0x249db7b7);
  }
  FUN_005926b0(1);
  if (*(char *)(param_1 + 0x117c) == '\0') {
    FUN_00537970();
  }
  return;
}

