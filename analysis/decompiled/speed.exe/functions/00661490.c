/* speed.exe 00661490 FUN_00661490; analysis pseudocode, not buildable source.
 * calls 005856f0 FUN_005856f0
 * calls 00660100 FUN_00660100
 * calls 0045cd20 __break
 * calls 0065ffd0 FUN_0065ffd0
 * calls 0065fe90 FUN_0065fe90
 */

void __fastcall FUN_00661490(undefined4 param_1)

{
  ushort uVar1;
  short sVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  short sVar7;
  char cVar8;
  uint uVar9;
  
  if (DAT_009258d8 == 0) {
    if (DAT_009258d4 == 0) {
      return;
    }
    DAT_008ec4e0 = FUN_00660100(0x20,10,param_1);
  }
  else {
    FUN_0065fe90(DAT_008ec4e0,0x20,10);
  }
  sVar7 = 0;
  puVar6 = DAT_0092cd1c;
  if (DAT_0092cd1c != DAT_0092cd1c + DAT_0092cd24) {
    do {
      psVar3 = (short *)(**(code **)(*(int *)*puVar6 + 0xc))();
      puVar6 = puVar6 + 1;
      sVar7 = sVar7 + psVar3[4] + psVar3[2] + *psVar3;
    } while (puVar6 != DAT_0092cd1c + DAT_0092cd24);
  }
  uVar1 = FUN_005856f0();
  uVar5 = DAT_008ec4e0;
  if (DAT_00925e90 == 6) {
    uVar5 = 0;
  }
  if (DAT_009258d4 == 0) {
    if ((((DAT_009258d8 != 0) &&
         (uVar9 = DAT_00925968, FUN_0065fe90(sVar7,0x10,4), DAT_009258d8 != 0)) &&
        (FUN_0065fe90(uVar1,0x10,4), DAT_009258d8 != 0)) &&
       (FUN_0065fe90(uVar5 & 0xffff,0x10,4), DAT_009258d8 != 0)) {
      FUN_0065fe90(uVar9 & 0xffff,0x10,4);
      return;
    }
  }
  else {
    uVar9 = DAT_00925968;
    sVar2 = FUN_0065ffd0(0x10,4);
    if ((DAT_009258dc[4] <= *DAT_009258dc) && (DAT_009258d4 != 0)) {
      DAT_009258dc = (int *)0x0;
      DAT_009258d4 = 0;
    }
    cVar8 = sVar7 != sVar2;
    if (DAT_009258d4 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0065ffd0(0x10,4);
      if ((DAT_009258dc[4] <= *DAT_009258dc) && (DAT_009258d4 != 0)) {
        DAT_009258dc = (int *)0x0;
        DAT_009258d4 = 0;
      }
    }
    if (uVar1 != uVar4) {
      cVar8 = cVar8 + '\x01';
    }
    if (DAT_009258d4 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0065ffd0(0x10,4);
      if ((DAT_009258dc[4] <= *DAT_009258dc) && (DAT_009258d4 != 0)) {
        DAT_009258dc = (int *)0x0;
        DAT_009258d4 = 0;
      }
    }
    if ((uVar5 & 0xffff) != uVar4) {
      cVar8 = cVar8 + '\x01';
    }
    if (DAT_009258d4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_0065ffd0(0x10,4);
      if ((DAT_009258dc[4] <= *DAT_009258dc) && (DAT_009258d4 != 0)) {
        DAT_009258dc = (int *)0x0;
        DAT_009258d4 = 0;
      }
    }
    if ((uVar9 & 0xffff) != uVar5) {
      cVar8 = cVar8 + '\x01';
    }
    if (cVar8 != '\0') {
                    /* WARNING: Subroutine does not return */
      __break();
    }
  }
  return;
}

