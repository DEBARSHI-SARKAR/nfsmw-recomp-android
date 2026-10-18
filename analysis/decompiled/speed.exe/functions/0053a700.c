/* speed.exe 0053a700 FUN_0053a700; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00571e80 FUN_00571e80
 * calls 00573960 FUN_00573960
 * calls 005b8550 FUN_005b8550
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 * calls 00586fa0 FUN_00586fa0
 * calls 00516af0 FUN_00516af0
 */

void __fastcall FUN_0053a700(int *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086faac;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar2 = _malloc(0x4c);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0x23d40757,0x54020a7a,0);
    *puVar2 = &PTR_FUN_0089cab0;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar2);
  puVar2 = _malloc(0x4c);
  local_4 = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0x6b0c3634,0x98dce70c,0);
    *puVar2 = &PTR_FUN_0089cab8;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar2);
  puVar2 = _malloc(0x4c);
  local_4 = 2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0x56026748,0x972dd7ed,0);
    *puVar2 = &PTR_FUN_0089cac0;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar2);
  local_10 = _malloc(0x4c);
  local_4 = 3;
  if (local_10 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0x9c0a19e0,0xc0bedf15,0);
    *local_10 = &PTR_FUN_0089cac8;
    puVar2 = local_10;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar2);
  if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) {
    local_10 = _malloc(0x4c);
    local_4 = 4;
    if (local_10 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0xda665928,0x8106d26a,0);
      *local_10 = &PTR_FUN_0089cad0;
      puVar2 = local_10;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar2);
  }
  if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) {
    puVar2 = _malloc(0x4c);
    local_4 = 5;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0x114f5968,0x4815fdbd,0);
      *puVar2 = &PTR_FUN_0089caa0;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar2);
    local_10 = _malloc(0x4c);
    local_4 = 6;
    if (local_10 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0x3ba703b6,0x25c9afe9,0);
      *local_10 = &PTR_FUN_0089caa8;
      puVar2 = local_10;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar2);
  }
  if (*(int *)(DAT_0091cf90 + 0x188) == 1) {
    uVar1 = FUN_00571e80(param_1[4]);
    if (*(char *)((int)param_1 + 0x129) != '\0') {
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(undefined1 *)((int)param_1 + 0x119) = 1;
      *(undefined1 *)((int)param_1 + 0x11a) = 0;
      param_1[0x44] = 0;
    }
  }
  else {
    uVar1 = 0;
    if (*(int *)(DAT_0091cf90 + 0x188) == 0) {
      uVar1 = 5;
    }
    if (*(char *)((int)param_1 + 0x129) != '\0') {
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(undefined1 *)((int)param_1 + 0x119) = 1;
      *(undefined1 *)((int)param_1 + 0x11a) = 0;
      param_1[0x44] = 0;
    }
  }
  (**(code **)(param_1[0xb] + 0x40))(uVar1);
  *(undefined4 *)(DAT_0091cf90 + 0x188) = 1;
  (**(code **)(*param_1 + 0xc))();
  if ((((param_1[0xe] != 0) &&
       (iVar3 = (**(code **)(param_1[0xb] + 0x24))(param_1[0xe]), iVar3 == 1)) && (param_1[4] != 0))
     && (((iVar3 = FUN_00516af0(param_1[4]), iVar3 != 0 &&
          (iVar3 = FUN_005b8550(0x444969fe), iVar3 != 0)) &&
         (iVar3 = FUN_005b1360(0x7ab70d67), iVar3 != 0)))) {
    FUN_005b8400(iVar3,0);
    *(undefined4 *)(iVar3 + 0x10) = 0;
  }
  ExceptionList = local_10;
  return;
}

