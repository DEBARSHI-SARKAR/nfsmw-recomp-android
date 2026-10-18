/* speed.exe 005890f0 FUN_005890f0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005890f0(undefined4 *param_1,undefined1 param_2)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xc38a0000;
  param_1[8] = 0xc1200000;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = param_2;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  *param_1 = &PTR_FUN_008a139c;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}

