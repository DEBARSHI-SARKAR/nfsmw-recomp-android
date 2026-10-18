/* speed.exe 00614770 FUN_00614770; analysis pseudocode, not buildable source.
 * calls 00614510 FUN_00614510
 * calls 00613880 FUN_00613880
 * calls 00606980 FUN_00606980
 * calls 006143d0 FUN_006143d0
 */

void FUN_00614770(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = FUN_006143d0();
  if ((uVar3 != 0) && (uVar3 != *(byte *)(param_2 + 0x44))) {
    FUN_00613880(*param_1,"bad nupvalues in %s: read %d; expected %d",param_1[4],uVar3,
                 (uint)*(byte *)(param_2 + 0x44));
  }
  iVar6 = *param_1;
  uVar2 = uVar3 * 4;
  iVar5 = 0;
  if (uVar2 == 0) {
LAB_006147b6:
    iVar5 = 0;
  }
  else {
    if (uVar2 < 0xfffffffd) {
      iVar5 = (*DAT_0091e0e0)(iVar6,0,0,uVar2,8);
      if (iVar5 == 0) {
        if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00606980(iVar6,4);
        }
        goto LAB_006147b6;
      }
    }
    else {
      FUN_00613880(iVar6,"memory allocation error: block too big");
    }
    if (iVar6 != 0) {
      piVar1 = (int *)(*(int *)(iVar6 + 0x10) + 0x24);
      *piVar1 = *piVar1 + uVar2;
    }
  }
  iVar6 = 0;
  *(int *)(param_2 + 0x1c) = iVar5;
  *(uint *)(param_2 + 0x24) = uVar3;
  if (0 < (int)uVar3) {
    do {
      uVar4 = FUN_00614510();
      *(undefined4 *)(*(int *)(param_2 + 0x1c) + iVar6 * 4) = uVar4;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar3);
  }
  return;
}

