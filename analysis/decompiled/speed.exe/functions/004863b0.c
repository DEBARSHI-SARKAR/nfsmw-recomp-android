/* speed.exe 004863b0 FUN_004863b0; analysis pseudocode, not buildable source.
 * calls 00652ac0 _malloc
 * calls 00486190 FUN_00486190
 */

void __thiscall FUN_004863b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086ad6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x28);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00486190(param_2,*param_1,param_3,param_1 + 10,param_1[6]);
  }
  param_1[param_1[0xc] + 0xd] = uVar2;
  param_1[0xc] = param_1[0xc] + 1;
  ExceptionList = local_c;
  return;
}

