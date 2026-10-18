/* speed.exe 005bd430 FUN_005bd430; analysis pseudocode, not buildable source.
 * calls 005b37c0 FUN_005b37c0
 * calls 005b91c0 FUN_005b91c0
 */

void __thiscall FUN_005bd430(int *param_1,undefined **param_2)

{
  char *pcVar1;
  undefined **ppuVar2;
  bool bVar3;
  undefined **ppuVar4;
  int iVar5;
  char cVar6;
  short sVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  ushort uVar11;
  short *psVar12;
  int local_14;
  char *local_10;
  undefined **local_8;
  
  ppuVar4 = param_2;
  if (param_2 == (undefined **)0x0) {
    if (param_1[1] == 0) {
      FUN_005b91c0(1);
    }
    FUN_005b37c0(*param_1,&param_2);
    return;
  }
  local_10 = (char *)0x0;
  sVar7 = *(short *)param_2;
  local_14 = 0;
  while (sVar7 != 0) {
    pcVar1 = local_10 + 1;
    sVar7 = *(short *)((int)ppuVar4 + (int)local_10 * 2);
    if (sVar7 != 0xd) {
      local_14 = local_14 + 1;
    }
    local_10 = pcVar1;
    if (sVar7 == 0x5c) {
      cVar6 = (char)*(short *)((int)ppuVar4 + (int)pcVar1 * 2);
      if (('@' < cVar6) && (cVar6 < '[')) {
        cVar6 = cVar6 + ' ';
      }
      if (cVar6 == '\0') break;
      param_2 = &PTR_DAT_008f57b0;
      pcVar8 = PTR_DAT_008f57b0;
      while (pcVar8 != (char *)0x0) {
        cVar6 = *pcVar8;
        pcVar10 = pcVar8;
        for (psVar12 = (short *)((int)ppuVar4 + (int)pcVar1 * 2); (cVar6 != '\0' && (*psVar12 != 0))
            ; psVar12 = psVar12 + 1) {
          if ((short)cVar6 != *psVar12) goto LAB_005bd544;
          cVar6 = pcVar10[1];
          pcVar10 = pcVar10 + 1;
        }
        pcVar10 = pcVar8 + 1;
        do {
          cVar6 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar6 != '\0');
        pcVar8 = pcVar8 + ((int)pcVar1 - (int)pcVar10);
        sVar7 = *(short *)((int)ppuVar4 + (int)pcVar8 * 2);
        if (sVar7 != 0) {
          while (sVar7 != 0x5c) {
            if ((sVar7 < 0x30) || (0x39 < sVar7)) goto LAB_005bd53c;
            sVar7 = *(short *)((int)ppuVar4 + (int)(pcVar8 + 1) * 2);
            pcVar8 = pcVar8 + 1;
            if (sVar7 == 0) goto LAB_005bd53c;
          }
          local_10 = pcVar8 + 1;
        }
LAB_005bd53c:
        if (*(short *)((int)ppuVar4 + (int)pcVar8 * 2) == 0x5c) break;
LAB_005bd544:
        param_2 = param_2 + 2;
        pcVar8 = *param_2;
      }
    }
    sVar7 = *(short *)((int)ppuVar4 + (int)local_10 * 2);
  }
  if ((uint)param_1[1] < local_14 + 1U) {
    FUN_005b91c0(local_14 + 1U);
  }
  local_10 = (char *)0x0;
  sVar7 = *(short *)ppuVar4;
  local_14 = 0;
  iVar9 = 0;
  iVar5 = local_14;
  do {
    local_14 = iVar9;
    if (sVar7 == 0) {
      *(undefined2 *)(*param_1 + local_14 * 2) = 0;
      return;
    }
    pcVar1 = local_10 + 1;
    sVar7 = *(short *)((int)ppuVar4 + (int)local_10 * 2);
    local_10 = pcVar1;
    if (sVar7 == 0x5c) {
      uVar11 = 0;
      local_8 = &PTR_DAT_008f57b0;
      bVar3 = false;
      if (PTR_DAT_008f57b0 != (undefined *)0x0) {
        do {
          local_14 = iVar5;
          pcVar8 = *local_8;
          if (pcVar8 != (char *)0x0) {
            cVar6 = *pcVar8;
            pcVar10 = pcVar8;
            for (psVar12 = (short *)((int)ppuVar4 + (int)pcVar1 * 2);
                (cVar6 != '\0' && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
              if ((short)cVar6 != *psVar12) goto LAB_005bd6af;
              cVar6 = pcVar10[1];
              pcVar10 = pcVar10 + 1;
            }
            pcVar10 = pcVar8 + 1;
            do {
              cVar6 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar6 != '\0');
            pcVar8 = pcVar8 + ((int)pcVar1 - (int)pcVar10);
            sVar7 = *(short *)((int)ppuVar4 + (int)pcVar8 * 2);
            if (sVar7 != 0) {
              while (sVar7 != 0x5c) {
                if ((sVar7 < 0x30) || (0x39 < sVar7)) goto LAB_005bd6a1;
                uVar11 = sVar7 + -0x30 + uVar11 * 10;
                pcVar8 = pcVar8 + 1;
                sVar7 = *(short *)((int)ppuVar4 + (int)pcVar8 * 2);
                if (sVar7 == 0) goto LAB_005bd6a1;
              }
              local_10 = pcVar8 + 1;
              bVar3 = true;
              *(ushort *)(*param_1 + local_14 * 2) = uVar11 & 0xff | *(ushort *)(local_8 + 1);
              local_14 = local_14 + 1;
            }
LAB_005bd6a1:
            if (*(short *)((int)ppuVar4 + (int)pcVar8 * 2) == 0x5c) break;
          }
LAB_005bd6af:
          ppuVar2 = local_8 + 2;
          local_8 = local_8 + 2;
          iVar5 = local_14;
        } while (*ppuVar2 != (undefined *)0x0);
        iVar9 = local_14;
        iVar5 = local_14;
        if (bVar3) goto LAB_005bd6e9;
      }
      *(short *)(*param_1 + local_14 * 2) = *(short *)((int)ppuVar4 + (int)(local_10 + -1) * 2);
LAB_005bd6e4:
      iVar9 = local_14 + 1;
      iVar5 = local_14 + 1;
    }
    else {
      iVar9 = local_14;
      if (sVar7 != 0xd) {
        *(short *)(*param_1 + local_14 * 2) = sVar7;
        goto LAB_005bd6e4;
      }
    }
LAB_005bd6e9:
    local_14 = iVar5;
    sVar7 = *(short *)((int)ppuVar4 + (int)local_10 * 2);
    iVar5 = local_14;
  } while( true );
}

