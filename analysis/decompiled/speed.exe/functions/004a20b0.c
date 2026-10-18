/* speed.exe 004a20b0 FUN_004a20b0; analysis pseudocode, not buildable source.
 * calls 00491350 FUN_00491350
 * calls 00492440 FUN_00492440
 * calls 00491ca0 FUN_00491ca0
 */

void __fastcall FUN_004a20b0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  bool bVar9;
  char local_1e;
  char cStack_1d;
  int local_1c;
  int iStack_18;
  code *pcStack_14;
  undefined4 local_10;
  char *local_c;
  undefined4 uStack_8;
  char local_4;
  
  if (*param_1 == 0) {
    local_1c = 0;
  }
  else {
    local_1c = *(int *)(*param_1 + 0x10);
  }
  iVar3 = local_1c;
  iVar7 = 0;
  iVar5 = 0;
  if (0 < local_1c) {
    do {
      FUN_00491ca0(&local_10,iVar5);
      if (((local_4 != '\0') && (iVar2 = FUN_00492440(local_c,&local_1e), local_1e != '\0')) &&
         (iVar2 != 0)) {
        iVar7 = iVar7 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
    if (0 < iVar7) {
      iVar3 = (*(code *)PTR_FUN_008ee4d0)(iVar7 * 8,"EAGL4::dynamic destructor list");
      param_1[2] = iVar3;
      iVar3 = 0;
      iStack_18 = 0;
      do {
        FUN_00491ca0(&local_10,iStack_18);
        if (local_4 != '\0') {
          iVar5 = 0xd;
          bVar9 = true;
          pcVar6 = "RenderMethod";
          pcVar8 = local_c;
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar9 = *pcVar6 == *pcVar8;
            pcVar6 = pcVar6 + 1;
            pcVar8 = pcVar8 + 1;
          } while (bVar9);
          if (((!bVar9) && (pcStack_14 = (code *)FUN_00492440(local_c,&local_1e), local_1e != '\0'))
             && (pcStack_14 != (code *)0x0)) {
            uVar4 = FUN_00492440(local_c,&cStack_1d);
            uVar1 = uStack_8;
            bVar9 = cStack_1d != '\0';
            (*pcStack_14)(uStack_8,param_1,local_10);
            *(uint *)(param_1[2] + iVar3 * 8) = -(uint)bVar9 & uVar4;
            *(undefined4 *)(param_1[2] + 4 + iVar3 * 8) = uVar1;
            iVar3 = iVar3 + 1;
          }
        }
        iStack_18 = iStack_18 + 1;
        if (local_1c <= iStack_18) {
          param_1[1] = iVar3;
          return;
        }
      } while( true );
    }
  }
  param_1[1] = iVar7;
  return;
}

