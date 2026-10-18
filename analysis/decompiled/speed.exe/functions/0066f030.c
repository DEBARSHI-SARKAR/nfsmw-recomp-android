/* speed.exe 0066f030 FUN_0066f030; analysis pseudocode, not buildable source.
 * calls 00454c30 FUN_00454c30
 * calls 006269b0 FUN_006269b0
 */

void __thiscall FUN_0066f030(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar1 = FUN_00454c30(param_2);
  }
  else if (param_2 != 0) goto LAB_0066f04f;
  if (iVar1 != 0) {
    return;
  }
LAB_0066f04f:
  FUN_006269b0(0xc);
  return;
}

