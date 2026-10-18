/* speed.exe 004653d0 FUN_004653d0; analysis pseudocode, not buildable source.
 * calls 00464e60 FUN_00464e60
 * calls 00465110 FUN_00465110
 * calls 004652a0 FUN_004652a0
 * calls 00463e10 FUN_00463e10
 * calls 00464780 FUN_00464780
 * calls 00464080 FUN_00464080
 */

undefined4 * FUN_004653d0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint local_8;
  
  uVar11 = param_4;
  iVar8 = (param_4 & 0xf) * 0xc;
  puVar12 = &DAT_0090de48 + iVar8;
  if (*(uint *)(&DAT_0090de4c + (param_4 & 0xf) * 0xc) != 0xffffffff) {
    uVar5 = (*(uint *)(&DAT_0090de4c + (param_4 & 0xf) * 0xc) ^ param_4) & 0xf ^ param_4;
    iVar6 = FUN_00464080(uVar5);
    if (param_1 < iVar6) {
      puVar12 = &DAT_0090de48 + *(int *)(&DAT_0090de4c + iVar8) * 0xc;
      uVar11 = uVar5;
    }
  }
  if (puVar12[1] != '\0') {
    uVar11 = uVar11 ^ 0x40;
  }
  iVar8 = *(int *)(puVar12 + 8);
  if (iVar8 != 0) {
    puVar7 = (undefined4 *)
             (**(code **)(iVar8 + 0x10))(*(undefined4 *)(iVar8 + 4),param_1,param_2,param_3,uVar11);
    return puVar7;
  }
  DAT_0090e684 = param_3;
  DAT_0090e680 = param_2;
  if (DAT_0090e688 == 0) {
    FUN_004652a0();
  }
  if (((DAT_0090e660 != 0) && (DAT_0090e678 % DAT_0090e660 == 0)) &&
     ((&DAT_0090df10)[uVar11 & 0xf] != 0)) {
    FUN_00465110(1);
  }
  local_8 = (int)uVar11 >> 6 & 0x1ffc;
  if (local_8 == 0) {
    local_8 = 0x10;
  }
  iVar6 = ((int)uVar11 >> 0x11 & 0x1ffcU) + 0x14;
  uVar5 = uVar11 & 0xf;
  puVar7 = (undefined4 *)(&DAT_0090df10)[uVar5];
  iVar8 = FUN_00464e60(param_1 + 0x14,local_8,iVar6,uVar11 & 0x40,uVar11 & 0x80,&param_4);
  if (iVar8 != 0) {
    iVar10 = 0;
    if ((uVar11 & 0x40) != 0) {
      iVar10 = (int)(local_8 - (iVar8 + iVar6 & local_8 - 1)) % (int)local_8;
    }
    puVar1 = (undefined4 *)(iVar10 + iVar8);
    piVar2 = (int *)puVar7[4];
    *piVar2 = (int)puVar1;
    puVar7[4] = puVar1;
    *(short *)((int)puVar1 + 10) = (short)iVar10;
    puVar1[1] = piVar2;
    *puVar1 = puVar7 + 3;
    *(byte *)(puVar1 + 2) = (byte)uVar11 & 0xf;
    *(undefined1 *)((int)puVar1 + 9) = 0x22;
    puVar1[3] = param_4;
    puVar1[4] = param_1;
    if (DAT_0090e678 == DAT_008ed3b4) {
      pcVar4 = (code *)swi(3);
      puVar7 = (undefined4 *)(*pcVar4)();
      return puVar7;
    }
    DAT_0090e678 = DAT_0090e678 + 1;
    return puVar1 + 5;
  }
  if ((&DAT_0090df10)[uVar5] == 0) {
    iVar8 = (&DAT_0090de50)[uVar5 * 3];
    if (iVar8 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)(iVar8 + 0x18))(*(undefined4 *)(iVar8 + 4));
    }
  }
  else {
    uVar9 = FUN_00463e10();
  }
  uVar3 = *puVar7;
  uVar9 = FUN_00464080(uVar11,uVar9);
  FUN_00464780("ERROR:  Out of memory in pool %s allocating %s (size = %d).  Largest possible = %d  Total = %d\n"
               ,uVar3,param_2,param_1,uVar9);
  pcVar4 = (code *)swi(3);
  puVar7 = (undefined4 *)(*pcVar4)();
  return puVar7;
}

