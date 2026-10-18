/* speed.exe 007bc3c0 FUN_007bc3c0; analysis pseudocode, not buildable source.
 * calls 007a4b10 FUN_007a4b10
 * calls 007a6490 FUN_007a6490
 * calls 0056f250 FUN_0056f250
 * calls 0050e7f0 FUN_0050e7f0
 * calls 005816b0 FUN_005816b0
 * calls 00747ae0 FUN_00747ae0
 * calls 00652ad0 _malloc
 * calls 00586fa0 FUN_00586fa0
 * calls 00573960 FUN_00573960
 * calls 007a4df0 FUN_007a4df0
 * calls 007bb560 FUN_007bb560
 * calls 007aeb90 FUN_007aeb90
 * calls 0056f100 FUN_0056f100
 */

void __fastcall FUN_007bc3c0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined **local_38 [3];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883674;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_1 + 0x1b0) = 0xe032d89e;
  *(undefined **)(param_1 + 0x14c) = PTR_s_CustomizeCategory_fng_00905ea8;
  uVar2 = FUN_007a4b10(0x42);
  puVar3 = _malloc(0x2c);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &PTR_FUN_008b7518;
    puVar3[3] = uVar2;
    puVar3[4] = 0x42;
    puVar3[5] = 0;
    puVar3[6] = 7;
    *(undefined1 *)(puVar3 + 7) = 0;
    puVar3[8] = 1;
    puVar3[9] = 0;
    *(undefined1 *)(puVar3 + 10) = 0;
  }
  cVar1 = FUN_007a4df0(puVar3);
  if (cVar1 != '\0') {
    puVar3[8] = 0x10;
  }
  puVar4 = _malloc(0x5c);
  local_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0xf3990b6,0x60a662f5,0);
    puVar4[0x13] = &DAT_00890978;
    puVar4[0x15] = 1;
    puVar4[0x14] = 0x7010701;
    *puVar4 = &PTR_FUN_008b7564;
    puVar4[0x16] = puVar3;
    *(undefined1 *)((int)puVar4 + 0x45) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar4);
  FUN_007bb560(PTR_s_Rims_fng_00905ec0,0xb0da3de4,0x56b51a0e,0x702);
  FUN_007bb560(PTR_s_Rims_fng_00905ec0,0xf224a729,0xf93f2d34,0x703);
  FUN_007bb560(PTR_s_Rims_fng_00905ec0,0xf224ab29,0xf93f3134,0x704);
  FUN_007bb560(PTR_s_Rims_fng_00905ec0,0xe38de9e,0x460d1369,0x705);
  FUN_007bb560(PTR_s_Rims_fng_00905ec0,0xea60b4a,0x467a4015,0x706);
  FUN_007bb560(PTR_s_Rims_fng_00905ec0,0xafc6b9cb,0x9bb17a11,0x707);
  FUN_007bb560(PTR_s_Rims_fng_00905ec0,0x27ebd095,0xcca3063f,0x708);
  FUN_007bb560(PTR_s_Rims_fng_00905ec0,0x6c2fa9db,0xc1bc1a86,0x709);
  FUN_007bb560(PTR_s_Rims_fng_00905ec0,0x36c53e8e,0x213085f9,0x70a);
  FUN_007bb560(PTR_s_Rims_fng_00905ec0,0x36c2d130,0x212e5429,0x70b);
  local_38[0] = &PTR_FUN_008b7518;
  local_2c = 0;
  local_28 = 0x42;
  local_24 = 0;
  local_20 = 7;
  local_1c = 0;
  local_18 = 1;
  local_14 = 0;
  local_10 = (void *)((uint)local_10 & 0xffffff00);
  iVar5 = FUN_007aeb90(local_38);
  if (iVar5 != 0) {
    uVar2 = FUN_00747ae0(0xebb03e66,0);
    uVar2 = FUN_007a6490(uVar2);
    *(undefined4 *)(param_1 + 0x1ac) = uVar2;
  }
  FUN_0056f100(*(undefined1 *)(DAT_009b9ec4 + 0x10));
  uVar7 = 0x42;
  uVar2 = FUN_005816b0(0x42);
  iVar5 = FUN_0056f250(uVar2,uVar7);
  if (iVar5 != 0) {
    uVar2 = FUN_00747ae0(0xebb03e66,0);
    uVar2 = FUN_007a6490(uVar2);
    *(undefined4 *)(param_1 + 0x1a8) = uVar2;
  }
  if (*(uint *)(param_1 + 0x154) == 0x801) {
    uVar6 = *(uint *)(param_1 + 0x1ac);
    if (uVar6 == 0) {
      if (*(int *)(param_1 + 0x1a8) == 0) {
        FUN_0050e7f0(1);
      }
      else {
        FUN_0050e7f0(*(int *)(param_1 + 0x1a8));
      }
      goto LAB_007bc6f6;
    }
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x154) & 0xffff00ff;
  }
  if (*(char *)(param_1 + 0x129) != '\0') {
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined1 *)(param_1 + 0x11c) = 0;
    *(undefined1 *)(param_1 + 0x119) = 1;
    *(undefined1 *)(param_1 + 0x11a) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0x2c) + 0x40))(uVar6);
LAB_007bc6f6:
  if ((0x700 < *(uint *)(param_1 + 0x154)) && (*(uint *)(param_1 + 0x154) < 0x70c)) {
    *(undefined4 *)(param_1 + 0x154) = 0x801;
  }
  ExceptionList = local_10;
  return;
}

