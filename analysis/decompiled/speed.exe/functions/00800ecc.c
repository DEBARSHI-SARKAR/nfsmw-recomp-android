/* speed.exe 00800ecc FUN_00800ecc; analysis pseudocode, not buildable source.
 * calls 00801332 FUN_00801332
 * calls 00807dc3 FUN_00807dc3
 * calls 008001d8 FUN_008001d8
 * calls 0080891b FUN_0080891b
 * calls 00800650 FUN_00800650
 * calls 00800899 FUN_00800899
 * calls 00808cd4 FUN_00808cd4
 * calls 00800478 FUN_00800478
 * calls 00800825 FUN_00800825
 */

void FUN_00800ecc(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  
  iVar3 = param_1;
  iVar1 = *(int *)(param_1 + 0x22c);
  iVar2 = *(int *)(param_1 + 0x230);
  if (*(char *)(param_1 + 0x1ac) == '\0') {
    puVar7 = &DAT_008c5908;
    puVar8 = (undefined4 *)(param_1 + 0x730);
    for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    *(undefined2 *)(param_1 + 0x70a) = DAT_008c553c;
    *(undefined4 *)(param_1 + 0x70c) = DAT_008c551c;
    *(undefined4 *)(param_1 + 0x710) = DAT_008c5520;
    *(undefined4 *)(param_1 + 0x714) = DAT_008c5524;
    *(undefined2 *)(param_1 + 0x718) = DAT_008c5528;
    *(undefined2 *)(param_1 + 0x708) = DAT_008c5540;
    *(undefined4 *)(param_1 + 0x720) = DAT_008c552c;
    *(undefined4 *)(param_1 + 0x724) = DAT_008c5530;
    *(undefined4 *)(param_1 + 0x728) = DAT_008c5534;
    *(undefined4 *)(param_1 + 0x72c) = DAT_008c5538;
    *(undefined4 *)(param_1 + 0x680) = 0x80808080;
    *(undefined4 *)(param_1 + 0x684) = 0x80808080;
    *(undefined2 *)(param_1 + 0x688) = 0x8080;
    *(undefined1 *)(param_1 + 0x68a) = 0x80;
    *(undefined4 *)(param_1 + 0x68b) = 0x80808080;
    *(undefined4 *)(param_1 + 0x68f) = 0x80808080;
    *(undefined2 *)(param_1 + 0x693) = 0x8080;
    *(undefined1 *)(param_1 + 0x695) = 0x80;
    uVar5 = *(uint *)(param_1 + 0x228);
    puVar7 = *(undefined4 **)(param_1 + 0x6f4);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar7 = 0x1010101;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = 1;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    puVar7 = (undefined4 *)(param_1 + 0x640);
    iVar11 = 0x10;
    puVar8 = &DAT_008c4d10;
    puVar10 = puVar7;
    if (*(int *)(param_1 + 0x1dc) != 1) {
      puVar8 = &DAT_008c4cd0;
    }
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    FUN_008001d8(param_1,puVar7);
  }
  else {
    FUN_00808cd4(param_1);
    FUN_0080891b(param_1,*(undefined1 *)(param_1 + 0x1ac));
    *(undefined4 *)(param_1 + 0x3a0) = 0;
  }
  FUN_00800650(param_1,*(undefined1 *)(param_1 + 0x1ac));
  puVar4 = (undefined1 *)(param_1 + 0x580);
  iVar11 = 0x40;
  do {
    *puVar4 = *(undefined1 *)
               (*(int *)(*(int *)(param_1 + 0x13c) + 0x13c) + (uint)(byte)puVar4[0x40] * 4);
    puVar4 = puVar4 + 1;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  if (*(int *)(param_1 + 0x4524) != 0) {
    FUN_00800478(param_1);
  }
  if (*(int *)(param_1 + 0x1dc) == 1) {
    uVar5 = FUN_00801332(param_1 + 0x150,8);
    *(uint *)(param_1 + 0x6ec) = uVar5 & 0xff;
  }
  FUN_00800899(param_1);
  puVar7 = *(undefined4 **)(param_1 + 4);
  for (iVar11 = 0xc0; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  uVar5 = iVar1 - 3;
  *(undefined4 *)(param_1 + 0x4528) = 0;
  *(undefined4 *)(param_1 + 0x452c) = 0;
  *(undefined4 *)(param_1 + 0x4530) = 0;
  *(undefined4 *)(param_1 + 0x4534) = 0;
  param_1 = 3;
  if (3 < uVar5) {
    uVar6 = iVar2 - 3;
    do {
      FUN_00800825(iVar3);
      uVar9 = 3;
      if (3 < uVar6) {
        do {
          FUN_00807dc3(iVar3,param_1,uVar9);
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar6);
      }
      param_1 = param_1 + 1;
    } while (param_1 < uVar5);
  }
  return;
}

