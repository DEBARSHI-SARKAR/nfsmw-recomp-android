/* speed.exe 00449320 FUN_00449320; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00449320(undefined4 *param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
  param_1[0xc] = param_1[0xc] & 0xffff0000;
  param_1[0xd] = param_2;
  *(undefined2 *)((int)param_1 + 0x32) = 0;
  *param_1 = DAT_008a2fb4;
  param_1[1] = DAT_008a2fb8;
  param_1[2] = DAT_008a2fbc;
  param_1[4] = DAT_008a2fb4;
  param_1[5] = DAT_008a2fb8;
  param_1[6] = DAT_008a2fbc;
  param_1[8] = DAT_008a2fb4;
  param_1[9] = DAT_008a2fb8;
  param_1[10] = DAT_008a2fbc;
  param_1[0xe] = 0;
  return;
}

