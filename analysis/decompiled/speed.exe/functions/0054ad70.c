/* speed.exe 0054ad70 FUN_0054ad70; analysis pseudocode, not buildable source.
 * calls 00793850 FUN_00793850
 * calls 005392b0 FUN_005392b0
 * calls 0079a150 FUN_0079a150
 * calls 0079bac0 FUN_0079bac0
 * calls 0078bcc0 FUN_0078bcc0
 * calls 00538d30 FUN_00538d30
 * calls 00538280 FUN_00538280
 * calls 00538540 FUN_00538540
 * calls 00790920 FUN_00790920
 * calls 0078c240 FUN_0078c240
 * calls 0079f090 FUN_0079f090
 * calls 00539380 FUN_00539380
 * calls 00538ff0 FUN_00538ff0
 * calls 0083f560 FUN_0083f560
 * calls 0078c380 FUN_0078c380
 * calls 00538990 FUN_00538990
 * calls 007938a0 FUN_007938a0
 */

void FUN_0054ad70(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  FUN_0079bac0();
  FUN_0079f090();
  if (*(int *)(DAT_0091cf90 + 0x13c) == 0) {
    uVar6 = 0;
  }
  else {
    iVar1 = FUN_0078c240();
    if (((iVar1 == 0) || (iVar1 = FUN_0078c380(0), iVar1 == 0)) ||
       (iVar1 = FUN_0078c380(0), *(int *)(iVar1 + 0x88) != 3)) {
      uVar6 = 0xffffffff;
    }
    else {
      iVar1 = FUN_0078c380(0);
      iVar1 = FUN_0083f560(*(undefined4 *)(iVar1 + 0x9c));
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
    }
  }
  FUN_0079a150(uVar6);
  iVar1 = FUN_0078bcc0();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_0078bcc0(), 0 < *piVar2)) {
    iVar5 = 0;
    iVar1 = FUN_0078bcc0();
    iVar1 = *(int *)(iVar1 + 0x24);
    if (0 < iVar1) {
      do {
        iVar3 = FUN_00793850(iVar5);
        iVar4 = FUN_00790920(iVar5);
        if (iVar4 == 0) {
LAB_0054ae36:
          FUN_00538ff0(iVar5 + 1);
          FUN_005392b0(iVar5 + 1);
        }
        else {
          if (iVar5 == 0) {
            if (iVar3 != 0) goto LAB_0054ae89;
          }
          else {
            if (iVar3 == 0) goto LAB_0054ae36;
LAB_0054ae89:
            if (iVar3 != 3) {
              FUN_00538ff0(iVar5 + 1);
              FUN_00539380(iVar5 + 1);
              goto LAB_0054ae49;
            }
          }
          iVar3 = iVar5 + 1;
          FUN_005392b0(iVar3);
          iVar4 = FUN_007938a0(iVar5);
          if (iVar4 < 0) {
            FUN_00538d30(iVar3);
          }
          else if (iVar4 < 0x33) {
            FUN_00538280(iVar3);
          }
          else if (iVar4 < 0x97) {
            FUN_00538540(iVar3);
          }
          else {
            FUN_00538990(iVar3);
          }
        }
LAB_0054ae49:
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
      if (3 < iVar5) goto LAB_0054ae77;
    }
    iVar1 = 4 - iVar5;
    do {
      iVar5 = iVar5 + 1;
      FUN_00538ff0(iVar5);
      FUN_005392b0(iVar5);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
LAB_0054ae77:
  FUN_00538ff0(1);
  return;
}

