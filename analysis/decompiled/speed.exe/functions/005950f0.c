/* speed.exe 005950f0 FUN_005950f0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

undefined4 * __thiscall
FUN_005950f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xc38a0000;
  param_1[8] = 0xc1200000;
  param_1[9] = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xb] = param_2;
  param_1[0xc] = param_3;
  *param_1 = &PTR_FUN_008a19e0;
  uVar1 = FUN_007c4b80();
  param_1[0x13] = uVar1;
  param_1[0x14] = param_5;
  return param_1;
}

