/* speed.exe 005672f0 FUN_005672f0; analysis pseudocode, not buildable source.
 * calls 0065d530 thunk_FUN_006589a0
 * calls 00650350 FUN_00650350
 * calls 00465a70 FUN_00465a70
 * calls 004655f0 FUN_004655f0
 * calls 00658a00 FUN_00658a00
 */

void __thiscall FUN_005672f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  int iVar6;
  int local_4;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    psVar4 = (short *)(param_1 + 0x148);
    do {
      if (*(int *)(psVar4 + 2) != 0) {
        iVar1 = 0;
        if (0 < param_3) {
          do {
            if (*(short *)(param_2 + iVar1 * 2) == *psVar4) {
              if (-1 < iVar1) goto LAB_0056735b;
              break;
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < param_3);
        }
        FUN_00658a00(*(undefined4 *)(psVar4 + 2),*(undefined4 *)(psVar4 + 4),"MiniMap Chop");
        FUN_004655f0(*(undefined4 *)(psVar4 + 2));
        psVar4[2] = 0;
        psVar4[3] = 0;
        psVar4[4] = 0;
        psVar4[5] = 0;
      }
LAB_0056735b:
      iVar6 = iVar6 + 1;
      psVar4 = psVar4 + 6;
    } while (iVar6 < *(int *)(param_1 + 4));
  }
  local_4 = 0;
  if (0 < param_3) {
    do {
      iVar3 = (int)*(short *)(param_2 + local_4 * 2);
      iVar6 = *(int *)(param_1 + 4);
      piVar5 = (int *)0x0;
      iVar1 = 0;
      if (0 < iVar6) {
        piVar2 = (int *)(param_1 + 0x148);
        do {
          if (piVar2[1] == 0) {
LAB_005673af:
            piVar5 = piVar2;
          }
          else {
            if (*piVar2 == iVar3) break;
            if (piVar2[1] == 0) goto LAB_005673af;
          }
          iVar1 = iVar1 + 1;
          piVar2 = piVar2 + 3;
        } while (iVar1 < iVar6);
      }
      if (((iVar1 == iVar6) && (-1 < iVar3)) &&
         (iVar6 = *(int *)(param_1 + 0x48 + iVar3 * 4), iVar6 != 0)) {
        *piVar5 = iVar3;
        iVar1 = *(int *)(iVar6 + 8);
        piVar5[2] = iVar1;
        iVar1 = FUN_00465a70(iVar1,0x2000);
        piVar5[1] = iVar1;
        FUN_00650350(iVar6,iVar1);
        thunk_FUN_006589a0(piVar5[1],piVar5[2],"MiniMap Chop embedded");
      }
      local_4 = local_4 + 1;
    } while (local_4 < param_3);
  }
  return;
}

