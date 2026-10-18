/* speed.exe 00532220 FUN_00532220; analysis pseudocode, not buildable source.
 * calls 00571e80 FUN_00571e80
 * calls 00525220 FUN_00525220
 * calls 005b8550 FUN_005b8550
 * calls 005b8400 FUN_005b8400
 * calls 005a8780 FUN_005a8780
 * calls 005b1360 FUN_005b1360
 * calls 005af1c0 FUN_005af1c0
 * calls 005a3b60 FUN_005a3b60
 * calls 005252d0 FUN_005252d0
 * calls 00516af0 FUN_00516af0
 * calls 00652ad0 _malloc
 * calls 00573960 FUN_00573960
 * calls 00586fa0 FUN_00586fa0
 * calls 00590500 FUN_00590500
 * calls 0056bb20 FUN_0056bb20
 */

void __fastcall FUN_00532220(int *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 local_18;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086f6d4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar2 = _malloc(0x4c);
  local_4 = 0;
  local_18 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0x12bb5ea2,0x1bd185c,0);
    *puVar2 = &PTR_FUN_0089c428;
    *(undefined1 *)((int)puVar2 + 0x45) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar2);
  puVar2 = _malloc(0x4c);
  local_4 = 1;
  local_18 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0x2c14ac23,0x80b9ff9b,0);
    *puVar2 = &PTR_FUN_0089c440;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar2);
  puVar2 = _malloc(0x4c);
  local_4 = 2;
  local_18 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0xc6a1a6e0,0xd5f627,0);
    *puVar2 = &PTR_FUN_0089c430;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar2);
  if ((*(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) >> 4 & 1) != 0) {
    puVar2 = _malloc(0x4c);
    local_4 = 3;
    local_18 = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0x2fd8b206,0xac22f27e,0);
      *puVar2 = &PTR_FUN_0089c438;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar2);
  }
  if (DAT_008f8708 != 0) {
    puVar2 = _malloc(0x4c);
    local_4 = 4;
    local_18 = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0x228b7e32,0x1c8ace,0);
      *puVar2 = &PTR_FUN_0089c448;
      *(undefined1 *)((int)puVar2 + 0x45) = 1;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar2);
  }
  uVar1 = FUN_00571e80(param_1[4]);
  if (*(char *)((int)param_1 + 0x129) != '\0') {
    *(undefined1 *)(param_1 + 0x47) = 0;
    *(undefined1 *)((int)param_1 + 0x119) = 1;
    *(undefined1 *)((int)param_1 + 0x11a) = 0;
    param_1[0x44] = 0;
  }
  (**(code **)(param_1[0xb] + 0x40))(uVar1);
  FUN_00525220(param_1[4],0x3c458c1,0xe596c4a3);
  FUN_00525220(param_1[4],0xb5c74226,0xe596c4a3);
  puVar7 = &DAT_0089cef0;
  iVar3 = FUN_0056bb20();
  if ((((iVar3 == 7) || (iVar3 == 0xd)) || (iVar3 == 1)) || ((iVar3 == 2 || (iVar3 == 6)))) {
    puVar7 = &DAT_0089ceec;
  }
  iVar3 = param_1[4];
  uVar4 = FUN_005af1c0(&DAT_0089da48);
  uVar5 = FUN_005af1c0("PLAYER_MASTER");
  if (iVar3 != 0) {
    iVar3 = FUN_00516af0(iVar3);
    if (iVar3 != 0) {
      iVar3 = FUN_005b8550(uVar5);
      if (iVar3 != 0) {
        iVar3 = FUN_005b1360(uVar4);
        if (iVar3 != 0) {
          FUN_005b8400(iVar3,0);
          *(undefined4 *)(iVar3 + 0x10) = 0;
        }
      }
    }
  }
  iVar3 = param_1[4];
  iVar6 = FUN_005a8780((int)&local_18 + 2);
  uVar4 = FUN_005af1c0("CAREER_DATA",&DAT_0089cee4,*(undefined1 *)(iVar6 + 1),puVar7);
  FUN_005252d0(iVar3,uVar4);
  iVar3 = param_1[4];
  uVar4 = FUN_00590500();
  uVar4 = FUN_005af1c0("BOUNTY_DATA",&DAT_0089c2d0,uVar4);
  FUN_005252d0(iVar3,uVar4);
  iVar3 = param_1[4];
  uVar4 = FUN_005af1c0("CASH_DATA",&DAT_0089c2d0,
                       *(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb4));
  FUN_005252d0(iVar3,uVar4);
  (**(code **)(*param_1 + 0xc))();
  FUN_005a3b60();
  ExceptionList = pvStack_10;
  return;
}

