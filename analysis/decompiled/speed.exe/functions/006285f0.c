/* speed.exe 006285f0 FUN_006285f0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_006285f0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  int local_4;
  
  iVar4 = *(int *)(param_1 + 0x1848);
  iVar1 = *(int *)(*(int *)(param_2 + 4) + 8);
  uVar5 = (iVar1 != 3) - 1 & 2;
  iVar1 = (uint)(iVar1 == 3) * 2 + 1;
  if (*(int *)(param_1 + 0x1844) == iVar1) {
    piVar7 = &DAT_0091f41c + iVar4 * 0xd + uVar5 * 3;
    if ((&DAT_0091f41c)[iVar4 * 0xd + uVar5 * 3] == 0) {
      *piVar7 = *param_3;
      piVar7[1] = param_3[1];
      piVar7[2] = param_3[2];
      goto LAB_0062870f;
    }
    if (*(int *)(param_1 + 0x1844) == iVar1) {
      iVar3 = 3;
      bVar9 = true;
      piVar7 = &DAT_0091f41c + iVar4 * 0xd + uVar5 * 3;
      piVar6 = param_3;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar9 = *piVar7 == *piVar6;
        piVar7 = piVar7 + 1;
        piVar6 = piVar6 + 1;
      } while (bVar9);
      if (bVar9) {
        (&DAT_0091f418)[iVar4 * 0xd + iVar1 * 3 + 1] = 0;
        (&DAT_0091f418)[iVar4 * 0xd + iVar1 * 3 + 2] = 0;
        (&DAT_0091f418)[iVar4 * 0xd + iVar1 * 3 + 3] = 0;
        goto LAB_0062870f;
      }
    }
  }
  if (*(uint *)(param_1 + 0x1844) == uVar5) {
    piVar7 = &DAT_0091f418 + iVar4 * 0xd + iVar1 * 3;
    iVar3 = 3;
    bVar9 = true;
    piVar8 = param_3;
    piVar6 = piVar7;
    do {
      piVar6 = piVar6 + 1;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar9 = *piVar6 == *piVar8;
      piVar8 = piVar8 + 1;
    } while (bVar9);
    if (bVar9) {
      piVar6 = &DAT_0091f41c + iVar4 * 0xd + uVar5 * 3;
      *piVar6 = *param_3;
      piVar6[1] = param_3[1];
      piVar6[2] = param_3[2];
      piVar7[1] = 0;
      piVar7[2] = 0;
      piVar7[3] = 0;
      goto LAB_0062870f;
    }
  }
  piVar7 = &DAT_0091f41c + iVar4 * 0xd + *(int *)(param_1 + 0x1844) * 3;
  *piVar7 = *param_3;
  piVar7[1] = param_3[1];
  piVar7[2] = param_3[2];
LAB_0062870f:
  local_4 = 0;
  puVar2 = &DAT_0091f418;
  do {
    if (local_4 != *(int *)(param_1 + 0x1848)) {
      piVar7 = puVar2 + uVar5 * 3 + 1;
      iVar4 = 3;
      bVar9 = true;
      piVar6 = piVar7;
      piVar8 = param_3;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar9 = *piVar6 == *piVar8;
        piVar6 = piVar6 + 1;
        piVar8 = piVar8 + 1;
      } while (bVar9);
      if (bVar9) {
        piVar6 = puVar2 + iVar1 * 3 + 1;
        *piVar7 = *piVar6;
        piVar7[1] = piVar6[1];
        piVar7[2] = piVar6[2];
        *piVar6 = 0;
        puVar2[iVar1 * 3 + 2] = 0;
        puVar2[iVar1 * 3 + 3] = 0;
      }
      else {
        iVar4 = 3;
        bVar9 = true;
        piVar7 = puVar2 + iVar1 * 3 + 1;
        piVar6 = param_3;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar9 = *piVar7 == *piVar6;
          piVar7 = piVar7 + 1;
          piVar6 = piVar6 + 1;
        } while (bVar9);
        if (bVar9) {
          puVar2[iVar1 * 3 + 1] = 0;
          puVar2[iVar1 * 3 + 2] = 0;
          puVar2[iVar1 * 3 + 3] = 0;
        }
      }
    }
    local_4 = local_4 + 1;
    puVar2 = puVar2 + 0xd;
    if (0x91f7f3 < (int)puVar2) {
      return;
    }
  } while( true );
}

