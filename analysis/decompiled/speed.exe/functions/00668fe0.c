/* speed.exe 00668fe0 FUN_00668fe0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00668fe0(float *param_1,float param_2)

{
  param_2 = *param_1 - param_2;
  *param_1 = param_2;
  if (param_2 < _DAT_00890968 != (param_2 == _DAT_00890968)) {
    param_1[1] = 0.0;
    *param_1 = 0.0;
  }
  return;
}

