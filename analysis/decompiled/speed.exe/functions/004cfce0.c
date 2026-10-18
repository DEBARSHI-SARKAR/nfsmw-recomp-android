/* speed.exe 004cfce0 FUN_004cfce0; analysis pseudocode, not buildable source.
 * calls 004cf520 FUN_004cf520
 */

void __thiscall FUN_004cfce0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  FUN_004cf520(param_1 + 4);
  return;
}

