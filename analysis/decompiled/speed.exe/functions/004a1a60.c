/* speed.exe 004a1a60 FUN_004a1a60; analysis pseudocode, not buildable source.
 * calls 004909f0 FUN_004909f0
 */

void __thiscall FUN_004a1a60(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004909f0(param_3,*(undefined4 *)(param_1 + 0x10),param_2,*(undefined4 *)(param_1 + 0x14),
               *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
               *(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}

