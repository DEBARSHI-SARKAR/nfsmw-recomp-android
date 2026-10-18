/* speed.exe 004aaee0 FUN_004aaee0; analysis pseudocode, not buildable source.
 * calls 00452950 FUN_00452950
 */

undefined4 * __thiscall FUN_004aaee0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xc] = param_2[0xc];
  FUN_00452950(param_2 + 0xd);
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  return param_1;
}

