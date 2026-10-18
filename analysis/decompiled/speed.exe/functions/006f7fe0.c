/* speed.exe 006f7fe0 FUN_006f7fe0; analysis pseudocode, not buildable source.
 * calls 006f04d0 FUN_006f04d0
 * calls 006ec150 FUN_006ec150
 * calls 006f0510 FUN_006f0510
 */

void __thiscall FUN_006f7fe0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar2 = param_3;
  iVar1 = *(int *)(param_1 + 0x18);
  piVar3 = (int *)FUN_006f04d0(&param_3,*(undefined4 *)(param_1 + 0x14),iVar1,param_3,param_2);
  iVar4 = *piVar3;
  if (iVar4 != iVar1) {
    FUN_006f0510(&param_3,iVar4 + 0x10,iVar1,iVar4,iVar2,param_2);
    iVar4 = param_3;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar4 != iVar1) {
    uVar5 = FUN_006ec150(iVar1,iVar1,iVar4,param_3);
    *(undefined4 *)(param_1 + 0x18) = uVar5;
  }
  return;
}

