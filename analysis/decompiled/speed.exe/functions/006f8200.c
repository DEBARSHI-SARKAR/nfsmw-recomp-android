/* speed.exe 006f8200 FUN_006f8200; analysis pseudocode, not buildable source.
 * calls 006f7fe0 FUN_006f7fe0
 * calls 005d59f0 FUN_005d59f0
 * calls 006e9aa0 FUN_006e9aa0
 */

void __thiscall FUN_006f8200(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005d59f0(&LAB_004040e0);
  if (iVar1 != 0) {
    if (*(int **)(param_1 + 0x44) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x44) + 0xc))(iVar1);
    }
    if (param_1 == 0x38) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_1 + 0x1c;
    }
    iVar2 = FUN_005d59f0(&LAB_00402830);
    FUN_006f7fe0(iVar1,*(undefined4 *)(iVar2 + 8));
    FUN_006e9aa0(0);
  }
  if ((*(int *)(param_1 + 0x44) != 0) &&
     (*(int *)(*(int *)(param_1 + 0x44) + 4) == *(int *)(param_2 + 4))) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (*(int *)(*(int *)(param_1 + 0xc) + 4) == *(int *)(param_2 + 4))) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

