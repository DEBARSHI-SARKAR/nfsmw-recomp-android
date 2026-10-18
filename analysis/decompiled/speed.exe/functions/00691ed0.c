/* speed.exe 00691ed0 FUN_00691ed0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 0066bfa0 FUN_0066bfa0
 * calls 0066c2d0 FUN_0066c2d0
 * calls 00673400 FUN_00673400
 * calls 0068a6d0 FUN_0068a6d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00691ed0(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087bef8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00673400(param_1 + 0x158,param_1 + 0x144,param_1 + 0x130,param_1 + 0x9c,param_1 + 0xc4,10);
  uVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 0x44))();
  FUN_0068a6d0(uVar1);
  uStack_4 = 0;
  fVar2 = (float10)FUN_0066c2d0(auStack_20,param_1 + 400,0);
  *(float *)(param_1 + 0x18c) = (float)(fVar2 * (float10)_DAT_008a938c);
  fVar2 = (float10)FUN_0066bfa0(auStack_20,0);
  *(float *)(param_1 + 0x194) = (float)fVar2;
  uStack_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = pvStack_c;
  return;
}

