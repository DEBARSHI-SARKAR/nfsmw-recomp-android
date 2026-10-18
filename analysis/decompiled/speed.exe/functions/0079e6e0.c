/* speed.exe 0079e6e0 FUN_0079e6e0; analysis pseudocode, not buildable source.
 * calls 004647c0 FUN_004647c0
 * calls 0083b210 FUN_0083b210
 * calls 0083a670 FUN_0083a670
 * calls 0078c730 FUN_0078c730
 * calls 00793670 FUN_00793670
 * calls 00840e80 FUN_00840e80
 * calls 0078bb00 FUN_0078bb00
 * calls 00513db0 FUN_00513db0
 * calls 0083ad80 FUN_0083ad80
 * calls 0079bac0 FUN_0079bac0
 * calls 00460c50 FUN_00460c50
 * calls 0083abc0 FUN_0083abc0
 * calls 0079dbd0 FUN_0079dbd0
 * calls 007936f0 FUN_007936f0
 * calls 0056bc10 FUN_0056bc10
 */

void FUN_0079e6e0(undefined4 param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 local_b4c;
  char local_b48;
  char local_b47;
  char local_b46;
  char acStack_b45 [61];
  undefined1 local_b08;
  undefined4 local_b07;
  undefined1 local_a08;
  undefined4 local_a07;
  undefined1 local_908;
  undefined4 local_907;
  undefined4 local_508 [12];
  int local_4d8;
  int local_4b0;
  undefined1 local_288 [644];
  
  local_b48 = '\0';
  pcVar7 = &local_b47;
  for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7 = pcVar7 + 4;
  }
  pcVar7[0] = '\0';
  pcVar7[1] = '\0';
  pcVar7[2] = '\0';
  local_a08 = 0;
  puVar5 = &local_a07;
  for (iVar6 = 0x3f; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  local_b08 = 0;
  puVar5 = &local_b07;
  for (iVar6 = 0x3f; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  local_908 = 0;
  puVar5 = &local_907;
  for (iVar6 = 0xff; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  local_b4c = 0;
  uVar2 = FUN_0083a670(uVar2,&DAT_008b6f0c,&local_b48,0x40,&DAT_00890978);
  FUN_0083b210(uVar2);
  if (((local_b48 == 'T') && (local_b47 == 'o')) && (local_b46 == ' ')) {
    local_b48 = '-';
    local_b47 = '>';
  }
  uVar2 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),&DAT_008b710c,0);
  uVar3 = FUN_0083ad80(uVar2);
  if ((uVar3 & 0x20000) != 0) {
    uVar2 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),&DAT_008b7108,&local_908,0x400,
                         &DAT_00890978);
    FUN_0083b210(uVar2);
    FUN_0079dbd0(&local_b48,&local_908);
    return;
  }
  if ((uVar3 & 0x8000000) != 0) {
    uVar2 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),&DAT_008b7108,0);
    uVar2 = FUN_0083abc0(uVar2);
    FUN_00793670(&local_b48,uVar2);
    return;
  }
  if ((uVar3 & 0x74000040) == 0) {
    if ((uVar3 & 0x100000) == 0) {
      if ((uVar3 & 0x80000) == 0) {
        uVar2 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),&DAT_008b7108,&local_908,0x400,
                             &DAT_00890978);
        FUN_0083b210(uVar2);
        iVar6 = FUN_0078c730();
        if (*(int *)(iVar6 + 0xf8) != 0) {
          puVar5 = (undefined4 *)FUN_00513db0(local_288,&local_b48);
          puVar8 = local_508;
          for (iVar6 = 0x9f; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar8 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar8 = puVar8 + 1;
          }
          if ((local_4b0 != 0) && (local_4d8 != 0)) {
            return;
          }
        }
        if (*(int *)(param_2 + 8) == 0x63686174) {
          if ((*(uint *)(param_2 + 0xc) & 0x8000000) == 0) {
            FUN_004647c0(&local_b08,"%s%s> %s",&local_b48,&local_a08,&local_908);
          }
          else {
            FUN_004647c0(&local_b08,"%s %s",&local_b48);
          }
        }
        else if (*(int *)(param_2 + 8) == 0x70726976) {
          if (((local_b48 == '-') && (local_b47 == '>')) && (local_b46 == ' ')) {
            uVar2 = FUN_0056bc10(0xda2b33af,&local_908);
            FUN_004647c0(&local_b08,"%s> %s",uVar2);
            local_b4c = 1;
          }
          else {
            uVar2 = FUN_0056bc10(0xda2b33af,&local_908);
            FUN_004647c0(&local_b08,"%s%s %s> %s",&local_b48,&local_a08,uVar2);
            local_b4c = 1;
          }
        }
        cVar1 = FUN_0078bb00(&local_b48,&local_908);
        if ((((cVar1 == '\0') && (iVar6 = FUN_00460c50(&local_b08), 0 < iVar6)) &&
            ((code *)*param_3 != (code *)0x0)) && (param_3[1] != 0)) {
          (*(code *)*param_3)(param_3[1],&local_b08,local_b4c,0,
                              *(uint *)(param_2 + 0xc) >> 0x15 & 0xffffff01);
        }
        FUN_00840e80(param_1,param_2);
      }
      else if (*(int *)(DAT_0091cf90 + 0x13c) == 0) {
        iVar6 = FUN_0079bac0();
        *(undefined1 *)(iVar6 + 0x10d) = 1;
        return;
      }
    }
    else if (*(int *)(DAT_0091cf90 + 0x13c) != 0) {
      uVar2 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),&DAT_008b7108,&local_908,0x400,
                           &DAT_00890978);
      FUN_0083b210(uVar2);
      iVar6 = FUN_0079bac0();
      uVar2 = FUN_0083a670(&local_908,"PAUSE",0);
      iVar4 = FUN_0083abc0(uVar2);
      *(bool *)(iVar6 + 0x10c) = iVar4 != 0;
      uVar2 = FUN_0083a670(&local_908,&DAT_008b6d00,0xffffffff);
      uVar2 = FUN_0083abc0(uVar2);
      *(undefined4 *)(iVar6 + 0x108) = uVar2;
      uVar2 = FUN_0083a670(&local_908,"HURRY",0);
      iVar6 = FUN_0083abc0(uVar2);
      if (iVar6 == -1) {
        DAT_009b41c9 = 1;
        return;
      }
      if (iVar6 == 1) {
        DAT_009b41c8 = 1;
        return;
      }
    }
    return;
  }
  uVar2 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),&DAT_008b7108,0);
  uVar2 = FUN_0083abc0(uVar2);
  FUN_007936f0(&local_b48,uVar2,uVar3);
  return;
}

