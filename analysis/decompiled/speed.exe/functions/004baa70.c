/* speed.exe 004baa70 FUN_004baa70; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 * calls 0081c4b0 FUN_0081c4b0
 */

void __thiscall FUN_004baa70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x124) = 0;
  FUN_00460c70(param_1 + 300,param_2);
  *(undefined4 *)(param_1 + 0x128) = param_3;
  FUN_0081c4b0(*(undefined4 *)(param_1 + 0x18),param_4,*(undefined4 *)(param_1 + 0x16c),param_3);
  return;
}

