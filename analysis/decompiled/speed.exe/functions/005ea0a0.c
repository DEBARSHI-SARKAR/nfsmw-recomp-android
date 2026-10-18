/* speed.exe 005ea0a0 FUN_005ea0a0; analysis pseudocode, not buildable source.
 * calls 005e5a00 FUN_005e5a00
 */

void __fastcall FUN_005ea0a0(undefined2 *param_1)

{
  FUN_005e5a00();
  *(undefined4 *)(param_1 + 8) = DAT_008a2fb4;
  *(undefined4 *)(param_1 + 10) = DAT_008a2fb8;
  *(undefined4 *)(param_1 + 0xc) = DAT_008a2fbc;
  param_1[0xe] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0xffff;
  param_1[3] = 0xffff;
  return;
}

