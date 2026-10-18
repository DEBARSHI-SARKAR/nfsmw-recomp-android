/* speed.exe 004afa50 FUN_004afa50; analysis pseudocode, not buildable source.
 * calls 004e52a0 FUN_004e52a0
 */

void __thiscall FUN_004afa50(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_004e52a0(param_2);
    *(undefined1 *)(param_1 + 0x124) = 0;
  }
  return;
}

