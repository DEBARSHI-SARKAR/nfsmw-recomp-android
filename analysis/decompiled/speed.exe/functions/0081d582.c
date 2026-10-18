/* speed.exe 0081d582 FUN_0081d582; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0081d582(undefined1 *param_1)

{
  *(undefined2 *)(param_1 + 0x14) = 0xffff;
  param_1[2] = 0x3c;
  *(undefined2 *)(param_1 + 0xc) = 0x1000;
  *(undefined2 *)(param_1 + 0xe) = 0x1000;
  *(undefined2 *)(param_1 + 0x10) = 0x1000;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[3] = 0x7f;
  *param_1 = 0x7f;
  param_1[4] = 0x7f;
  param_1[1] = 0x40;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  return 0;
}

