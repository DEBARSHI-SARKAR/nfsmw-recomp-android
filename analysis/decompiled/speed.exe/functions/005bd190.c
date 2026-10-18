/* speed.exe 005bd190 FUN_005bd190; analysis pseudocode, not buildable source.
 * calls 005b37c0 FUN_005b37c0
 * calls 005b91c0 FUN_005b91c0
 */

void __thiscall FUN_005bd190(int *param_1,undefined **param_2)

{
  char *pcVar1;
  undefined **ppuVar2;
  bool bVar3;
  undefined **ppuVar4;
  char cVar5;
  byte bVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  ushort uVar11;
  int local_14;
  char *local_10;
  undefined **local_8;
  
  ppuVar4 = param_2;
  local_10 = (char *)0x0;
  if (param_2 == (undefined **)0x0) {
    param_2 = (undefined **)0x0;
    if (param_1[1] == 0) {
      FUN_005b91c0(1);
    }
    FUN_005b37c0(*param_1,&param_2);
    return;
  }
  cVar5 = *(char *)param_2;
  local_14 = 0;
  while (cVar5 != '\0') {
    pcVar1 = local_10 + 1;
    pcVar7 = (char *)((int)ppuVar4 + (int)local_10);
    if (*pcVar7 != '\r') {
      local_14 = local_14 + 1;
    }
    local_10 = pcVar1;
    if (*pcVar7 == '\\') {
      cVar5 = *(char *)((int)ppuVar4 + (int)pcVar1);
      if (('@' < cVar5) && (cVar5 < '[')) {
        cVar5 = cVar5 + ' ';
      }
      if (cVar5 == '\0') break;
      param_2 = &PTR_DAT_008f57b0;
      pcVar7 = PTR_DAT_008f57b0;
      while (pcVar7 != (char *)0x0) {
        cVar5 = *pcVar7;
        if (cVar5 != '\0') {
          pcVar10 = (char *)((int)ppuVar4 + (int)pcVar1);
          do {
            if (*pcVar10 == '\0') break;
            if (cVar5 != *pcVar10) goto LAB_005bd284;
            cVar5 = pcVar10[(int)(pcVar7 + (1 - ((int)ppuVar4 + (int)pcVar1)))];
            pcVar10 = pcVar10 + 1;
          } while (cVar5 != '\0');
        }
        pcVar10 = pcVar7 + 1;
        do {
          cVar5 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar5 != '\0');
        pcVar7 = pcVar7 + ((int)pcVar1 - (int)pcVar10);
        bVar6 = *(byte *)((int)ppuVar4 + (int)pcVar7);
        if (bVar6 != 0) {
          while (bVar6 != 0x5c) {
            if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_005bd27e;
            bVar6 = *(byte *)((int)ppuVar4 + (int)(pcVar7 + 1));
            pcVar7 = pcVar7 + 1;
            if (bVar6 == 0) goto LAB_005bd27e;
          }
          local_10 = pcVar7 + 1;
        }
LAB_005bd27e:
        if (*(char *)((int)ppuVar4 + (int)pcVar7) == '\\') break;
LAB_005bd284:
        param_2 = param_2 + 2;
        pcVar7 = *param_2;
      }
    }
    cVar5 = *(char *)((int)ppuVar4 + (int)local_10);
  }
  if ((uint)param_1[1] < local_14 + 1U) {
    FUN_005b91c0(local_14 + 1U);
  }
  cVar5 = *(char *)ppuVar4;
  local_10 = (char *)0x0;
  local_14 = 0;
  iVar9 = 0;
  iVar8 = local_14;
  do {
    local_14 = iVar9;
    if (cVar5 == '\0') {
      *(undefined2 *)(*param_1 + local_14 * 2) = 0;
      return;
    }
    pcVar1 = local_10 + 1;
    bVar6 = *(byte *)((int)ppuVar4 + (int)local_10);
    local_10 = pcVar1;
    if (bVar6 == 0x5c) {
      uVar11 = 0;
      local_8 = &PTR_DAT_008f57b0;
      bVar3 = false;
      if (PTR_DAT_008f57b0 != (undefined *)0x0) {
        do {
          local_14 = iVar8;
          pcVar7 = *local_8;
          if (pcVar7 != (char *)0x0) {
            cVar5 = *pcVar7;
            if (cVar5 != '\0') {
              pcVar10 = (char *)((int)ppuVar4 + (int)pcVar1);
              do {
                if (*pcVar10 == '\0') break;
                if (cVar5 != *pcVar10) goto LAB_005bd3d0;
                cVar5 = pcVar10[(int)(pcVar7 + (1 - ((int)ppuVar4 + (int)pcVar1)))];
                pcVar10 = pcVar10 + 1;
              } while (cVar5 != '\0');
            }
            pcVar10 = pcVar7 + 1;
            do {
              cVar5 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar5 != '\0');
            pcVar7 = pcVar7 + ((int)pcVar1 - (int)pcVar10);
            bVar6 = *(byte *)((int)ppuVar4 + (int)pcVar7);
            if (bVar6 != 0) {
              while (bVar6 != 0x5c) {
                if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_005bd3c0;
                pcVar7 = pcVar7 + 1;
                uVar11 = (bVar6 - 0x30) + uVar11 * 10;
                bVar6 = *(byte *)((int)ppuVar4 + (int)pcVar7);
                if (bVar6 == 0) goto LAB_005bd3c0;
              }
              local_10 = pcVar7 + 1;
              bVar3 = true;
              *(ushort *)(*param_1 + local_14 * 2) = uVar11 & 0xff | *(ushort *)(local_8 + 1);
              local_14 = local_14 + 1;
            }
LAB_005bd3c0:
            if (*(char *)((int)ppuVar4 + (int)pcVar7) == '\\') break;
          }
LAB_005bd3d0:
          ppuVar2 = local_8 + 2;
          local_8 = local_8 + 2;
          iVar8 = local_14;
        } while (*ppuVar2 != (undefined *)0x0);
        iVar9 = local_14;
        iVar8 = local_14;
        if (bVar3) goto LAB_005bd407;
      }
      bVar6 = *(byte *)((int)ppuVar4 + (int)(local_10 + -1));
      iVar8 = *param_1;
LAB_005bd3fe:
      *(ushort *)(iVar8 + local_14 * 2) = (ushort)bVar6;
      iVar9 = local_14 + 1;
      iVar8 = local_14 + 1;
    }
    else {
      iVar9 = local_14;
      if (bVar6 != 0xd) {
        iVar8 = *param_1;
        goto LAB_005bd3fe;
      }
    }
LAB_005bd407:
    local_14 = iVar8;
    cVar5 = *(char *)((int)ppuVar4 + (int)local_10);
    iVar8 = local_14;
  } while( true );
}

