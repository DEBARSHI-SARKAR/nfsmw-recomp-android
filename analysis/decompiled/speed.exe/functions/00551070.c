/* speed.exe 00551070 FUN_00551070; analysis pseudocode, not buildable source.
 * calls 00516af0 FUN_00516af0
 * calls 00525220 FUN_00525220
 * calls 00652ad0 _malloc
 * calls 005b8550 FUN_005b8550
 * calls 00508b10 FUN_00508b10
 * calls 00511570 FUN_00511570
 * calls 00573960 FUN_00573960
 * calls 00586fa0 FUN_00586fa0
 * calls 00573870 FUN_00573870
 * calls 0052ee50 FUN_0052ee50
 * calls 00514c70 FUN_00514c70
 * calls 00571e80 FUN_00571e80
 * calls 00530240 FUN_00530240
 */

void __fastcall FUN_00551070(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870930;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0) == '\x0f') {
    ExceptionList = &pvStack_c;
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (ExceptionList = &pvStack_c, iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 == 0)) ||
       (iVar2 = FUN_005b8550(0x47b22fca), iVar2 == 0)) {
      iVar2 = 0;
    }
    FUN_00514c70(iVar2);
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 == 0)) ||
       (iVar2 = FUN_005b8550(0x72ad598c), iVar2 == 0)) {
      iVar2 = 0;
    }
    FUN_00514c70(iVar2);
  }
  puVar3 = _malloc(0x50);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0xefc9662e,0x84e4a54c,0);
    *puVar3 = &PTR_FUN_0089c334;
    puVar3[0x13] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar3);
  puVar3 = _malloc(0x50);
  local_4 = 1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0xd807e9b3,0x216f1b81,0);
    *puVar3 = &PTR_FUN_0089c334;
    puVar3[0x13] = 1;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar3);
  puVar3 = _malloc(0x50);
  local_4 = 2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0x21a4b0c,0xe451941e,0);
    *puVar3 = &PTR_FUN_0089c334;
    puVar3[0x13] = 2;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar3);
  puVar3 = _malloc(0x50);
  local_4 = 3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0xe97e4e83,0x2d159737,0);
    *puVar3 = &PTR_FUN_0089c334;
    puVar3[0x13] = 4;
    puVar5 = puVar3;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar5);
  DAT_0091ca38 = 0;
  uVar1 = FUN_00571e80(*(undefined4 *)(param_1 + 0x10));
  if (*(char *)(param_1 + 0x129) != '\0') {
    *(undefined1 *)(param_1 + 0x11c) = 0;
    *(undefined1 *)(param_1 + 0x119) = 1;
    *(undefined1 *)(param_1 + 0x11a) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0x2c) + 0x40))(uVar1);
  FUN_00573870();
  if (*(char *)(param_1 + 0x148) == '\0') {
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = 0xcace5999;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = 0x2e3919e9;
  }
  FUN_00525220(uVar6,0xb71b576d,uVar7);
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 == 0)) ||
     ((iVar2 = FUN_005b8550(0xc1f62308), iVar2 == 0 || (*(int *)(iVar2 + 0x18) != 1)))) {
    iVar2 = 0;
  }
  *(int *)(param_1 + 0x14c) = iVar2;
  if ((((*(int *)(param_1 + 0x10) == 0) ||
       (iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 == 0)) ||
      (iVar2 = FUN_005b8550(0xf5a2a087), iVar2 == 0)) || (*(int *)(iVar2 + 0x18) != 1)) {
    iVar2 = 0;
  }
  *(int *)(param_1 + 0x150) = iVar2;
  *(undefined4 *)(param_1 + 0x168) = DAT_0091ca3c;
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x14c);
  *(int *)(param_1 + 0x188) = iVar2;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  FUN_00514c70(*(undefined4 *)(param_1 + 0x14c));
  FUN_00514c70(*(undefined4 *)(param_1 + 0x188));
  FUN_00514c70(*(undefined4 *)(param_1 + 0x18c));
  if (*(char *)(param_1 + 0x170) == '\0') {
    FUN_00530240();
  }
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 == 0)) ||
     (iVar2 = FUN_005b8550(0x7fe4020f), iVar2 == 0)) {
    iVar2 = 0;
  }
  FUN_00514c70(iVar2);
  iVar2 = FUN_00511570();
  *(int *)(param_1 + 0x154) = iVar2;
  if (((*(int *)(param_1 + 0x10) != 0) &&
      (iVar4 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar4 != 0)) &&
     ((iVar4 = FUN_005b8550(0x7fe4020f), iVar4 != 0 &&
      ((*(int *)(iVar4 + 0x18) == 1 && (*(int *)(iVar4 + 0x24) != iVar2)))))) {
    *(int *)(iVar4 + 0x24) = iVar2;
    *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x2400000;
  }
  FUN_00508b10(&stack0xffffffec,1,&LAB_00547650,param_1,0);
  FUN_0052ee50();
  ExceptionList = puVar3;
  return;
}

