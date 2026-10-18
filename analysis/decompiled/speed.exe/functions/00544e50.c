/* speed.exe 00544e50 FUN_00544e50; analysis pseudocode, not buildable source.
 * calls 0056dba0 FUN_0056dba0
 * calls 00528bc0 FUN_00528bc0
 * calls 00573960 FUN_00573960
 * calls 00586fa0 FUN_00586fa0
 * calls 00525220 FUN_00525220
 * calls 00571e80 FUN_00571e80
 * calls 0056e2b0 FUN_0056e2b0
 * calls 00652ad0 _malloc
 */

void __fastcall FUN_00544e50(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086ff00;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(DAT_0091cf90 + 300) = 0;
  FUN_0056dba0(0,0xffffffff);
  iVar2 = FUN_0056e2b0();
  if (iVar2 == 0) {
    puVar3 = _malloc(0x4c);
    local_4 = 4;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0x3704f3d,0x5815a2b5,0);
      *puVar3 = &PTR_FUN_0089c1ec;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar3);
    puVar3 = _malloc(0x4c);
    local_4 = 5;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0x9a962438,0xcc8cb746,0);
      *puVar3 = &PTR_FUN_0089c1f4;
      *(undefined1 *)((int)puVar3 + 0x45) = 1;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar3);
    puVar3 = _malloc(0x4c);
    local_4 = 6;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0x4e6fbb02,0x54020a7a,0);
      *puVar3 = &PTR_FUN_0089c1fc;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar3);
    puVar3 = _malloc(0x4c);
    local_4 = 7;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0xb0c46023,0x1afd5be6,0);
      *puVar3 = &PTR_FUN_0089c214;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar3);
    puVar3 = _malloc(0x4c);
    local_4 = 8;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0xd13a2e66,0xd6db74de,0);
      *puVar3 = &PTR_FUN_0089c204;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar3);
    puVar3 = _malloc(0x4c);
    local_4 = 9;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0x771849a5,0x74fb90a8,0);
      *puVar3 = &PTR_FUN_0089c20c;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar3);
    if (DAT_008f8708 != 0) {
      puVar3 = _malloc(0x4c);
      local_4 = 10;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        FUN_00586fa0(0x6b303856,0xbcb18f38,0);
        *puVar3 = &PTR_FUN_0089c21c;
      }
      local_4 = 0xffffffff;
      FUN_00573960(puVar3);
    }
    local_10 = _malloc(0x4c);
    local_4 = 0xb;
    if (local_10 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0x3058fe37,0x19a8c0af,0);
      *local_10 = &PTR_FUN_0089c224;
      puVar3 = local_10;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar3);
  }
  else {
    puVar3 = _malloc(0x4c);
    local_4 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0x9a962438,0xcc8cb746,0);
      *puVar3 = &PTR_FUN_0089c1f4;
      *(undefined1 *)((int)puVar3 + 0x45) = 1;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar3);
    puVar3 = _malloc(0x4c);
    local_4 = 1;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0x4e6fbb02,0x54020a7a,0);
      *puVar3 = &PTR_FUN_0089c1fc;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar3);
    puVar3 = _malloc(0x4c);
    local_4 = 2;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0xb0c46023,0x1afd5be6,0);
      *puVar3 = &PTR_FUN_0089c214;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar3);
    local_10 = _malloc(0x4c);
    local_4 = 3;
    if (local_10 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0x3058fe37,0x19a8c0af,0);
      *local_10 = &PTR_FUN_0089c224;
      puVar3 = local_10;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar3);
    DAT_00926124 = 1;
  }
  FUN_00525220(param_1[4],0xb71b576d,0xb24aae58);
  uVar1 = FUN_00571e80(param_1[4]);
  if (*(char *)((int)param_1 + 0x129) != '\0') {
    *(undefined1 *)(param_1 + 0x47) = 0;
    *(undefined1 *)((int)param_1 + 0x119) = 1;
    *(undefined1 *)((int)param_1 + 0x11a) = 0;
    param_1[0x44] = 0;
  }
  (**(code **)(param_1[0xb] + 0x40))(uVar1);
  (**(code **)(*param_1 + 0xc))();
  FUN_00528bc0();
  ExceptionList = local_10;
  return;
}

