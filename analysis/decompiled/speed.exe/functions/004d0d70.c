/* speed.exe 004d0d70 FUN_004d0d70; analysis pseudocode, not buildable source.
 * calls 004aeaa0 FUN_004aeaa0
 * calls 004d92a0 FUN_004d92a0
 * calls 004b2510 FUN_004b2510
 * calls 0081c4d8 FUN_0081c4d8
 * calls 004d0cd0 FUN_004d0cd0
 * calls 004f1ec0 FUN_004f1ec0
 * calls 004d9680 FUN_004d9680
 * calls 005dca00 FUN_005dca00
 * calls 004e5c80 FUN_004e5c80
 * calls 005faa20 FUN_005faa20
 * calls 004b24f0 FUN_004b24f0
 * calls 004e3f80 FUN_004e3f80
 * calls 004d9540 FUN_004d9540
 * calls 006e8df0 FUN_006e8df0
 * calls 004c74f0 FUN_004c74f0
 * calls 004d0c40 FUN_004d0c40
 * calls 004df0b0 FUN_004df0b0
 * calls 004f1f60 FUN_004f1f60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d0d70(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (DAT_008f86f8 == 0) {
    return;
  }
  if (((DAT_008ee5bc != '\0') && (DAT_00911fa8 != 0)) && ((DAT_00911fe8 & 0x1000) == 0)) {
    _DAT_00911fec = DAT_00911fe8;
    DAT_00911fe8 = DAT_00911fe8 | 0x1000;
    uVar3 = 0;
    DAT_00911ff4 = DAT_00911ff0;
    iVar2 = 0;
    do {
      if ((DAT_00911fe8 & 1 << ((byte)iVar2 & 0x1f)) != 0) {
        uVar3 = uVar3 | (&DAT_008ee570)[iVar2];
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x12);
    iVar2 = 0;
    DAT_00911ff0 = uVar3;
    do {
      uVar3 = 1 << ((byte)iVar2 & 0x1f);
      if (((uVar3 & (DAT_00911ff0 ^ DAT_00911ff4)) != 0) &&
         (iVar1 = *(int *)(DAT_00911fa8 + 0x80), iVar1 != 0)) {
        if ((DAT_00911ff0 & uVar3) == 0) {
          if (iVar2 == 0) {
            iVar1 = *(int *)(iVar1 + 0x18);
          }
          else if (iVar2 == 1) {
            iVar1 = *(int *)(iVar1 + 0x14);
          }
          else {
            if (iVar2 != 2) goto LAB_004d0e77;
            iVar1 = *(int *)(iVar1 + 0x1c);
          }
          if (iVar1 != 0) {
            FUN_004b2510();
          }
        }
        else {
          if (iVar2 == 0) {
            iVar1 = *(int *)(iVar1 + 0x18);
          }
          else if (iVar2 == 1) {
            iVar1 = *(int *)(iVar1 + 0x14);
          }
          else {
            if (iVar2 != 2) goto LAB_004d0e77;
            iVar1 = *(int *)(iVar1 + 0x1c);
          }
          if (iVar1 != 0) {
            FUN_004b24f0();
          }
        }
      }
LAB_004d0e77:
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xd);
  }
  if (DAT_00911ff9 != '\0') {
    if (*(undefined4 **)(param_1 + 0x5c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x5c))(1);
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    iVar2 = 0x14;
    do {
      iVar1 = *(int *)(iVar2 + *(int *)(param_1 + 0x80));
      if ((iVar1 != 0) && (iVar2 != 0x18)) {
        FUN_0081c4d8(*(undefined4 *)(iVar1 + 0x18));
        FUN_0081c4d8(*(undefined4 *)(*(int *)(iVar2 + *(int *)(param_1 + 0x80)) + 0x18));
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x24);
    iVar2 = 0;
    do {
      if (iVar2 == 1) {
        FUN_004d9540();
      }
      else if ((int *)(&DAT_00911f60)[iVar2] != (int *)0x0) {
        (**(code **)(*(int *)(&DAT_00911f60)[iVar2] + 0x18))();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xd);
    if (*(char *)(*(int *)(param_1 + 0x84) + 0x34) != '\0') {
      FUN_004e3f80();
    }
    FUN_004d0c40();
    _DAT_00912320 = DAT_00912324;
    DAT_00911ee0 = 0;
    DAT_00911ed4 = 0;
    DAT_00911ed8 = 0;
    _DAT_00911edc = 0;
  }
  if (*(int *)(param_1 + 100) != 1) {
    DAT_00911ee0 = DAT_00911ee0 + 1;
  }
  FUN_004e5c80();
  FUN_004d0cd0(DAT_00911ff9 == '\0');
  DAT_00911ff9 = 1;
  DAT_009142a4 = 0;
  DAT_009142a0 = 0;
  if (DAT_00911ffa != '\0') goto LAB_004d106d;
  DAT_00911ffa = '\x01';
  if (DAT_0091e000 == 0) {
    iVar2 = FUN_005dca00();
  }
  else {
    iVar2 = *(int *)(DAT_0091e000 + 0x1968);
  }
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x70) = 7;
    iVar2 = FUN_006e8df0();
    if (iVar2 == 1) {
      uVar4 = 2;
    }
    else {
LAB_004d1066:
      uVar4 = 0;
    }
  }
  else {
    iVar2 = FUN_005faa20();
    if (iVar2 == 2) {
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
      *(undefined4 *)(param_1 + 0x70) = 2;
      iVar2 = FUN_006e8df0();
      if (iVar2 == 1) {
        uVar4 = 3;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      iVar1 = FUN_004aeaa0(0x40010010);
      if (iVar1 != 0) {
        FUN_004df0b0();
      }
      if (iVar2 == 8) {
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
        *(undefined4 *)(param_1 + 0x70) = 6;
      }
      else {
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
        *(undefined4 *)(param_1 + 0x70) = 5;
      }
      iVar2 = FUN_006e8df0();
      if (iVar2 != 1) goto LAB_004d1066;
      uVar4 = 2;
    }
  }
  FUN_004f1ec0(uVar4);
LAB_004d106d:
  FUN_004c74f0();
  FUN_004f1f60(0);
  if ((DAT_00911f64 != 0) && (iVar2 = FUN_004d9680(0), iVar2 != 0)) {
    uVar4 = 1;
    FUN_004d9680(0);
    iVar2 = FUN_004d92a0(uVar4);
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 100) == 1) {
        *(uint *)(iVar2 + 0x114) = *(uint *)(iVar2 + 0x114) | 2;
        DAT_00911f9c = 1;
        return;
      }
      *(uint *)(iVar2 + 0x114) = *(uint *)(iVar2 + 0x114) & 0xfffffffd;
    }
  }
  DAT_00911f9c = 1;
  return;
}

