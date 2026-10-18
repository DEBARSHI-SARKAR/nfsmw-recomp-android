/* speed.exe 005f50c0 FUN_005f50c0; analysis pseudocode, not buildable source.
 * calls 005eff90 FUN_005eff90
 * calls 005e5c10 FUN_005e5c10
 * calls 005e6620 FUN_005e6620
 */

void __thiscall FUN_005f50c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_005e5c10();
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar1 = *(int *)(param_1 + 0x2a8);
    iVar2 = FUN_005e6620(iVar1,*(undefined4 *)(iVar1 + 4),param_2);
    FUN_005eff90(1);
    *(int *)(iVar1 + 4) = iVar2;
    param_2 = param_2 + 4;
    **(int **)(iVar2 + 4) = iVar2;
  }
  return;
}

