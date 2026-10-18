/* speed.exe 0074b8b0 FUN_0074b8b0; analysis pseudocode, not buildable source.
 * calls 00452880 FUN_00452880
 * calls 006d27c0 FUN_006d27c0
 * calls 0074b810 FUN_0074b810
 * calls 00652ad0 _malloc
 * calls 00659250 FUN_00659250
 */

undefined4 * __fastcall FUN_0074b8b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00880e0c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0074b810(0xeec2271a,0,0);
  local_4 = 0;
  FUN_0074b810(0x681bef75,0,0);
  local_4._0_1_ = 1;
  FUN_0074b810(0xee6074a3,0,0);
  local_4._0_1_ = 2;
  puVar1 = _malloc(0x10);
  local_4._0_1_ = 3;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00452880(0x14,1);
    iVar2 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
    local_4._0_1_ = 4;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_006d27c0(0x334f1e4d,0,0);
    }
    *puVar1 = uVar3;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined1 *)((int)puVar1 + 0xd) = 1;
    *(undefined1 *)((int)puVar1 + 0xe) = 0;
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  local_4._0_1_ = 2;
  param_1[0x70] = puVar1;
  puVar1 = _malloc(0x10);
  local_4._0_1_ = 5;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00452880(0x14,1);
    iVar2 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
    local_4._0_1_ = 6;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_006d27c0(0xbfa7b6ac,0,0);
    }
    *puVar1 = uVar3;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined1 *)((int)puVar1 + 0xd) = 1;
    *(undefined1 *)((int)puVar1 + 0xe) = 0;
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  local_4._0_1_ = 2;
  param_1[0x71] = puVar1;
  puVar1 = _malloc(0x10);
  local_4._0_1_ = 7;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00452880(0x14,1);
    iVar2 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
    local_4._0_1_ = 8;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_006d27c0(0x15746132,0,0);
    }
    *puVar1 = uVar3;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined1 *)((int)puVar1 + 0xd) = 1;
    *(undefined1 *)((int)puVar1 + 0xe) = 0;
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  local_4._0_1_ = 2;
  param_1[0x72] = puVar1;
  puVar1 = _malloc(0x10);
  local_4._0_1_ = 9;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00452880(0x14,1);
    iVar2 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
    local_4._0_1_ = 10;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_006d27c0(0x30656612,0,0);
    }
    *puVar1 = uVar3;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined1 *)((int)puVar1 + 0xd) = 1;
    *(undefined1 *)((int)puVar1 + 0xe) = 0;
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  local_4._0_1_ = 2;
  param_1[0x73] = puVar1;
  puVar1 = _malloc(0x10);
  local_4._0_1_ = 0xb;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00452880(0x14,1);
    iVar2 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
    local_4._0_1_ = 0xc;
    if (iVar2 == 0) {
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[1] = 0;
    }
    else {
      uVar3 = FUN_006d27c0(0x90d06c71,0,0);
      *puVar1 = uVar3;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[1] = 0;
    }
  }
  local_4._0_1_ = 2;
  param_1[0x74] = puVar1;
  puVar1 = _malloc(0x10);
  local_4._0_1_ = 0xd;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00452880(0x14,1);
    iVar2 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
    local_4 = CONCAT31(local_4._1_3_,0xe);
    if (iVar2 == 0) {
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[1] = 0;
    }
    else {
      uVar3 = FUN_006d27c0(0x6b40eb80,0,0);
      *puVar1 = uVar3;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[1] = 0;
    }
  }
  param_1[0x75] = puVar1;
  param_1[0x76] = 0xbf800000;
  param_1[0x77] = 0xbf800000;
  param_1[0x5e] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  *param_1 = 0;
  param_1[0x79] = 0;
  param_1[0x5d] = 0x3f800000;
  param_1[0x7a] = 0xffffffff;
  ExceptionList = pvStack_c;
  return param_1;
}

