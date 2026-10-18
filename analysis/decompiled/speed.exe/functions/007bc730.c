/* speed.exe 007bc730 FUN_007bc730; analysis pseudocode, not buildable source.
 * calls 007a6540 FUN_007a6540
 * calls 00586fa0 FUN_00586fa0
 * calls 00573960 FUN_00573960
 * calls 0056f250 FUN_0056f250
 * calls 007a4df0 FUN_007a4df0
 * calls 0050e7f0 FUN_0050e7f0
 * calls 007bb560 FUN_007bb560
 * calls 005816b0 FUN_005816b0
 * calls 007aeb90 FUN_007aeb90
 * calls 0056f100 FUN_0056f100
 * calls 00652ad0 _malloc
 */

void __fastcall FUN_007bc730(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
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
  puStack_8 = &LAB_00883694;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_1 + 0x1b0) = 0xda129752;
  *(undefined **)(param_1 + 0x14c) = PTR_s_CustomizeCategory_fng_00905ea8;
  puVar2 = _malloc(0x2c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_008b7518;
    puVar2[3] = 0;
    puVar2[4] = 0x4d;
    puVar2[5] = 0;
    puVar2[6] = 7;
    *(undefined1 *)(puVar2 + 7) = 0;
    puVar2[8] = 1;
    puVar2[9] = 0;
    *(undefined1 *)(puVar2 + 10) = 0;
  }
  cVar1 = FUN_007a4df0(puVar2);
  if (cVar1 != '\0') {
    puVar2[8] = 0x10;
  }
  puVar3 = _malloc(0x5c);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0x21f3d114,0x60a662f5,0);
    puVar3[0x13] = &DAT_00890978;
    puVar3[0x15] = 1;
    puVar3[0x14] = 0x4010401;
    *puVar3 = &PTR_FUN_008b7564;
    puVar3[0x16] = puVar2;
    *(undefined1 *)((int)puVar3 + 0x45) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar3);
  FUN_007bb560(PTR_s_CustomizeParts_fng_00905eb0,0xf8148554,0xd9228fc6,0x402);
  FUN_007bb560(PTR_s_CustomizeParts_fng_00905eb0,0x192d84da,0x1e8d885f,0x403);
  FUN_007bb560(PTR_s_CustomizeParts_fng_00905eb0,0xf7352706,0x1c619fd8,0x404);
  FUN_007bb560(PTR_s_CustomizeParts_fng_00905eb0,0x1223cc89,0x9c1b8935,0x405);
  FUN_007bb560(PTR_s_CustomizeParts_fng_00905eb0,0xbc44bbcb,0x7956f7b0,0x406);
  FUN_007bb560(PTR_s_CustomizeParts_fng_00905eb0,0x694ca0ca,0x2d5bff0f,0x407);
  FUN_007bb560(PTR_s_CustomizeParts_fng_00905eb0,0x1b3a8dd3,0x209a9158,0x408);
  FUN_007bb560(PTR_s_CustomizeParts_fng_00905eb0,0x1ba508fc,0xcd057d21,0x409);
  local_38[0] = &PTR_FUN_008b7518;
  local_2c = 0;
  local_28 = 0x4d;
  local_24 = 0;
  local_20 = 7;
  local_1c = 0;
  local_18 = 1;
  local_14 = 0;
  local_10 = (void *)((uint)local_10 & 0xffffff00);
  iVar4 = FUN_007aeb90(local_38);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0xc) != 0)) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0xc) + 0xc);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x1ac) = 1;
    }
    else {
      uVar5 = FUN_007a6540(*(byte *)(iVar4 + 5) & 0x1f);
      *(undefined4 *)(param_1 + 0x1ac) = uVar5;
    }
  }
  FUN_0056f100(*(undefined1 *)(DAT_009b9ec4 + 0x10));
  uVar7 = 0x4d;
  uVar5 = FUN_005816b0(0x4d);
  iVar4 = FUN_0056f250(uVar5,uVar7);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x1a8) = 1;
  }
  else {
    uVar5 = FUN_007a6540(*(byte *)(iVar4 + 5) & 0x1f);
    *(undefined4 *)(param_1 + 0x1a8) = uVar5;
  }
  if (*(uint *)(param_1 + 0x154) == 0x803) {
    uVar6 = *(uint *)(param_1 + 0x1ac);
    if (uVar6 == 0) {
      if (*(int *)(param_1 + 0x1a8) == 0) {
        FUN_0050e7f0(1);
      }
      else {
        FUN_0050e7f0(*(int *)(param_1 + 0x1a8));
      }
      goto LAB_007bca2e;
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
LAB_007bca2e:
  if ((0x400 < *(uint *)(param_1 + 0x154)) && (*(uint *)(param_1 + 0x154) < 0x40a)) {
    *(undefined4 *)(param_1 + 0x154) = 0x803;
  }
  ExceptionList = local_10;
  return;
}

