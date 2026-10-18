/* speed.exe 0060bf90 FUN_0060bf90; analysis pseudocode, not buildable source.
 * calls 00607c40 FUN_00607c40
 * calls 00607fe0 FUN_00607fe0
 * calls 00613880 FUN_00613880
 * calls 007c4b80 FUN_007c4b80
 * calls 0060bd50 FUN_0060bd50
 * calls 00607cb0 FUN_00607cb0
 * calls 0060b630 FUN_0060b630
 */

/* WARNING: Removing unreachable block (ram,0x0060c062) */

void FUN_0060bf90(int param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_4;
  
  local_4 = 0;
LAB_0060bfa5:
  iVar1 = *param_2;
  if (iVar1 != 5) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x58);
    if (iVar1 == 5) {
      piVar5 = (int *)(*(int *)(*(int *)(param_2[1] + 8) + 0x10) +
                      ((1 << (*(byte *)(*(int *)(param_2[1] + 8) + 7) & 0x1f)) - 1U &
                      *(uint *)(iVar3 + 8)) * 0x14);
      do {
        if ((*piVar5 == 4) && (piVar5[1] == iVar3)) goto LAB_0060c1d5;
        piVar5 = (int *)piVar5[4];
      } while (piVar5 != (int *)0x0);
LAB_0060c155:
      piVar5 = &DAT_008a3c5c;
      goto LAB_0060c15a;
    }
    if (iVar1 == 7) {
      piVar5 = (int *)(*(int *)(*(int *)(param_2[1] + 8) + 0x10) +
                      ((1 << (*(byte *)(*(int *)(param_2[1] + 8) + 7) & 0x1f)) - 1U &
                      *(uint *)(iVar3 + 8)) * 0x14);
      do {
        if ((*piVar5 == 4) && (piVar5[1] == iVar3)) goto LAB_0060c1d5;
        piVar5 = (int *)piVar5[4];
      } while (piVar5 != (int *)0x0);
      goto LAB_0060c155;
    }
    piVar5 = &DAT_008a3c5c;
    goto LAB_0060c15f;
  }
  iVar1 = param_2[1];
  if (*param_3 == 3) {
    iVar3 = FUN_007c4b80();
    if ((float)param_3[1] != (float)iVar3) goto LAB_0060c027;
    piVar2 = (int *)FUN_00607cb0(iVar1,iVar3);
  }
  else if (*param_3 == 4) {
    piVar2 = (int *)(*(int *)(iVar1 + 0x10) +
                    ((1 << (*(byte *)(iVar1 + 7) & 0x1f)) - 1U & *(uint *)(param_3[1] + 8)) * 0x14);
    do {
      if ((*piVar2 == 4) && (piVar2[1] == param_3[1])) {
        piVar2 = piVar2 + 2;
        goto LAB_0060c030;
      }
      piVar2 = (int *)piVar2[4];
    } while (piVar2 != (int *)0x0);
    piVar2 = &DAT_008a3c5c;
  }
  else {
LAB_0060c027:
    piVar2 = (int *)FUN_00607c40(iVar1);
  }
LAB_0060c030:
  *(undefined1 *)(iVar1 + 6) = 0;
  if (piVar2 == &DAT_008a3c5c) {
    if (*param_3 == 0) {
      FUN_00613880(param_1,"table index is nil");
    }
    piVar2 = (int *)FUN_0060bd50(param_1,iVar1,param_3);
  }
  if (*piVar2 != 0) {
LAB_0060c0ed:
    *piVar2 = *param_4;
    piVar2[1] = param_4[1];
    return;
  }
  iVar1 = *(int *)(iVar1 + 8);
  if ((*(byte *)(iVar1 + 6) & 2) == 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x58);
    piVar4 = (int *)(*(int *)(iVar1 + 0x10) +
                    ((1 << (*(byte *)(iVar1 + 7) & 0x1f)) - 1U & *(uint *)(iVar3 + 8)) * 0x14);
    do {
      if ((*piVar4 == 4) && (piVar4[1] == iVar3)) {
        piVar5 = piVar4 + 2;
        if (piVar4[2] == 0) {
          *(byte *)(iVar1 + 6) = *(byte *)(iVar1 + 6) | 2;
          piVar5 = (int *)0x0;
        }
        goto LAB_0060c0e5;
      }
      piVar4 = (int *)piVar4[4];
    } while (piVar4 != (int *)0x0);
    *(byte *)(iVar1 + 6) = *(byte *)(iVar1 + 6) | 2;
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)0x0;
  }
LAB_0060c0e5:
  if (piVar5 == (int *)0x0) goto LAB_0060c0ed;
  goto LAB_0060c172;
LAB_0060c1d5:
  piVar5 = piVar5 + 2;
LAB_0060c15a:
  if (*piVar5 == 0) {
LAB_0060c15f:
    FUN_0060b630(param_1,param_2,"index");
  }
LAB_0060c172:
  param_2 = piVar5;
  if (*param_2 == 6) {
    FUN_00607fe0(param_2);
    return;
  }
  local_4 = local_4 + 1;
  if (100 < local_4) {
    FUN_00613880(param_1,"loop in settable");
    return;
  }
  goto LAB_0060bfa5;
}

