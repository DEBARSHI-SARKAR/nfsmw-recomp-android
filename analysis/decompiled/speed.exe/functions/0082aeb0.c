/* speed.exe 0082aeb0 FUN_0082aeb0; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_0082aeb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (-1 < *(int *)(param_1 + 4)) {
    return 0xffffff44;
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x104) = param_3;
  return 0;
}

