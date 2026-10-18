/* speed.exe 0056d5e0 FUN_0056d5e0; analysis pseudocode, not buildable source.
 * calls 004b9240 FUN_004b9240
 */

void __fastcall FUN_0056d5e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3f4ccccd;
  param_1[3] = 0x3f4ccccd;
  param_1[4] = 0x3f800000;
  param_1[5] = 0x3f800000;
  param_1[6] = 0x3f800000;
  param_1[7] = 0x3f800000;
  param_1[8] = 0x3f800000;
  param_1[9] = 1;
  uVar1 = FUN_004b9240();
  param_1[9] = uVar1;
  param_1[10] = 1;
  param_1[0xb] = 1;
  param_1[0xc] = 0;
  return;
}

