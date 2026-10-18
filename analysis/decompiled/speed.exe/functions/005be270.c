/* speed.exe 005be270 FUN_005be270; analysis pseudocode, not buildable source.
 * calls 005ba5d0 FUN_005ba5d0
 * calls 00404db0 FUN_00404db0
 * calls 00652ad0 _malloc
 * calls 005ba7e0 FUN_005ba7e0
 * calls 005af890 FUN_005af890
 */

void __thiscall FUN_005be270(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087428b;
  local_c = ExceptionList;
  if ((*(uint *)(param_1 + 0x5c) & 1) != 0) {
    ExceptionList = &local_c;
    FUN_005ba5d0(param_2);
    FUN_005ba7e0(param_3);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 1;
  if (param_2 != 0) {
    *(int *)(param_1 + 0x60) = param_2;
    puVar1 = _malloc(param_2 * 0xc);
    *(undefined4 **)(param_1 + 0x78) = puVar1;
    for (uVar3 = param_2 * 3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
  }
  if (param_3 != 0) {
    *(int *)(param_1 + 100) = param_3;
    puVar1 = _malloc(param_3 * 0xc);
    *(undefined4 **)(param_1 + 0x7c) = puVar1;
    for (uVar3 = param_3 * 3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
  }
  param_2 = param_2 * param_3;
  if (param_2 != 0) {
    pvVar2 = _malloc(param_2 * 0x30);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      FUN_00404db0(pvVar2,0x30,param_2,&LAB_005ada60);
    }
    *(void **)(param_1 + 0x90) = pvVar2;
    FUN_005af890(pvVar2,param_2);
  }
  ExceptionList = local_c;
  return;
}

