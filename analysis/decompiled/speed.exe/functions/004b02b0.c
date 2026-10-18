/* speed.exe 004b02b0 FUN_004b02b0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004b02b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5)

{
  float fVar1;
  
  fVar1 = (float)param_4 * _DAT_00890d60;
  param_1[1] = fVar1;
  if ((!NAN(fVar1) && !NAN(_DAT_00890968)) && fVar1 < _DAT_00890968 != (fVar1 == _DAT_00890968)) {
    param_1[1] = 0x3c23d70a;
  }
  param_1[3] = param_3;
  param_1[2] = param_2;
  param_1[4] = param_5;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[5] = param_2;
  *param_1 = 0;
  return;
}

