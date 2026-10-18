/* speed.exe 007aa900 FUN_007aa900; analysis pseudocode, not buildable source.
 * calls 007aa880 FUN_007aa880
 * calls 00571e80 FUN_00571e80
 * calls 00516c90 FUN_00516c90
 * calls 00652ad0 _malloc
 * calls 00573960 FUN_00573960
 * calls 00586fa0 FUN_00586fa0
 * calls 0056e2b0 FUN_0056e2b0
 */

void __fastcall FUN_007aa900(int param_1)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00882c04;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar3 = FUN_0056e2b0();
  if (iVar3 == 0) {
    puVar4 = _malloc(0x50);
    local_4 = 4;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0xe9638d3e,0x34fa2c1,0);
      *puVar4 = &PTR_FUN_008b75b0;
      puVar4[0x13] = 1;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar4);
    puVar4 = _malloc(0x50);
    local_4 = 5;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0x2521e5eb,0xb94fd70e,0);
      *puVar4 = &PTR_FUN_008b75b0;
      puVar4[0x13] = 0;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar4);
    local_10 = _malloc(0x50);
    local_4 = 6;
    if (local_10 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0xaaab31e9,0x6f547e4c,0);
      *local_10 = &PTR_FUN_008b75b0;
      local_10[0x13] = 2;
      puVar4 = local_10;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar4);
    uVar1 = *(uint *)(DAT_0091cf90 + 300);
    if (((uVar1 >> 3 & 1) != 0) || ((uVar1 >> 6 & 1) != 0)) goto LAB_007aac01;
    if (((uVar1 & 4) == 0) || (*DAT_0091cf90 != '\x02')) {
      pvVar5 = _malloc(0x50);
      local_4 = 7;
      if (pvVar5 == (void *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_007aa880(0x3a015595,0x4930f5fc,3);
      }
      local_4 = 0xffffffff;
      FUN_00573960(uVar6);
    }
    puVar4 = _malloc(0x50);
    local_4 = 8;
    local_10 = puVar4;
    if (puVar4 == (undefined4 *)0x0) goto LAB_007aabf3;
    FUN_00586fa0(0x66c9a7b6,0xee1edc76,0);
    *puVar4 = &PTR_FUN_008b75b0;
    puVar4[0x13] = 5;
  }
  else {
    local_10 = _malloc(0x50);
    local_4 = 0;
    if (local_10 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0xe9638d3e,0x34fa2c1,0);
      *local_10 = &PTR_FUN_008b75b0;
      local_10[0x13] = 1;
      puVar4 = local_10;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar4);
    iVar3 = FUN_0056e2b0();
    if (iVar3 != 1) goto LAB_007aac01;
    puVar4 = _malloc(0x50);
    local_4 = 1;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0x2521e5eb,0xb94fd70e,0);
      *puVar4 = &PTR_FUN_008b75b0;
      puVar4[0x13] = 0;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar4);
    puVar4 = _malloc(0x50);
    local_4 = 2;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0xaaab31e9,0x6f547e4c,0);
      *puVar4 = &PTR_FUN_008b75b0;
      puVar4[0x13] = 2;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar4);
    puVar4 = _malloc(0x50);
    local_4 = 3;
    local_10 = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
LAB_007aabf3:
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0x1a091045,0xa15e4505,0);
      *puVar4 = &PTR_FUN_008b75b0;
      puVar4[0x13] = 4;
    }
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar4);
LAB_007aac01:
  uVar2 = FUN_00571e80(*(undefined4 *)(param_1 + 0x10));
  if (*(char *)(param_1 + 0x129) != '\0') {
    *(undefined1 *)(param_1 + 0x11c) = 0;
    *(undefined1 *)(param_1 + 0x119) = 1;
    *(undefined1 *)(param_1 + 0x11a) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0x2c) + 0x40))(uVar2);
  FUN_00516c90(0x21828323,*(undefined4 *)(param_1 + 0x10),0);
  ExceptionList = local_10;
  return;
}

