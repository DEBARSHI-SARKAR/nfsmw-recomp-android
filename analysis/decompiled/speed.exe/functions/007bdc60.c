/* speed.exe 007bdc60 FUN_007bdc60; analysis pseudocode, not buildable source.
 * calls 007a9e60 FUN_007a9e60
 * calls 007b8040 FUN_007b8040
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00652ad0 _malloc
 */

void __thiscall FUN_007bdc60(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00883754;
  local_c = ExceptionList;
  if (param_1[0x52] == 0x301) {
    iVar6 = 2;
    ExceptionList = &local_c;
  }
  else {
    if (param_1[0x52] == 0x303) {
      return;
    }
    iVar6 = param_1[0xb8] + -1;
    ExceptionList = &local_c;
    if (iVar6 != 0) {
      puVar1 = (undefined4 *)param_1[param_1[0x6f] + 0xb5];
      ExceptionList = &local_c;
      puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x14))();
      if (puVar2 != puVar1) {
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        pvVar3 = _malloc(0x2c);
        uStack_4 = 0;
        if (pvVar3 == (void *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar4 = (**(code **)(*param_1 + 0x14))();
          iVar5 = FUN_007a9e60(uVar4);
        }
        uStack_4 = 0xffffffff;
        param_1[param_1[0x6f] + 0xb5] = iVar5;
      }
    }
  }
  iVar5 = param_1[0x6f];
  if (param_2 == -1) {
    iVar5 = iVar5 + -1;
    if (iVar5 < 0) {
      iVar5 = iVar6;
    }
  }
  else if ((param_2 == 1) && (iVar5 = iVar5 + 1, iVar6 < iVar5)) {
    iVar5 = 0;
  }
  if (iVar5 != param_1[0x6f]) {
    if (param_1[0x8e] == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = param_1[0x8e] + 4;
    }
    iVar6 = FUN_0045d3a0(iVar6);
    param_1[param_1[0x6f] + 0x70] = iVar6 + -1;
    param_1[0x6f] = iVar5;
    if ((param_1[0x52] == 0x301) || (param_1[0x52] == 0x303)) {
      iVar6 = (**(code **)(*param_1 + 0x14))();
      iVar5 = *(int *)(iVar6 + 0x10);
    }
    else {
      iVar5 = iVar5 + 0x4f;
    }
    FUN_007b8040(iVar5);
    (**(code **)(*param_1 + 0xc))();
  }
  ExceptionList = local_c;
  return;
}

