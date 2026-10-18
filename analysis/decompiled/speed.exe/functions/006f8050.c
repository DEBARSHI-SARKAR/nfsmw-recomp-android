/* speed.exe 006f8050 FUN_006f8050; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls 006f04d0 FUN_006f04d0
 * calls 006ec150 FUN_006ec150
 * calls 006f6a90 FUN_006f6a90
 * calls 006f0510 FUN_006f0510
 */

void __thiscall FUN_006f8050(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  void *local_4;
  
  iVar1 = *(int *)((int)param_1 + 8);
  local_4 = param_1;
  FUN_006f6a90(&local_4,*(undefined4 *)((int)param_1 + 4),iVar1,&param_2,0);
  FID_conflict__memcpy(local_4,(void *)((int)local_4 + 4),(iVar1 - ((int)local_4 + 4) >> 2) << 2);
  iVar2 = param_2;
  iVar1 = *(int *)((int)param_1 + 0x18);
  *(int *)((int)param_1 + 8) = *(int *)((int)param_1 + 8) + -4;
  piVar3 = (int *)FUN_006f04d0(&param_2,*(undefined4 *)((int)param_1 + 0x14),iVar1,param_2,0);
  iVar4 = *piVar3;
  if (iVar4 != iVar1) {
    FUN_006f0510(&param_2,iVar4 + 0x10,iVar1,iVar4,iVar2,0);
    iVar4 = param_2;
  }
  iVar1 = *(int *)((int)param_1 + 0x18);
  if (iVar4 != iVar1) {
    uVar5 = FUN_006ec150(iVar1,iVar1,iVar4,param_2);
    *(undefined4 *)((int)param_1 + 0x18) = uVar5;
  }
  return;
}

