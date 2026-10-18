/* speed.exe 004a25e0 FUN_004a25e0; analysis pseudocode, not buildable source.
 * calls 00491dd0 FUN_00491dd0
 */

void __thiscall FUN_004a25e0(int *param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  uint *puVar14;
  int local_14;
  
  puVar2 = (undefined4 *)*param_1;
  iVar10 = puVar2[7];
  iVar3 = puVar2[5];
  param_2 = param_2 - param_1[4];
  local_14 = 0;
  if (*(short *)(iVar10 + 0x30) != 0) {
    piVar12 = (int *)(puVar2[6] + 0x10);
    do {
      if (piVar12[-3] == 9) {
        iVar4 = piVar12[3];
        piVar11 = (int *)*piVar12;
        for (iVar7 = (int)(piVar12[1] + (piVar12[1] >> 0x1f & 7U)) >> 3; iVar7 != 0;
            iVar7 = iVar7 + -1) {
          piVar13 = (int *)(((uint)piVar11[1] >> 8) * 0x10 + iVar3);
          puVar14 = (uint *)(*piVar11 + iVar4);
          bVar1 = *(byte *)((int)piVar13 + 0xd);
          puVar6 = DAT_009117e4;
          iVar9 = param_2;
          if (bVar1 == 2) {
            for (; puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)*puVar6) {
              if ((puVar6 != puVar2) && (iVar8 = FUN_00491dd0(puVar2[2] + *piVar13), iVar8 != 0)) {
                iVar9 = iVar8 - *puVar14;
                break;
              }
            }
LAB_004a26c4:
            switch((char)piVar11[1]) {
            case '\x02':
              *puVar14 = *puVar14 + iVar9;
              break;
            case '\x04':
              uVar5 = *puVar14;
              *puVar14 = ((int)(iVar9 + (uVar5 & 0x3ffffff) * 4) >> 2 ^ uVar5) & 0x3ffffff ^ uVar5;
              break;
            case '\x05':
              iVar9 = iVar9 >> 0x10;
            case '\x06':
              *(short *)puVar14 = (short)*puVar14 + (short)iVar9;
            }
          }
          else if ((bVar1 < 3) || (5 < bVar1)) goto LAB_004a26c4;
          piVar11 = piVar11 + 2;
        }
      }
      if (*piVar12 != 0) {
        *piVar12 = *piVar12 + param_2;
      }
      if (piVar12[2] != 0) {
        piVar12[2] = piVar12[2] + param_2;
      }
      if (piVar12[3] != 0) {
        piVar12[3] = piVar12[3] + param_2;
      }
      local_14 = local_14 + 1;
      piVar12 = piVar12 + 10;
    } while (local_14 < (int)(uint)*(ushort *)(iVar10 + 0x30));
  }
  if (puVar2[7] != 0) {
    puVar2[7] = puVar2[7] + param_2;
  }
  if (puVar2[6] != 0) {
    puVar2[6] = puVar2[6] + param_2;
  }
  if (puVar2[5] != 0) {
    puVar2[5] = puVar2[5] + param_2;
  }
  if (puVar2[2] != 0) {
    puVar2[2] = puVar2[2] + param_2;
  }
  if (param_1[4] != 0) {
    param_1[4] = param_1[4] + param_2;
  }
  if (param_1[2] != 0) {
    iVar10 = param_1[1];
    while (iVar10 = iVar10 + -1, -1 < iVar10) {
      *(int *)(param_1[2] + 4 + iVar10 * 8) = *(int *)(param_1[2] + 4 + iVar10 * 8) + param_2;
    }
  }
  iVar10 = 0;
  if (0 < param_1[8]) {
    do {
      piVar12 = *(int **)(param_1[10] + iVar10 * 4);
      *piVar12 = *piVar12 + param_2;
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_1[8]);
  }
  *(undefined1 *)(param_1 + 0xb) = 1;
  return;
}

