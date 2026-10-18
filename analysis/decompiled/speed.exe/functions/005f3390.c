/* speed.exe 005f3390 FUN_005f3390; analysis pseudocode, not buildable source.
 * calls 005eff90 FUN_005eff90
 * calls 005e6620 FUN_005e6620
 */

void __thiscall FUN_005f3390(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = FUN_005e6620(iVar1,*(undefined4 *)(iVar1 + 4),param_2);
  FUN_005eff90(1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}

