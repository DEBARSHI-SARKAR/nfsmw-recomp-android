/* speed.exe 006146e0 FUN_006146e0; analysis pseudocode, not buildable source.
 * calls 00613880 FUN_00613880
 * calls 00614340 FUN_00614340
 * calls 00606980 FUN_00606980
 * calls 006143d0 FUN_006143d0
 */

void FUN_006146e0(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = FUN_006143d0();
  iVar3 = *param_1;
  uVar2 = iVar4 * 4;
  iVar5 = 0;
  if (uVar2 == 0) {
LAB_00614761:
    iVar5 = 0;
  }
  else {
    if (uVar2 < 0xfffffffd) {
      iVar5 = (*DAT_0091e0e0)(iVar3,0,0,uVar2,2);
      if (iVar5 == 0) {
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00606980(iVar3,4);
        }
        goto LAB_00614761;
      }
    }
    else {
      FUN_00613880(iVar3,"memory allocation error: block too big");
    }
    if (iVar3 != 0) {
      piVar1 = (int *)(*(int *)(iVar3 + 0x10) + 0x24);
      *piVar1 = *piVar1 + uVar2;
    }
  }
  *(int *)(param_2 + 0x14) = iVar5;
  *(int *)(param_2 + 0x30) = iVar4;
  FUN_00614340();
  return;
}

