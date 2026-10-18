/* speed.exe 005aba50 FUN_005aba50; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00599290 FUN_00599290
 * calls 005ab450 FUN_005ab450
 */

void __thiscall FUN_005aba50(int param_1,int param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00873da4;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x10 + param_2 * 4) == 0) {
    ExceptionList = &local_c;
    pvVar1 = _malloc(0x9cb8);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00599290();
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x10 + param_2 * 4) = uVar2;
    FUN_005ab450(param_2,1);
  }
  ExceptionList = local_c;
  return;
}

