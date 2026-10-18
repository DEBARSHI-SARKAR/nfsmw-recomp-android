/* speed.exe 004d1630 FUN_004d1630; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004d1630(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  
  if (DAT_008f86f8 != 0) {
    if (DAT_008f8700 != 0) {
      FUN_00700140();
    }
    _DAT_00911fa4 = 0;
    DAT_00911ff8 = 1;
    puVar1 = (undefined4 *)FUN_004b8700(0x24,"EAXS_StreamManager");
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = &PTR_FUN_00896ae8;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined1 *)(puVar1 + 4) = 0;
      *(undefined1 *)((int)puVar1 + 0x11) = 0;
      puVar1[1] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
    }
    *(undefined4 **)(param_1 + 0x80) = puVar1;
    if (((DAT_0091cf90[300] & 4U) == 0) || (*DAT_0091cf90 != '\x02')) {
      FUN_004c7d20(0);
      *(undefined4 *)(param_1 + 100) = 0;
    }
    else {
      FUN_004c7d20(3);
      *(undefined4 *)(param_1 + 100) = 1;
    }
    DAT_0091205c = 1;
    DAT_00911ff9 = 0;
    *(int *)(param_1 + 0x24) = *(int *)(DAT_0091cf90 + 0x10) + 0x4c;
    if (DAT_008f86f8 == 0) {
      DAT_008f8704 = 0;
      DAT_008f8700 = 0;
      DAT_008f86fc = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24);
      *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x14) = uVar4;
      FUN_004b0af0(uVar4);
      FUN_0081b841();
    }
    puVar1 = (undefined4 *)(DAT_00911fa8 + 0x70);
    *(undefined4 *)(DAT_00911fa8 + 0x74) = *(undefined4 *)(DAT_00911fa8 + 0x70);
    *puVar1 = 5;
    FUN_004d12d0();
    FUN_004f30d0();
    puVar1 = &DAT_00912858;
    for (iVar2 = 0x4e0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    FUN_004aed40();
    bVar3 = *(int *)(param_1 + 100) != 1;
    if (bVar3) {
      uVar4 = 1;
    }
    else {
      uVar4 = 3;
    }
    DAT_008f8700 = (uint)bVar3;
    FUN_0071dd20(uVar4);
    FUN_004cf010();
    if ((DAT_00911fe8 & 0x20000) == 0) {
      DAT_00911fe8 = 0;
      DAT_00911ff0 = 0;
      _DAT_00911fec = 0;
      DAT_00911ff4 = 0;
    }
    _DAT_00912274 = param_2;
    _DAT_00912278 = param_3;
    if (DAT_008f8700 != 0) {
      FUN_00700140();
    }
  }
  return;
}

