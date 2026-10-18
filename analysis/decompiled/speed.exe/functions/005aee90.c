/* speed.exe 005aee90 FUN_005aee90; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005aee90(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    if (param_2 == 0) {
      iVar1 = *(int *)(param_1 + 8);
      *(int *)(param_3 + 4) = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 8) = param_3;
      }
      *(undefined4 *)(param_3 + 8) = 0;
      *(int *)(param_1 + 8) = param_3;
    }
    else {
      iVar1 = *(int *)(param_2 + 4);
      *(int *)(param_3 + 4) = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 8) = param_3;
      }
      *(int *)(param_3 + 8) = param_2;
      *(int *)(param_2 + 4) = param_3;
    }
    if (*(int *)(param_1 + 0xc) == param_2) {
      *(int *)(param_1 + 0xc) = param_3;
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  return;
}

