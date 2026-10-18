/* speed.exe 00613130 FUN_00613130; analysis pseudocode, not buildable source.
 * calls 007c97c0 FUN_007c97c0
 * calls 00613eb0 FUN_00613eb0
 * calls 00606b60 FUN_00606b60
 * calls 006128d0 FUN_006128d0
 * calls 006075e0 FUN_006075e0
 */

int FUN_00613130(int param_1,char *param_2,int param_3)

{
  byte *pbVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  double *local_c;
  int local_4;
  
  iVar4 = param_1;
  puVar9 = *(undefined4 **)(param_1 + 8);
  iVar10 = 1;
  local_4 = 1;
  *puVar9 = 4;
  uVar5 = FUN_00613eb0(param_1,&DAT_00890978,0);
  puVar9[1] = uVar5;
  if (*(int *)(iVar4 + 0x18) - *(int *)(iVar4 + 8) < 9) {
    FUN_00606b60(iVar4,1);
  }
  pcVar12 = param_2;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar6 = FUN_007c97c0(param_2,0x25);
  if (iVar6 != 0) {
    local_c = (double *)(param_3 + -8);
    iVar11 = param_3 + -4;
    do {
      puVar9 = *(undefined4 **)(iVar4 + 8);
      *puVar9 = 4;
      uVar5 = FUN_00613eb0(iVar4,pcVar12,iVar6 - (int)pcVar12);
      puVar9[1] = uVar5;
      if (*(int *)(iVar4 + 0x18) - *(int *)(iVar4 + 8) < 9) {
        FUN_00606b60(iVar4,1);
      }
      iVar10 = *(int *)(iVar4 + 8);
      puVar9 = (undefined4 *)(iVar10 + 8);
      *(undefined4 **)(iVar4 + 8) = puVar9;
      switch(*(undefined1 *)(iVar6 + 1)) {
      case 0x25:
        iVar7 = 1;
        *puVar9 = 4;
        puVar9 = (undefined4 *)&DAT_0089cef0;
        goto LAB_006132b5;
      default:
        goto switchD_00613209_caseD_26;
      case 99:
        pbVar1 = (byte *)(iVar11 + 4);
        iVar11 = iVar11 + 4;
        local_c = (double *)((int)local_c + 4);
        pcVar12 = (char *)&param_1;
        param_1._0_2_ = (ushort)*pbVar1;
        *puVar9 = 4;
        do {
          cVar3 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar3 != '\0');
        iVar7 = (int)pcVar12 - ((int)&param_1 + 1);
        puVar9 = &param_1;
LAB_006132b5:
        uVar5 = FUN_00613eb0(iVar4,puVar9,iVar7);
        *(undefined4 *)(iVar10 + 0xc) = uVar5;
        iVar10 = *(int *)(iVar4 + 0x18) - *(int *)(iVar4 + 8);
        bVar15 = SBORROW4(iVar10,8);
        bVar14 = iVar10 + -8 < 0;
        bVar13 = iVar10 == 8;
        break;
      case 100:
        *puVar9 = 3;
        piVar2 = (int *)(iVar11 + 4);
        iVar11 = iVar11 + 4;
        local_c = (double *)((int)local_c + 4);
        *(float *)(iVar10 + 0xc) = (float)*piVar2;
        iVar10 = *(int *)(iVar4 + 0x18) - *(int *)(iVar4 + 8);
        bVar15 = SBORROW4(iVar10,8);
        bVar14 = iVar10 + -8 < 0;
        bVar13 = iVar10 == 8;
        break;
      case 0x66:
        local_c = local_c + 1;
        *puVar9 = 3;
        *(float *)(iVar10 + 0xc) = (float)*local_c;
        iVar10 = *(int *)(iVar4 + 0x18) - *(int *)(iVar4 + 8);
        iVar11 = iVar11 + 8;
        bVar15 = SBORROW4(iVar10,8);
        bVar14 = iVar10 + -8 < 0;
        bVar13 = iVar10 == 8;
        break;
      case 0x73:
        iVar11 = iVar11 + 4;
        local_c = (double *)((int)local_c + 4);
        FUN_006075e0();
        goto switchD_00613209_caseD_26;
      }
      if (bVar13 || bVar15 != bVar14) {
        FUN_00606b60(iVar4,1);
      }
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
switchD_00613209_caseD_26:
      iVar10 = local_4 + 2;
      pcVar12 = (char *)(iVar6 + 2);
      iVar6 = FUN_007c97c0(pcVar12,0x25);
      local_4 = iVar10;
    } while (iVar6 != 0);
  }
  puVar9 = *(undefined4 **)(iVar4 + 8);
  *puVar9 = 4;
  pcVar8 = pcVar12;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  uVar5 = FUN_00613eb0(iVar4,pcVar12,(int)pcVar8 - (int)(pcVar12 + 1));
  puVar9[1] = uVar5;
  if (*(int *)(iVar4 + 0x18) - *(int *)(iVar4 + 8) < 9) {
    FUN_00606b60(iVar4,1);
  }
  iVar6 = *(int *)(iVar4 + 8) + 8;
  *(int *)(iVar4 + 8) = iVar6;
  FUN_006128d0(iVar4,iVar10 + 1,(iVar6 - *(int *)(iVar4 + 0xc) >> 3) + -1);
  iVar10 = *(int *)(iVar4 + 8) + iVar10 * -8;
  *(int *)(iVar4 + 8) = iVar10;
  return *(int *)(iVar10 + -4) + 0x10;
}

