/* speed.exe 0079d830 FUN_0079d830; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00652ad0 _malloc
 * calls 007904a0 FUN_007904a0
 * calls 00794f80 FUN_00794f80
 * calls 00652b10 thunk_FUN_007c7250
 * calls 00793340 FUN_00793340
 * calls 0056e340 FUN_0056e340
 * calls 0083c880 FUN_0083c880
 * calls 0079ca30 FUN_0079ca30
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0083acd0 FUN_0083acd0
 * calls 0078fcb0 FUN_0078fcb0
 * calls 00460dd0 FUN_00460dd0
 * calls 0079bac0 FUN_0079bac0
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

undefined4 __thiscall FUN_0079d830(int param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 local_218;
  undefined4 local_217;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00882887;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  iVar4 = FUN_0079ca30();
  uVar10 = (*(int *)(iVar4 + 8) == -1) - 1 & iVar4 + 8U;
  iVar5 = FUN_0079bac0();
  iVar4 = *(int *)(iVar5 + 0x1c);
  uVar6 = FUN_0056e340();
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    ExceptionList = local_14;
    return 0xffffffec;
  }
  iVar7 = FUN_00460dd0(uVar6,param_2);
  if (iVar7 == 0) {
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    ExceptionList = local_14;
    return 0xfffffff4;
  }
  if ((uVar10 != 0) && (iVar7 = 0, 0 < *(int *)(uVar10 + 0x20c))) {
    iVar12 = uVar10 + 0x218;
    do {
      iVar8 = FUN_00460dd0(param_2,iVar12);
      if (iVar8 == 0) {
        InterlockedDecrement(&DAT_009b4438);
        FUN_007ec1c8();
        ExceptionList = local_14;
        return 0xfffffff3;
      }
      iVar7 = iVar7 + 1;
      iVar12 = iVar12 + 0x8c;
    } while (iVar7 < *(int *)(uVar10 + 0x20c));
  }
  puVar13 = (undefined4 *)(param_1 + 8);
  for (puVar11 = *(undefined4 **)(param_1 + 8); puVar11 != puVar13; puVar11 = (undefined4 *)*puVar11
      ) {
    iVar7 = FUN_00460dd0(puVar11 + 3,param_2);
    if (iVar7 == 0) {
      InterlockedDecrement(&DAT_009b4438);
      FUN_007ec1c8();
      ExceptionList = local_14;
      return 0xfffffff2;
    }
  }
  puVar11 = (undefined4 *)0x0;
  iVar7 = FUN_0045d3a0(0);
  if (iVar7 != 5) {
    puVar1 = (undefined4 *)*puVar13;
    pvVar9 = _malloc(0x28);
    local_c = 0;
    if (pvVar9 != (void *)0x0) {
      puVar11 = (undefined4 *)
                FUN_007904a0(param_2,uVar10,(iVar4 == -1) - 1 & iVar5 + 0x1cU,0x42f00000);
    }
    local_c = 0xffffffff;
    if (puVar11 != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_1 + 0xc);
      *puVar2 = puVar11;
      *(undefined4 **)(param_1 + 0xc) = puVar11;
      puVar11[1] = puVar2;
      *puVar11 = puVar13;
      if (((puVar1 != puVar13) || (*(int *)(param_1 + 0x10) != param_1 + 0x10)) ||
         (iVar4 = FUN_0078fcb0(FUN_007959b0,param_1), iVar4 != -1)) {
        local_218 = 0;
        puVar13 = &local_217;
        for (iVar4 = 0x7f; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        *(undefined2 *)puVar13 = 0;
        *(undefined1 *)((int)puVar13 + 2) = 0;
        FUN_0083c880(&local_218,0x200,&DAT_008b6e6c,puVar11[8]);
        FUN_0083c880(&local_218,0x200,&DAT_0089e98c,param_2);
        FUN_0083acd0(&local_218,0x200,&DAT_008b6e64,0x30020);
        uVar19 = 0;
        uVar18 = 0;
        uVar17 = 0;
        uVar16 = 0;
        puVar15 = &LAB_00794ff0;
        puVar14 = &local_218;
        uVar6 = 0x6d657367;
        FUN_00794f80(0x6d657367,puVar14,&LAB_00794ff0,0,0,0,0);
        uVar6 = FUN_00793340(uVar6,puVar14,puVar15,uVar16,uVar17,uVar18,uVar19);
        InterlockedDecrement(&DAT_009b4438);
        FUN_007ec1c8();
        ExceptionList = local_14;
        return uVar6;
      }
      iVar4 = **(int **)(param_1 + 0xc);
      piVar3 = (int *)(*(int **)(param_1 + 0xc))[1];
      *piVar3 = iVar4;
      *(int **)(iVar4 + 4) = piVar3;
      if (puVar11[8] != 0) {
        thunk_FUN_007c7250(puVar11[8]);
      }
      thunk_FUN_007c7250(puVar11);
    }
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    ExceptionList = local_14;
    return 0xfffffffe;
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  ExceptionList = local_14;
  return 0xfffffff0;
}

