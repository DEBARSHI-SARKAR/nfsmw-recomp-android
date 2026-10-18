/* speed.exe 004fc470 FUN_004fc470; analysis pseudocode, not buildable source.
 * calls 00444fe0 FUN_00444fe0
 */

undefined4 * __thiscall FUN_004fc470(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  FUN_00444fe0(param_1 + 4,param_2 + 4);
  FUN_00444fe0(param_1 + 0x14,param_2 + 0x14);
  FUN_00444fe0(param_1 + 0x24,param_2 + 0x24);
  uVar1 = param_2[0x36];
  uVar2 = param_2[0x37];
  uVar3 = param_2[0x34];
  param_1[0x35] = param_2[0x35];
  param_1[0x34] = uVar3;
  param_1[0x36] = uVar1;
  param_1[0x37] = uVar2;
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = param_2[0x39];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x3b] = param_2[0x3b];
  FUN_00444fe0(param_1 + 0x3c,param_2 + 0x3c);
  return param_1;
}

