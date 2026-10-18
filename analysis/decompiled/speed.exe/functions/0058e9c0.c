/* speed.exe 0058e9c0 FUN_0058e9c0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 0064a140 FUN_0064a140
 * calls 0064a110 FUN_0064a110
 * calls 004fb000 FUN_004fb000
 * calls 00516e10 FUN_00516e10
 * calls 006c2700 FUN_006c2700
 * calls 0065f7a0 FUN_0065f7a0
 * calls 00460dd0 FUN_00460dd0
 */

undefined4 * __fastcall FUN_0058e9c0(undefined4 *param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined **ppuVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087267b;
  local_c = ExceptionList;
  piVar1 = param_1 + 1;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a17d0;
  *piVar1 = (int)piVar1;
  param_1[2] = piVar1;
  local_4 = 0;
  cVar4 = FUN_0064a110();
  if (cVar4 == '\0') {
    cVar4 = FUN_004fb000();
    if (cVar4 == '\0') {
      ppuVar8 = &PTR_s_MC_Bootup_fng_008f3c58;
      do {
        if (**ppuVar8 != '\0') {
          puVar5 = _malloc(0x10);
          if (puVar5 == (undefined4 *)0x0) {
            piVar6 = (int *)0x0;
          }
          else {
            puVar2 = *ppuVar8;
            *puVar5 = &PTR_FUN_008a0f48;
            puVar5[3] = puVar2;
            piVar6 = puVar5 + 1;
          }
          puVar5 = (undefined4 *)param_1[2];
          *puVar5 = piVar6;
          param_1[2] = piVar6;
          piVar6[1] = (int)puVar5;
          *piVar6 = (int)piVar1;
        }
        ppuVar8 = ppuVar8 + 1;
      } while ((int)ppuVar8 < 0x8f3c74);
    }
    else {
      ppuVar8 = &PTR_s_DiscErrorPC_fng_008f3c94;
      do {
        FUN_00460dd0(*ppuVar8,"WS_LS_EA_hidef.fng");
        if (**ppuVar8 != '\0') {
          puVar5 = _malloc(0x10);
          if (puVar5 == (undefined4 *)0x0) {
            piVar6 = (int *)0x0;
          }
          else {
            puVar2 = *ppuVar8;
            *puVar5 = &PTR_FUN_008a0f48;
            puVar5[3] = puVar2;
            piVar6 = puVar5 + 1;
          }
          puVar5 = (undefined4 *)param_1[2];
          *puVar5 = piVar6;
          param_1[2] = piVar6;
          piVar6[1] = (int)puVar5;
          *piVar6 = (int)piVar1;
        }
        ppuVar8 = ppuVar8 + 1;
      } while ((int)ppuVar8 < 0x8f3cb0);
    }
  }
  else {
    cVar4 = FUN_004fb000();
    if (cVar4 == '\0') {
      ppuVar8 = &PTR_s_DiscErrorPC_fng_008f3c74;
      do {
        iVar7 = FUN_00460dd0(*ppuVar8,"LS_LangSelect.fng");
        if (((iVar7 != 0) || (cVar4 = FUN_0064a140(), cVar4 != '\0')) && (**ppuVar8 != '\0')) {
          puVar5 = _malloc(0x10);
          if (puVar5 == (undefined4 *)0x0) {
            piVar6 = (int *)0x0;
          }
          else {
            puVar2 = *ppuVar8;
            *puVar5 = &PTR_FUN_008a0f48;
            puVar5[3] = puVar2;
            piVar6 = puVar5 + 1;
          }
          puVar5 = (undefined4 *)param_1[2];
          *puVar5 = piVar6;
          param_1[2] = piVar6;
          piVar6[1] = (int)puVar5;
          *piVar6 = (int)piVar1;
        }
        ppuVar8 = ppuVar8 + 1;
      } while ((int)ppuVar8 < 0x8f3c94);
    }
    else {
      ppuVar8 = &PTR_s_DiscErrorPC_fng_008f3cb0;
      do {
        iVar7 = FUN_00460dd0(*ppuVar8,"LS_LangSelect.fng");
        if (((iVar7 != 0) || (cVar4 = FUN_0064a140(), cVar4 != '\0')) && (**ppuVar8 != '\0')) {
          puVar5 = _malloc(0x10);
          if (puVar5 == (undefined4 *)0x0) {
            piVar6 = (int *)0x0;
          }
          else {
            puVar2 = *ppuVar8;
            *puVar5 = &PTR_FUN_008a0f48;
            puVar5[3] = puVar2;
            piVar6 = puVar5 + 1;
          }
          puVar5 = (undefined4 *)param_1[2];
          *puVar5 = piVar6;
          param_1[2] = piVar6;
          piVar6[1] = (int)puVar5;
          *piVar6 = (int)piVar1;
        }
        ppuVar8 = ppuVar8 + 1;
      } while ((int)ppuVar8 < 0x8f3cd0);
    }
  }
  if (*piVar1 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *piVar1 + -4;
  }
  param_1[3] = iVar7;
  iVar7 = FUN_00460dd0("DiscErrorPC.fng",*(undefined4 *)(iVar7 + 0xc));
  if (iVar7 == 0) {
    cVar4 = FUN_006c2700();
    iVar7 = FUN_0065f7a0("foobar");
    if ((iVar7 != 0) || (cVar4 != '\0')) {
      if (*(int *)(param_1[3] + 4) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(param_1[3] + 4) + -4;
      }
      param_1[3] = iVar7;
    }
  }
  uVar3 = *(undefined4 *)(param_1[3] + 0xc);
  iVar7 = FUN_00516e10();
  *(undefined4 *)(iVar7 + 0xc) = uVar3;
  *(undefined4 *)(iVar7 + 0x10) = 0;
  *(undefined4 *)(iVar7 + 0x14) = 0;
  ExceptionList = local_c;
  return param_1;
}

