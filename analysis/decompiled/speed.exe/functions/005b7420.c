/* speed.exe 005b7420 FUN_005b7420; analysis pseudocode, not buildable source.
 * calls 00404db0 FUN_00404db0
 * calls 00652ad0 _malloc
 * calls 00652b10 thunk_FUN_007c7250
 */

void __thiscall FUN_005b7420(int param_1,byte param_2)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00873f0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_007c7250(*(undefined4 *)(param_1 + 4));
  if (param_2 != 0) {
    pvVar1 = _malloc((uint)param_2 * 0x88);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      FUN_00404db0(pvVar1,0x88,(uint)param_2,&LAB_005b54c0);
    }
    *(void **)(param_1 + 4) = pvVar1;
  }
  *(uint *)(param_1 + 0xd0) = (uint)param_2;
  puVar3 = (undefined4 *)(param_1 + 0x34);
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  ExceptionList = local_c;
  return;
}

