/* speed.exe 00738d50 FUN_00738d50; analysis pseudocode, not buildable source.
 * calls 00452940 FUN_00452940
 * calls 0045a760 FUN_0045a760
 * calls 006269b0 FUN_006269b0
 */

void __thiscall FUN_00738d50(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = param_2;
  uVar3 = FUN_00452940();
  uVar4 = FUN_00452940();
  uVar5 = FUN_00452940();
  cVar1 = *(char *)(param_1 + 0x85);
  if ((cVar1 == '\0') || (uVar3 < 3)) {
    if ((*(char *)(param_1 + 0x84) == '\0') || (param_2 = 1, uVar3 < 2)) {
      param_2 = 0;
    }
  }
  else {
    param_2 = 2;
  }
  if ((cVar1 == '\0') || (uVar4 < 3)) {
    if ((*(char *)(param_1 + 0x84) == '\0') || (local_8 = 1, uVar4 < 2)) {
      local_8 = 0;
    }
  }
  else {
    local_8 = 2;
  }
  if ((cVar1 == '\0') || (uVar5 < 3)) {
    if ((*(char *)(param_1 + 0x84) == '\0') || (local_4 = 1, uVar5 < 2)) {
      local_4 = 0;
    }
  }
  else {
    local_4 = 2;
  }
  iVar6 = *(int *)(iVar2 + 8);
  uVar3 = FUN_00452940();
  if (param_2 < uVar3) {
    iVar6 = iVar6 + 0x90 + param_2 * 0x14;
  }
  else {
    iVar6 = FUN_006269b0(0x14);
  }
  iVar7 = *(int *)(iVar2 + 8);
  uVar3 = FUN_00452940();
  if (local_8 < uVar3) {
    param_2 = iVar7 + 0x4c + local_8 * 0x14;
  }
  else {
    param_2 = FUN_006269b0(0x14);
  }
  iVar7 = *(int *)(iVar2 + 8);
  uVar3 = FUN_00452940();
  if (local_4 < uVar3) {
    iVar7 = iVar7 + 8 + local_4 * 0x14;
  }
  else {
    iVar7 = FUN_006269b0(0x14);
  }
  FUN_0045a760(*(undefined4 *)(iVar2 + 4));
  iVar2 = *(int *)(iVar6 + 4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(iVar6 + 0xc);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(iVar6 + 0x10);
  if (*(int *)(param_1 + 0xa0) != iVar2) {
    *(int *)(param_1 + 0xa0) = iVar2;
    *(undefined1 *)(param_1 + 0x9c) = 1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  iVar2 = *(int *)(iVar7 + 4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(iVar7 + 0xc);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(iVar7 + 0x10);
  if (*(int *)(param_1 + 0xd0) != iVar2) {
    *(int *)(param_1 + 0xd0) = iVar2;
    *(undefined1 *)(param_1 + 0xcc) = 1;
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  iVar2 = *(int *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0x10);
  if (*(int *)(param_1 + 0xb8) != iVar2) {
    *(int *)(param_1 + 0xb8) = iVar2;
    *(undefined1 *)(param_1 + 0xb4) = 1;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}

