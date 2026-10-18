/* speed.exe 00518410 FUN_00518410; analysis pseudocode, not buildable source.
 * calls 007f3c69 FUN_007f3c69
 */

void __thiscall FUN_00518410(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    FUN_007f3c69(param_2);
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}

