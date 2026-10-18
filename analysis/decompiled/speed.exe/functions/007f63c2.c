/* speed.exe 007f63c2 FUN_007f63c2; analysis pseudocode, not buildable source.
 * calls 007f3d26 FUN_007f3d26
 * calls 007f6376 FUN_007f6376
 * calls 007f3e70 FUN_007f3e70
 */

undefined4 * __thiscall FUN_007f63c2(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)((int)param_1 + 0x111) = 0;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  FUN_007f3e70();
  *(undefined1 *)(param_1 + 0x4d) = 0;
  FUN_007f3d26();
  FUN_007f6376();
  return param_1;
}

