/* speed.exe 005ebed0 FUN_005ebed0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 005e5a00 FUN_005e5a00
 */

undefined2 * __thiscall FUN_005ebed0(undefined2 *param_1,byte param_2)

{
  FUN_005e5a00();
  *(undefined4 *)(param_1 + 8) = DAT_008a2fb4;
  *(undefined4 *)(param_1 + 10) = DAT_008a2fb8;
  *(undefined4 *)(param_1 + 0xc) = DAT_008a2fbc;
  param_1[2] = 0xffff;
  param_1[3] = 0xffff;
  param_1[0xe] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((param_2 & 1) != 0) {
    FUN_005d0370(param_1,0x20,0);
  }
  return param_1;
}

