/* speed.exe 00517520 FUN_00517520; analysis pseudocode, not buildable source.
 * calls 007e9410 FUN_007e9410
 */

undefined4 * __thiscall FUN_00517520(undefined4 *param_1,undefined4 param_2)

{
  param_1[2] = 0;
  param_1[1] = 0xa0000;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(bool *)((int)param_1 + 0x15) = DAT_008f86f8 != 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x17) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 3;
  param_1[0x48] = 3;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  DAT_00909e5c = param_2;
  DAT_00909e54 = &LAB_00517470;
  DAT_00909e58 = FUN_005174e0;
  FUN_007e9410(&DAT_0091cba4);
  return param_1;
}

