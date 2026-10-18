/* speed.exe 004cb220 FUN_004cb220; analysis pseudocode, not buildable source.
 * calls 004c70a0 FUN_004c70a0
 * calls 004c0ec0 FUN_004c0ec0
 */

void __thiscall FUN_004cb220(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_3;
  puVar3 = &param_2;
  uVar2 = 1;
  local_8 = param_2;
  param_2 = &local_8;
  uVar1 = FUN_004c70a0(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 8,
                       &local_8,0,1,puVar3);
  FUN_004c0ec0(uVar1,uVar2,puVar3);
  return;
}

