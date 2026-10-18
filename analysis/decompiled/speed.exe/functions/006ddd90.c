/* speed.exe 006ddd90 FUN_006ddd90; analysis pseudocode, not buildable source.
 * calls 006d99c0 FUN_006d99c0
 * calls 00652b10 thunk_FUN_007c7250
 * calls 00652ad0 _malloc
 * calls 00460d60 FUN_00460d60
 */

void __fastcall FUN_006ddd90(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  int unaff_ESI;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  int local_1c;
  
  piVar2 = (int *)*param_1;
  piVar4 = piVar2 + 6;
  if ((piVar2[6] != 0) && (piVar2[6] != 0)) {
    FUN_006d99c0(piVar2[6]);
    iVar5 = *piVar2;
    piVar15 = (int *)piVar2[1];
    piVar2[6] = 0;
    *piVar15 = iVar5;
    *(int **)(iVar5 + 4) = piVar15;
  }
  iVar5 = FUN_00460d60(param_1 + 3,"SFX_TRACKBARRIER",0x10);
  if ((iVar5 == 0) && (*(char *)(param_1 + 0x15) != '\0')) {
    *(undefined1 *)(param_1 + 0x15) = 2;
  }
  pbVar11 = (byte *)param_1[0x1c];
  if (pbVar11 == (byte *)0x0) {
    return;
  }
  puVar6 = (undefined4 *)piVar2[5];
  if (puVar6 == (undefined4 *)0x29) {
    iVar5 = param_1[0x1d];
    puVar6 = _malloc(param_1[0xe] << 2);
    local_1c = 0;
    if ('\0' < *(char *)((int)param_1 + 0x4e)) {
      do {
        iVar7 = ((int)*(short *)((int)param_1 + 0x46) >> ((byte)local_1c & 0x1f)) *
                ((int)*(short *)(param_1 + 0x11) >> ((byte)local_1c & 0x1f));
        if (0 < iVar7) {
          do {
            *puVar6 = *(undefined4 *)(iVar5 + (uint)*pbVar11 * 4);
            puVar6 = puVar6 + 1;
            pbVar11 = pbVar11 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        local_1c = local_1c + 1;
      } while (local_1c < *(char *)((int)param_1 + 0x4e));
    }
    puVar6 = (undefined4 *)0x15;
    *(undefined1 *)((int)param_1 + 0x4a) = 0x20;
  }
  if (DAT_00982ae8 != '\0') {
    *piVar4 = 0;
    return;
  }
  iVar5 = 0;
  bVar3 = false;
  if ((param_1[0x1a] != 0) && (*(int *)(param_1[0x1a] + 0x10) == 0x3e871f1)) {
    bVar3 = true;
  }
  if ((0 < DAT_00982ae0) && (!bVar3)) {
    cVar1 = *(char *)((int)param_1 + 0x4e);
    iVar7 = DAT_00982ae0;
    if (cVar1 <= DAT_00982ae0) {
      if (cVar1 < '\x02') goto LAB_006ddf2e;
      iVar7 = cVar1 + -1;
    }
    iVar5 = iVar7;
    if (iVar7 != 0) {
      *(short *)(param_1 + 0x11) = (short)((int)*(short *)(param_1 + 0x11) / (iVar7 * 2));
      *(short *)((int)param_1 + 0x46) = (short)((int)*(short *)((int)param_1 + 0x46) / (iVar7 * 2));
    }
  }
LAB_006ddf2e:
  puVar18 = (undefined4 *)0x0;
  iVar7 = 0;
  iVar8 = (int)*(short *)((int)param_1 + 0x46);
  piVar15 = DAT_00982bdc;
  (**(code **)(*DAT_00982bdc + 0x5c))
            (DAT_00982bdc,(int)*(short *)(param_1 + 0x11),iVar8,
             *(char *)((int)param_1 + 0x4e) - iVar5,0,puVar6,1,piVar4);
  if (*piVar4 != 0) {
    *DAT_00987ec4 = (int)piVar2;
    piVar4 = piVar2;
    piVar2[1] = (int)DAT_00987ec4;
    DAT_00987ec4 = piVar4;
    *piVar2 = (int)&DAT_00987ec0;
    iVar9 = (int)*(char *)((int)param_1 + 0x4e);
    puVar13 = puVar18;
    if (0 < iVar5) {
      iVar9 = iVar9 - iVar5;
      do {
        puVar13 = (undefined4 *)((int)puVar13 + iVar7);
        iVar7 = (int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = 0;
    if (0 < iVar9) {
      puVar17 = (undefined4 *)0x0;
      do {
        iVar7 = 0;
        puVar16 = puVar13;
        (**(code **)(*(int *)*puVar6 + 0x4c))((int *)*puVar6,iVar5,&stack0xffffffd4,0);
        uVar12 = iVar7 >> ((byte)iVar8 & 0x1f);
        puVar14 = puVar17;
        for (uVar10 = uVar12 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar14 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
        }
        for (uVar10 = uVar12 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar14 = *(undefined1 *)puVar13;
          puVar13 = (undefined4 *)((int)puVar13 + 1);
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
        (**(code **)(*(int *)*piVar15 + 0x50))((int *)*piVar15,iVar5);
        puVar13 = (undefined4 *)((int)puVar16 + uVar12);
        iVar5 = iVar5 + 1;
        puVar17 = (undefined4 *)((int)puVar17 + 2);
      } while (iVar5 < iVar9);
    }
    if (unaff_ESI != 0) {
      thunk_FUN_007c7250(puVar18);
    }
  }
  return;
}

