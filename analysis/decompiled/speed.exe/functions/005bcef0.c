/* speed.exe 005bcef0 FUN_005bcef0; analysis pseudocode, not buildable source.
 * calls 005b37c0 FUN_005b37c0
 * calls 005b91c0 FUN_005b91c0
 */

void __thiscall FUN_005bcef0(int *param_1,undefined **param_2)

{
  char *pcVar1;
  undefined **ppuVar2;
  bool bVar3;
  undefined **ppuVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  ushort uVar10;
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
    pcVar6 = (char *)((int)ppuVar4 + (int)local_10);
    if (*pcVar6 != '\r') {
      local_14 = local_14 + 1;
    }
    local_10 = pcVar1;
    if (*pcVar6 == '\\') {
      cVar5 = *(char *)((int)ppuVar4 + (int)pcVar1);
      if (('@' < cVar5) && (cVar5 < '[')) {
        cVar5 = cVar5 + ' ';
      }
      if (cVar5 == '\0') break;
      param_2 = &PTR_DAT_008f57b0;
      pcVar6 = PTR_DAT_008f57b0;
      while (pcVar6 != (char *)0x0) {
        cVar5 = *pcVar6;
        if (cVar5 != '\0') {
          pcVar9 = (char *)((int)ppuVar4 + (int)pcVar1);
          do {
            if (*pcVar9 == '\0') break;
            if (cVar5 != *pcVar9) goto LAB_005bcfe4;
            cVar5 = pcVar9[(int)(pcVar6 + (1 - ((int)ppuVar4 + (int)pcVar1)))];
            pcVar9 = pcVar9 + 1;
          } while (cVar5 != '\0');
        }
        pcVar9 = pcVar6 + 1;
        do {
          cVar5 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar5 != '\0');
        pcVar6 = pcVar6 + ((int)pcVar1 - (int)pcVar9);
        cVar5 = *(char *)((int)ppuVar4 + (int)pcVar6);
        if (cVar5 != '\0') {
          while (cVar5 != '\\') {
            if ((cVar5 < '0') || ('9' < cVar5)) goto LAB_005bcfde;
            cVar5 = *(char *)((int)ppuVar4 + (int)(pcVar6 + 1));
            pcVar6 = pcVar6 + 1;
            if (cVar5 == '\0') goto LAB_005bcfde;
          }
          local_10 = pcVar6 + 1;
        }
LAB_005bcfde:
        if (*(char *)((int)ppuVar4 + (int)pcVar6) == '\\') break;
LAB_005bcfe4:
        param_2 = param_2 + 2;
        pcVar6 = *param_2;
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
  iVar8 = 0;
  iVar7 = local_14;
  do {
    local_14 = iVar8;
    if (cVar5 == '\0') {
      *(undefined2 *)(*param_1 + local_14 * 2) = 0;
      return;
    }
    pcVar1 = local_10 + 1;
    cVar5 = *(char *)((int)ppuVar4 + (int)local_10);
    local_10 = pcVar1;
    if (cVar5 == '\\') {
      uVar10 = 0;
      local_8 = &PTR_DAT_008f57b0;
      bVar3 = false;
      if (PTR_DAT_008f57b0 != (undefined *)0x0) {
        do {
          local_14 = iVar7;
          pcVar6 = *local_8;
          if (pcVar6 != (char *)0x0) {
            cVar5 = *pcVar6;
            if (cVar5 != '\0') {
              pcVar9 = (char *)((int)ppuVar4 + (int)pcVar1);
              do {
                if (*pcVar9 == '\0') break;
                if (cVar5 != *pcVar9) goto LAB_005bd130;
                cVar5 = pcVar9[(int)(pcVar6 + (1 - ((int)ppuVar4 + (int)pcVar1)))];
                pcVar9 = pcVar9 + 1;
              } while (cVar5 != '\0');
            }
            pcVar9 = pcVar6 + 1;
            do {
              cVar5 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar5 != '\0');
            pcVar6 = pcVar6 + ((int)pcVar1 - (int)pcVar9);
            cVar5 = *(char *)((int)ppuVar4 + (int)pcVar6);
            if (cVar5 != '\0') {
              while (cVar5 != '\\') {
                if ((cVar5 < '0') || ('9' < cVar5)) goto LAB_005bd120;
                pcVar6 = pcVar6 + 1;
                uVar10 = cVar5 + -0x30 + uVar10 * 10;
                cVar5 = *(char *)((int)ppuVar4 + (int)pcVar6);
                if (cVar5 == '\0') goto LAB_005bd120;
              }
              local_10 = pcVar6 + 1;
              bVar3 = true;
              *(ushort *)(*param_1 + local_14 * 2) = uVar10 & 0xff | *(ushort *)(local_8 + 1);
              local_14 = local_14 + 1;
            }
LAB_005bd120:
            if (*(char *)((int)ppuVar4 + (int)pcVar6) == '\\') break;
          }
LAB_005bd130:
          ppuVar2 = local_8 + 2;
          local_8 = local_8 + 2;
          iVar7 = local_14;
        } while (*ppuVar2 != (undefined *)0x0);
        iVar8 = local_14;
        iVar7 = local_14;
        if (bVar3) goto LAB_005bd167;
      }
      cVar5 = *(char *)((int)ppuVar4 + (int)(local_10 + -1));
      iVar7 = *param_1;
LAB_005bd15e:
      *(short *)(iVar7 + local_14 * 2) = (short)cVar5;
      iVar8 = local_14 + 1;
      iVar7 = local_14 + 1;
    }
    else {
      iVar8 = local_14;
      if (cVar5 != '\r') {
        iVar7 = *param_1;
        goto LAB_005bd15e;
      }
    }
LAB_005bd167:
    local_14 = iVar7;
    cVar5 = *(char *)((int)ppuVar4 + (int)local_10);
    iVar7 = local_14;
  } while( true );
}

