/* speed.exe 007a9090 FUN_007a9090; analysis pseudocode, not buildable source.
 * calls 00461360 FUN_00461360
 * calls 00652ad0 _malloc
 * calls 00460c50 FUN_00460c50
 * calls 007c90a0 `eh_vector_constructor_iterator'
 * calls 00506af0 FUN_00506af0
 * calls 00460e30 FUN_00460e30
 */

void __thiscall FUN_007a9090(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  byte bVar6;
  undefined *puVar7;
  uint *puVar8;
  int iVar9;
  int aiStack_8c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00882a07;
  local_c = ExceptionList;
  puVar7 = (undefined *)0x0;
  ExceptionList = &local_c;
  param_1[3] = 0;
  uVar2 = FUN_00460c50(param_2);
  if (DAT_00916a70 != 0) {
    puVar7 = (undefined *)(DAT_00916a70 + -4);
  }
  while (puVar7 != &DAT_00916a6c) {
    iVar3 = FUN_00460e30(puVar7 + 0xa0,param_2,uVar2);
    if (iVar3 == 0) {
      uVar1 = param_1[3];
      aiStack_8c[uVar1] = (int)puVar7;
      param_1[3] = uVar1 + 1;
    }
    if (*(int *)(puVar7 + 4) == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = (undefined *)(*(int *)(puVar7 + 4) + -4);
    }
  }
  uVar1 = param_1[3];
  iVar3 = 0;
  if (uVar1 != 0) {
    puVar4 = _malloc(uVar1 * 0x18 + 4);
    local_4 = 0;
    if (puVar4 == (uint *)0x0) {
      puVar8 = (uint *)0x0;
    }
    else {
      puVar8 = puVar4 + 1;
      *puVar4 = uVar1;
      _eh_vector_constructor_iterator_(puVar8,0x18,uVar1,FUN_00410d20,thunk_FUN_00501480);
    }
    param_1[4] = (uint)puVar8;
    iVar9 = 0;
    local_4 = 0xffffffff;
    if (0 < (int)param_1[3]) {
      do {
        FUN_00506af0(*(undefined4 *)(aiStack_8c[iVar9] + 0x10));
        iVar5 = FUN_00461360(*(int *)(iVar3 + 0xc + param_1[4]) + 0xa0,"CAST_SHADOW_MAP");
        bVar6 = (byte)iVar9;
        if (iVar5 != 0) {
          *param_1 = *param_1 | 1 << (bVar6 & 0x1f);
        }
        iVar5 = FUN_00461360(*(int *)(iVar3 + 0xc + param_1[4]) + 0xa0,"CURRGEN");
        if (iVar5 != 0) {
          param_1[1] = param_1[1] | 1 << (bVar6 & 0x1f);
        }
        iVar5 = FUN_00461360(*(int *)(iVar3 + 0xc + param_1[4]) + 0xa0,"NEXTGEN");
        if (iVar5 != 0) {
          param_1[2] = param_1[2] | 1 << (bVar6 & 0x1f);
        }
        iVar9 = iVar9 + 1;
        iVar3 = iVar3 + 0x18;
      } while (iVar9 < (int)param_1[3]);
    }
  }
  ExceptionList = local_c;
  return;
}

