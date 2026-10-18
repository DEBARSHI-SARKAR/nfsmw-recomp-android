/* speed.exe 005bb260 FUN_005bb260; analysis pseudocode, not buildable source.
 * calls 005b6df0 FUN_005b6df0
 * calls 00652b10 thunk_FUN_007c7250
 */

uint * __thiscall FUN_005bb260(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (((0x1ff < uVar1) && (uVar1 < 0x205)) && (uVar1 != 0x203)) {
    thunk_FUN_007c7250(param_1[1]);
  }
  param_1[1] = 0;
  uVar1 = *param_2;
  *param_1 = uVar1;
  if (((0x1ff < uVar1) && (uVar1 < 0x205)) && (uVar1 != 0x203)) {
    FUN_005b6df0(param_2[1]);
    param_1[2] = param_2[2];
    return param_1;
  }
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return param_1;
}

