/* speed.exe 00699a90 FUN_00699a90; analysis pseudocode, not buildable source.
 * calls 00789cc0 FUN_00789cc0
 * calls 00789ec0 FUN_00789ec0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00699a90(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_4;
  
  local_4 = *(float *)(param_1 + 0x118);
  if (local_4 <= _DAT_008aac70) {
    local_4 = 3.0;
  }
  iVar2 = **(int **)(param_1 + 0x78) + 0x10;
  FUN_00789ec0(iVar2,local_4,1);
  uVar4 = *(undefined4 *)(param_1 + 0xec);
  uVar5 = 1;
  uVar3 = 1;
  iVar1 = param_1 + 0xd0;
  (**(code **)(**(int **)(param_1 + 0x34) + 0x4c))(iVar2,iVar1,1,uVar4,1);
  FUN_00789cc0(iVar2,iVar1,uVar3,uVar4,uVar5);
  return;
}

