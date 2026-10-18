/* speed.exe 00614830 FUN_00614830; analysis pseudocode, not buildable source.
 * calls 00614240 FUN_00614240
 * calls 00614510 FUN_00614510
 * calls 00613880 FUN_00613880
 * calls 00606980 FUN_00606980
 * calls 00615770 FUN_00615770
 * calls 006144b0 FUN_006144b0
 * calls 006143d0 FUN_006143d0
 */

void FUN_00614830(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  int *in_EAX;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  
  iVar5 = FUN_006143d0();
  iVar8 = *in_EAX;
  uVar3 = iVar5 * 8;
  iVar7 = 0;
  if (uVar3 == 0) {
    iVar7 = 0;
  }
  else {
    if (uVar3 < 0xfffffffd) {
      iVar7 = (*DAT_0091e0e0)(iVar8,0,0,uVar3,6);
      if (iVar7 == 0) {
        if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00606980(iVar8,4);
        }
        iVar7 = 0;
        goto LAB_00614876;
      }
    }
    else {
      FUN_00613880(iVar8,"memory allocation error: block too big");
    }
    if (iVar8 != 0) {
      piVar1 = (int *)(*(int *)(iVar8 + 0x10) + 0x24);
      *piVar1 = *piVar1 + uVar3;
    }
  }
LAB_00614876:
  iVar8 = 0;
  *(int *)(param_1 + 8) = iVar7;
  *(int *)(param_1 + 0x28) = iVar5;
  if (0 < iVar5) {
    do {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 8) + iVar8 * 8);
      cVar4 = FUN_00614240();
      if (cVar4 == '\0') {
        *puVar2 = 0;
      }
      else if (cVar4 == '\x03') {
        *puVar2 = 3;
        fVar9 = (float10)FUN_006144b0();
        puVar2[1] = (float)fVar9;
      }
      else if (cVar4 == '\x04') {
        *puVar2 = 4;
        uVar6 = FUN_00614510();
        puVar2[1] = uVar6;
      }
      else {
        FUN_00613880(*in_EAX,"bad constant type (%d) in %s",cVar4,in_EAX[4]);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar5);
  }
  iVar7 = FUN_006143d0();
  iVar8 = *in_EAX;
  iVar5 = 0;
  uVar3 = iVar7 * 4;
  if (uVar3 != 0) {
    if (uVar3 < 0xfffffffd) {
      iVar5 = (*DAT_0091e0e0)(iVar8,0,0,uVar3,0xf);
      if (iVar5 == 0) {
        if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00606980(iVar8,4);
        }
        iVar5 = 0;
        goto LAB_0061495d;
      }
    }
    else {
      FUN_00613880(iVar8,"memory allocation error: block too big");
      iVar5 = 0;
    }
    if (iVar8 != 0) {
      piVar1 = (int *)(*(int *)(iVar8 + 0x10) + 0x24);
      *piVar1 = *piVar1 + uVar3;
    }
  }
LAB_0061495d:
  iVar8 = 0;
  *(int *)(param_1 + 0x10) = iVar5;
  *(int *)(param_1 + 0x34) = iVar7;
  if (0 < iVar7) {
    do {
      uVar6 = FUN_00615770();
      *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar8 * 4) = uVar6;
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar7);
  }
  return;
}

