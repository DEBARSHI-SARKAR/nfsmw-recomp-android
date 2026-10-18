/* speed.exe 006a0470 FUN_006a0470; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006a0470(int *param_1,float param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2c))();
  if (cVar1 != '\0') {
    param_2 = param_2 + (float)param_1[0x29];
    if (_DAT_0089096c <= param_2) {
      param_1[0x29] = (int)_DAT_0089096c;
      return;
    }
    if (param_2 < _DAT_00890968) {
      param_2 = _DAT_00890968;
    }
    param_1[0x29] = (int)param_2;
  }
  return;
}

