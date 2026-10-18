/* speed.exe 0079dbd0 FUN_0079dbd0; analysis pseudocode, not buildable source.
 * calls 0083a980 FUN_0083a980
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0083a670 FUN_0083a670
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00652ad0 _malloc
 * calls 00794f80 FUN_00794f80
 * calls 00793340 FUN_00793340
 * calls 00652b10 thunk_FUN_007c7250
 * calls 0083c880 FUN_0083c880
 * calls 0079ca30 FUN_0079ca30
 * calls 0083acd0 FUN_0083acd0
 * calls 0078fcb0 FUN_0078fcb0
 * calls 007906b0 FUN_007906b0
 * calls 0083abc0 FUN_0083abc0
 * calls 00460d20 FUN_00460d20
 */

void __thiscall FUN_0079dbd0(int param_1,char *param_2,char *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 local_118;
  undefined4 local_117;
  undefined1 local_98;
  undefined4 local_97;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_008828b7;
  local_14 = ExceptionList;
  if ((((param_2 != (char *)0x0) && (*param_2 != '\0')) && (param_3 != (char *)0x0)) &&
     (*param_3 != '\0')) {
    ExceptionList = &local_14;
    uVar4 = FUN_0083a670(param_3,"GAMEID",0);
    iVar5 = FUN_0083abc0(uVar4);
    puVar8 = (undefined4 *)(param_1 + 0x10);
    for (puVar9 = *(undefined4 **)(param_1 + 0x10); puVar9 != puVar8; puVar9 = (undefined4 *)*puVar9
        ) {
      if ((iVar5 == puVar9[2]) && (iVar6 = FUN_00460d20(param_2,puVar9 + 3), iVar6 == 0)) {
        ExceptionList = local_14;
        return;
      }
    }
    iVar6 = FUN_0079ca30();
    if ((*(int *)(iVar6 + 8) == -1) || (iVar6 == -8)) {
      puVar9 = (undefined4 *)0x0;
      iVar6 = FUN_0045d3a0(0);
      if (iVar6 == 5) {
        if (*param_2 != '\0') {
          local_98 = 0;
          puVar9 = &local_97;
          for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          *(undefined2 *)puVar9 = 0;
          *(undefined1 *)((int)puVar9 + 2) = 0;
          FUN_0083a980(&local_98,0x80,&DAT_008b6e6c,iVar5);
          FUN_0083c880(&local_98,0x80,&DAT_0089e98c,param_2);
          FUN_0083acd0(&local_98,0x80,&DAT_008b6e64,0x10060);
          puVar10 = &local_98;
          goto LAB_0079dd0a;
        }
      }
      else {
        puVar1 = (undefined4 *)*puVar8;
        pvVar7 = _malloc(0x28);
        local_c = 0;
        if (pvVar7 != (void *)0x0) {
          puVar9 = (undefined4 *)FUN_007906b0(param_2,param_3,0x42f00000);
        }
        local_c = 0xffffffff;
        if (puVar9 != (undefined4 *)0x0) {
          puVar2 = *(undefined4 **)(param_1 + 0x14);
          *puVar2 = puVar9;
          *(undefined4 **)(param_1 + 0x14) = puVar9;
          puVar9[1] = puVar2;
          *puVar9 = puVar8;
          if (((puVar1 == puVar8) && (*(int *)(param_1 + 8) == param_1 + 8)) &&
             (iVar6 = FUN_0078fcb0(FUN_007959b0,param_1), iVar6 == -1)) {
            iVar5 = **(int **)(param_1 + 0x14);
            piVar3 = (int *)(*(int **)(param_1 + 0x14))[1];
            *piVar3 = iVar5;
            *(int **)(iVar5 + 4) = piVar3;
            if (puVar9[8] != 0) {
              thunk_FUN_007c7250(puVar9[8]);
            }
            thunk_FUN_007c7250(puVar9);
            ExceptionList = local_14;
            return;
          }
          if (*(code **)(param_1 + 0x18) != (code *)0x0) {
            (**(code **)(param_1 + 0x18))(param_2,iVar5,0,*(undefined4 *)(param_1 + 0x1c));
          }
        }
      }
    }
    else if (*param_2 != '\0') {
      local_118 = 0;
      puVar9 = &local_117;
      for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = 0;
      *(undefined1 *)((int)puVar9 + 2) = 0;
      FUN_0083a980(&local_118,0x80,&DAT_008b6e6c,iVar5);
      FUN_0083c880(&local_118,0x80,&DAT_0089e98c,param_2);
      FUN_0083acd0(&local_118,0x80,&DAT_008b6e64,0x4010020);
      puVar10 = &local_118;
LAB_0079dd0a:
      uVar15 = 0;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      puVar11 = &LAB_00794ff0;
      uVar4 = 0x6d657367;
      FUN_00794f80(0x6d657367,puVar10,&LAB_00794ff0,0,0,0,0);
      FUN_00793340(uVar4,puVar10,puVar11,uVar12,uVar13,uVar14,uVar15);
      ExceptionList = local_14;
      return;
    }
  }
  ExceptionList = local_14;
  return;
}

