/* speed.exe 0050d320 FUN_0050d320; analysis pseudocode, not buildable source.
 * calls 0050cff0 FUN_0050cff0
 * calls 00463ca0 FUN_00463ca0
 * calls 00508060 FUN_00508060
 * calls 00508c30 FUN_00508c30
 * calls 004fee70 FUN_004fee70
 * calls 005094c0 FUN_005094c0
 * calls 0050af90 FUN_0050af90
 * calls 0050ce20 FUN_0050ce20
 */

void __thiscall FUN_0050d320(int param_1,undefined4 param_2)

{
  ushort *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (DAT_008f86ec == '\0') {
    return;
  }
  FUN_0050cff0();
  FUN_0050ce20();
  FUN_004fee70();
  puVar3 = *(undefined4 **)(param_1 + 0x378);
joined_r0x0050d356:
  do {
    puVar4 = puVar3;
    if (puVar4 == (undefined4 *)(param_1 + 0x378)) {
      FUN_00508c30(param_2);
      return;
    }
    uVar2 = puVar4[6];
    puVar3 = (undefined4 *)*puVar4;
    if ((uVar2 & 1) == 0) {
      if (((uVar2 & 0x40000000) != 0) && ((uVar2 & 0x80000) == 0)) {
        if (*(short *)(puVar4 + 7) != 0) {
          puVar5 = (undefined4 *)puVar4[2];
          iVar6 = 0;
          if (puVar5 != puVar4 + 2) {
            do {
              puVar1 = (ushort *)(puVar5 + 7);
              puVar5 = (undefined4 *)*puVar5;
              iVar6 = iVar6 + (uint)*puVar1;
            } while (puVar5 != puVar4 + 2);
            if (iVar6 != 0) goto LAB_0050d3bd;
          }
        }
        iVar6 = puVar4[0x1d];
        puVar4[0x1d] = iVar6 + 1U;
        if (10 < iVar6 + 1U) {
          FUN_00508060();
        }
      }
    }
    else {
      FUN_0050af90(param_2);
    }
LAB_0050d3bd:
    if ((*(short *)(puVar4 + 7) == 0) && ((*(byte *)(puVar4 + 6) & 2) == 0)) {
      FUN_005094c0();
      FUN_00463ca0(DAT_00916068,puVar4);
    }
  } while (((uint)puVar4[6] >> 0x13 & 1) == 0);
  if (*(short *)(puVar4 + 7) != 0) {
    puVar5 = (undefined4 *)puVar4[2];
    iVar6 = 0;
    if (puVar5 != puVar4 + 2) {
      do {
        puVar1 = (ushort *)(puVar5 + 7);
        puVar5 = (undefined4 *)*puVar5;
        iVar6 = iVar6 + (uint)*puVar1;
      } while (puVar5 != puVar4 + 2);
      if (iVar6 != 0) goto joined_r0x0050d356;
    }
  }
  FUN_005094c0();
  FUN_00463ca0(DAT_00916068,puVar4);
  goto joined_r0x0050d356;
}

