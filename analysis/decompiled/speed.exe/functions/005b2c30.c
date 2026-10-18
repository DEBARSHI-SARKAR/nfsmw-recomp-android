/* speed.exe 005b2c30 FUN_005b2c30; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005b2c30(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 8); (iVar1 != 0 && (*(int *)(iVar1 + 0x24) != param_2));
      iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

