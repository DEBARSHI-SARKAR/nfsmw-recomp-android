/* speed.exe 00464d80 FUN_00464d80; analysis pseudocode, not buildable source.
 * calls 00464510 FUN_00464510
 * calls 00463f00 FUN_00463f00
 * calls 007ec1a7 FUN_007ec1a7
 */

void __thiscall FUN_00464d80(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 1;
  *puVar1 = puVar1;
  param_1[2] = puVar1;
  puVar1 = param_1 + 3;
  *puVar1 = puVar1;
  param_1[4] = puVar1;
  puVar1 = param_1 + 5;
  *puVar1 = puVar1;
  param_1[6] = puVar1;
  param_1[7] = param_2;
  param_1[8] = param_3;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_007ec1a7();
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)((int)param_1 + 0x41) = 1;
  *param_1 = param_4;
  if (DAT_0090e674 != 0) {
    FUN_00463f00();
  }
  param_1[0xb] = param_1[0xb] + param_3;
  FUN_00464510(param_2,param_3,*param_1);
  return;
}

