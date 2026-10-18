/* speed.exe 0041dbe0 FUN_0041dbe0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041dbe0(float *param_1,int param_2,int param_3,float param_4,float param_5)

{
  int *piVar1;
  int iVar2;
  
  for (; param_2 != param_3; param_2 = param_2 + 4) {
    piVar1 = (int *)FUN_005d59f0(&LAB_004037e0);
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x50))(), iVar2 != 0)) {
      param_4 = param_4 + *(float *)(iVar2 + 0x18);
      param_5 = param_5 + _DAT_0089096c;
    }
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  return;
}

