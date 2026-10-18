/* speed.exe 007f5e04 FUN_007f5e04; analysis pseudocode, not buildable source.
 */

undefined * FUN_007f5e04(undefined4 param_1,char *param_2)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  short *psVar11;
  int iVar12;
  int iVar13;
  int aiStack_40 [7];
  char acStack_21 [21];
  short *local_c;
  int local_8;
  
  pcVar8 = param_2;
  if (param_2 == (char *)0x0) {
    iVar5 = 0;
  }
  else {
    pcVar4 = param_2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar5 = (int)pcVar4 - (int)(param_2 + 1);
  }
  iVar6 = 0;
  if (0 < iVar5) {
    puVar10 = &param_2;
    do {
      cVar1 = param_2[iVar6];
      if (cVar1 == 'c') {
        iVar13 = (int)*(char *)(puVar10 + 1);
LAB_007f5e55:
        puVar10 = puVar10 + 1;
        aiStack_40[iVar6] = iVar13;
      }
      else if (((cVar1 == 'd') || (cVar1 == 'p')) || (cVar1 == 's')) {
        iVar13 = puVar10[1];
        goto LAB_007f5e55;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  local_c = (short *)(*DAT_009bdd54)(param_1);
  puVar9 = (undefined *)0x0;
  if (local_c != (short *)0x0) {
    iVar5 = DAT_009bdd50 * 0x800;
    local_8 = iVar5;
    psVar11 = (short *)(&DAT_009bb550 + iVar5);
    bVar3 = false;
    do {
      if (bVar3) {
        iVar6 = *local_c + -0x31;
        if (pcVar8[iVar6] == 'd') {
          iVar5 = aiStack_40[iVar6];
          if (iVar5 < 0) {
            iVar5 = -iVar5;
            *psVar11 = 0x2d;
            psVar11 = psVar11 + 1;
          }
          iVar6 = iVar5;
          iVar13 = 0;
          do {
            iVar12 = iVar13;
            iVar6 = iVar6 / 10;
            iVar13 = iVar12 + 1;
          } while (iVar6 != 0);
          acStack_21[iVar12 + 2] = '\0';
          do {
            iVar6 = iVar13 + -1;
            acStack_21[iVar13] = (char)(iVar5 % 10) + '0';
            iVar13 = iVar6;
            iVar5 = iVar5 / 10;
          } while (iVar6 != 0);
          pcVar8 = acStack_21 + 1;
          cVar1 = acStack_21[1];
          while (iVar5 = local_8, cVar1 != '\0') {
            *psVar11 = (short)cVar1;
            psVar11 = psVar11 + 1;
            pcVar8 = pcVar8 + 1;
            cVar1 = *pcVar8;
          }
        }
        else if (pcVar8[iVar6] == 's') {
          for (psVar7 = (short *)aiStack_40[iVar6]; *psVar7 != 0; psVar7 = psVar7 + 1) {
            *psVar11 = *psVar7;
            psVar11 = psVar11 + 1;
          }
        }
        bVar3 = false;
        pcVar8 = param_2;
      }
      else {
        sVar2 = *local_c;
        if (sVar2 == 0x25) {
          bVar3 = true;
        }
        else if (sVar2 != 0x22) {
          *psVar11 = sVar2;
          psVar11 = psVar11 + 1;
        }
      }
      sVar2 = *local_c;
      local_c = local_c + 1;
    } while (sVar2 != 0);
    *psVar11 = 0;
    DAT_009bdd50 = (DAT_009bdd50 + 1) % 5;
    puVar9 = &DAT_009bb550 + iVar5;
  }
  return puVar9;
}

