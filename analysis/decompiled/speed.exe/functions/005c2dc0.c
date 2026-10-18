/* speed.exe 005c2dc0 FUN_005c2dc0; analysis pseudocode, not buildable source.
 * calls 005b2810 FUN_005b2810
 * calls 005b3cd0 FUN_005b3cd0
 * calls 005c1dc0 FUN_005c1dc0
 * calls 005bf230 FUN_005bf230
 * calls 005b5350 FUN_005b5350
 */

undefined4 * __thiscall FUN_005c2dc0(undefined4 *param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008745b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0xabadcafe;
  param_1[2] = 0xabadcafe;
  iVar5 = 0;
  *param_1 = &PTR_FUN_008a2cec;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_4 = 1;
  FUN_005b2810(*(undefined4 *)(param_2 + 0x2c));
  param_1[0xc] = *(undefined4 *)(param_2 + 0x30);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  FUN_005bf230(*(undefined4 *)(param_2 + 0x1c));
  if (param_3 == '\0') {
    uVar4 = 0;
    if (param_1[7] != 0) {
      do {
        FUN_005c1dc0(*(int *)(param_2 + 0x20) + iVar5);
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0x38;
      } while (uVar4 < (uint)param_1[7]);
    }
  }
  else {
    _param_3 = 0;
    if (param_1[7] != 0) {
      do {
        *(undefined1 *)(iVar5 + param_1[8]) = *(undefined1 *)(iVar5 + *(int *)(param_2 + 0x20));
        *(undefined1 *)(iVar5 + 1 + param_1[8]) =
             *(undefined1 *)(*(int *)(param_2 + 0x20) + 1 + iVar5);
        *(undefined1 *)(iVar5 + 2 + param_1[8]) =
             *(undefined1 *)(*(int *)(param_2 + 0x20) + 2 + iVar5);
        *(undefined1 *)(iVar5 + 3 + param_1[8]) =
             *(undefined1 *)(*(int *)(param_2 + 0x20) + 3 + iVar5);
        uVar4 = *(uint *)(iVar5 + 4 + param_1[8]);
        *(uint *)(iVar5 + 4 + param_1[8]) =
             uVar4 ^ ((*(int *)(*(int *)(param_2 + 0x20) + 4 + iVar5) << 8) >> 8 ^ uVar4) & 0xffffff
        ;
        *(undefined1 *)(iVar5 + 7 + param_1[8]) =
             *(undefined1 *)(*(int *)(param_2 + 0x20) + 7 + iVar5);
        iVar2 = *(int *)(param_2 + 0x20);
        iVar3 = param_1[8];
        *(undefined4 *)(iVar5 + 0xc + iVar3) = *(undefined4 *)(iVar2 + 0xc + iVar5);
        iVar1 = iVar2 + 8 + iVar5;
        iVar3 = iVar5 + 8 + iVar3;
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 0x10 + iVar5);
        *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
        *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
        *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
        *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar1 + 0x18);
        *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
        iVar1 = *(int *)(param_2 + 0x20) + 0x28 + iVar5;
        iVar3 = iVar5 + 0x28 + param_1[8];
        if (iVar1 == 0) {
          *(undefined4 *)(iVar3 + 8) = 0;
          *(undefined4 *)(iVar3 + 0xc) = 0;
          *(undefined1 *)(iVar3 + 4) = 0;
        }
        else {
          if (*(char *)(iVar3 + 4) == '\0') {
            FUN_005b3cd0();
          }
          *(int *)(iVar3 + 8) = iVar1;
          *(undefined1 *)(iVar3 + 4) = 1;
        }
        _param_3 = _param_3 + 1;
        iVar5 = iVar5 + 0x38;
      } while (_param_3 < (uint)param_1[7]);
    }
  }
  FUN_005b5350(*(undefined4 *)(param_2 + 0x24));
  puVar6 = *(undefined4 **)(param_2 + 0x28);
  puVar7 = (undefined4 *)param_1[10];
  for (uVar4 = param_1[9] * 3 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  ExceptionList = local_c;
  return param_1;
}

