/* speed.exe 00691a10 FUN_00691a10; analysis pseudocode, not buildable source.
 * calls 00401ae0 FUN_00401ae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00691a10(int *param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  
  if (_DAT_00890968 < (float)param_1[1]) {
    param_2 = (float)param_1[1] - param_2;
    param_1[1] = (int)param_2;
    if ((param_2 < _DAT_00890968 != (param_2 == _DAT_00890968)) && (*param_1 == 1)) {
      *param_1 = 0;
    }
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      fVar2 = (float10)FUN_00401ae0(param_1[1],0,param_1[2]);
      return (float10)_DAT_0089096c - fVar2 * (float10)_DAT_00891050;
    }
    if (iVar1 == 2) {
      return (float10)_DAT_008910f0;
    }
  }
  return (float10)_DAT_0089096c;
}

