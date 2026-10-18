/* speed.exe 00693430 FUN_00693430; analysis pseudocode, not buildable source.
 * calls 0068b0f0 FUN_0068b0f0
 * calls 0045a430 FUN_0045a430
 * calls 0066bfa0 FUN_0066bfa0
 * calls 0066c2d0 FUN_0066c2d0
 * calls 00673400 FUN_00673400
 * calls 0068a6d0 FUN_0068a6d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00693430(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  undefined1 auStack_34 [40];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087bf20;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_0068b0f0(0,0,0);
  local_4 = 0;
  FUN_00673400(param_1 + 0xe8,param_1 + 0xd4,uVar1,param_1 + 0x70,param_1 + 0x98,10);
  local_4 = 0xffffffff;
  FUN_0045a430();
  uVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 0x44))();
  FUN_0068a6d0(uVar1);
  local_4 = 1;
  fVar2 = (float10)FUN_0066c2d0(auStack_34,param_1 + 0x118,0);
  *(float *)(param_1 + 0x114) = (float)(fVar2 * (float10)_DAT_008a938c);
  fVar2 = (float10)FUN_0066bfa0(auStack_34,0);
  *(float *)(param_1 + 0x11c) = (float)fVar2;
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = pvStack_c;
  return;
}

