/* speed.exe 0043dc10 FUN_0043dc10; analysis pseudocode, not buildable source.
 * calls 00439240 FUN_00439240
 */

void __thiscall FUN_0043dc10(int param_1,undefined4 param_2,char param_3)

{
  FUN_00439240(&param_2);
  if (param_3 != '\0') {
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 1;
  }
  return;
}

