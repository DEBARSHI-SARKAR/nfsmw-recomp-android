/* speed.exe 0081d960 FUN_0081d960; analysis pseudocode, not buildable source.
 * calls 0081f294 FUN_0081f294
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0081d960(int param_1,float param_2)

{
  int iVar1;
  float *pfVar2;
  
  if (_DAT_0089096c < param_2) {
    param_2 = 1.0;
  }
  if (param_2 < _DAT_00890968) {
    param_2 = 0.0;
  }
  pfVar2 = (float *)(param_1 + 8);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar2 = param_2;
    pfVar2 = pfVar2 + 1;
  }
  FUN_0081f294(param_1,0xffffffff);
  return 0;
}

