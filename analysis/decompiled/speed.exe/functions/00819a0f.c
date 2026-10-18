/* speed.exe 00819a0f FUN_00819a0f; analysis pseudocode, not buildable source.
 * calls 0081eb58 FUN_0081eb58
 */

int FUN_00819a0f(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1[3] == 0) {
    return param_1[2];
  }
  uVar1 = FUN_0081eb58();
  iVar2 = *param_1 + uVar1 % (uint)param_1[1];
  param_1[2] = iVar2;
  return iVar2;
}

