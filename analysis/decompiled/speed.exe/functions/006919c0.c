/* speed.exe 006919c0 FUN_006919c0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006919c0(int *param_1,float param_2)

{
  if (*param_1 == 2) {
    if (_DAT_00890968 < param_2) {
      *param_1 = 1;
      param_1[1] = (int)param_2;
      param_1[2] = (int)param_2;
      return;
    }
    *param_1 = 0;
    param_1[1] = (int)param_2;
    param_1[2] = (int)param_2;
  }
  return;
}

