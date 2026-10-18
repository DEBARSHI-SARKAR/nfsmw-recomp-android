/* speed.exe 006dc430 FUN_006dc430; analysis pseudocode, not buildable source.
 * calls 004662e0 FUN_004662e0
 */

int __fastcall FUN_006dc430(int param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087e488;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  local_4 = 0;
  uVar1 = FUN_004662e0(0x50,0x28,"ShadowMapMeshSlotPool",0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  if (DAT_009a3a40 == (undefined1 *)0x0) {
    DAT_009a3a40 = &LAB_006dc3f0;
  }
  if (DAT_009a3a44 == (undefined1 *)0x0) {
    DAT_009a3a44 = &LAB_006dc410;
  }
  ExceptionList = local_c;
  return param_1;
}

