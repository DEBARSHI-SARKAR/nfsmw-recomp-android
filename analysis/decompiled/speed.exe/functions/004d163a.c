/* speed.exe 004d163a FUN_004d163a; analysis pseudocode, not buildable source.
 * calls 004b0af0 FUN_004b0af0
 * calls 004f30d0 FUN_004f30d0
 * calls 00700140 FUN_00700140
 * calls 004b8700 FUN_004b8700
 * calls 004d12d0 FUN_004d12d0
 * calls 004c7d20 FUN_004c7d20
 * calls 004aed40 FUN_004aed40
 * calls 004cf010 FUN_004cf010
 * calls 0071dd20 FUN_0071dd20
 * calls 0081b841 FUN_0081b841
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004d163a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 *unaff_EBX;
  bool in_ZF;
  undefined4 uVar6;
  
  if (!in_ZF) {
    if (DAT_008f8700 != unaff_EBX) {
      FUN_00700140();
    }
    DAT_00911ff8 = 1;
    _DAT_00911fa4 = unaff_EBX;
    puVar3 = (undefined4 *)FUN_004b8700(0x24,"EAXS_StreamManager");
    uVar5 = SUB41(unaff_EBX,0);
    if (puVar3 == unaff_EBX) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = &PTR_FUN_00896ae8;
      puVar3[2] = unaff_EBX;
      puVar3[3] = unaff_EBX;
      *(undefined1 *)(puVar3 + 4) = uVar5;
      *(undefined1 *)((int)puVar3 + 0x11) = uVar5;
      puVar3[1] = unaff_EBX;
      puVar3[5] = unaff_EBX;
      puVar3[6] = unaff_EBX;
      puVar3[7] = unaff_EBX;
      puVar3[8] = unaff_EBX;
    }
    *(undefined4 **)(param_1 + 0x80) = puVar3;
    if (((DAT_0091cf90[300] & 4U) == 0) || (*DAT_0091cf90 != '\x02')) {
      FUN_004c7d20(unaff_EBX);
      *(undefined4 **)(param_1 + 100) = unaff_EBX;
    }
    else {
      FUN_004c7d20(3);
      *(undefined4 *)(param_1 + 100) = 1;
    }
    DAT_0091205c = 1;
    DAT_00911ff9 = uVar5;
    *(int *)(param_1 + 0x24) = *(int *)(DAT_0091cf90 + 0x10) + 0x4c;
    puVar3 = unaff_EBX;
    puVar1 = unaff_EBX;
    puVar2 = unaff_EBX;
    if (DAT_008f86f8 != unaff_EBX) {
      uVar6 = *(undefined4 *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24);
      *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x14) = uVar6;
      FUN_004b0af0(uVar6);
      FUN_0081b841();
      puVar3 = DAT_008f86fc;
      puVar1 = DAT_008f8700;
      puVar2 = DAT_008f8704;
    }
    DAT_008f8704 = puVar2;
    DAT_008f8700 = puVar1;
    DAT_008f86fc = puVar3;
    puVar3 = (undefined4 *)(DAT_00911fa8 + 0x70);
    *(undefined4 *)(DAT_00911fa8 + 0x74) = *(undefined4 *)(DAT_00911fa8 + 0x70);
    *puVar3 = 5;
    FUN_004d12d0();
    FUN_004f30d0();
    puVar3 = &DAT_00912858;
    for (iVar4 = 0x4e0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    FUN_004aed40();
    if (*(int *)(param_1 + 100) == 1) {
      uVar6 = 3;
      DAT_008f8700 = unaff_EBX;
    }
    else {
      DAT_008f8700 = (undefined4 *)0x1;
      uVar6 = 1;
    }
    FUN_0071dd20(uVar6);
    FUN_004cf010();
    if (((uint)DAT_00911fe8 & 0x20000) == 0) {
      DAT_00911fe8 = unaff_EBX;
      _DAT_00911fec = unaff_EBX;
      DAT_00911ff0 = unaff_EBX;
      DAT_00911ff4 = unaff_EBX;
    }
    _DAT_00912274 = param_3;
    _DAT_00912278 = param_4;
    if (DAT_008f8700 != unaff_EBX) {
      FUN_00700140();
    }
  }
  return;
}

