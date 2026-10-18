/* speed.exe 004ba510 FUN_004ba510; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_004ba510(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float param_4,float param_5)

{
  bool bVar1;
  
  *param_1 = param_2;
  bVar1 = ABS(param_5 - param_4) < _DAT_00896abc;
  param_1[2] = param_4;
  param_1[1] = param_3;
  param_1[3] = param_5;
  if (bVar1) {
    param_1[3] = param_5 + _DAT_00896abc;
  }
  param_1[5] = param_2;
  param_1[4] = 0;
  return param_1;
}

