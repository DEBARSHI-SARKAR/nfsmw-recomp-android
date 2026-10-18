/* speed.exe 005409a0 FUN_005409a0; analysis pseudocode, not buildable source.
 * calls 00515e20 FUN_00515e20
 * calls 00460c70 FUN_00460c70
 * calls 005b5b70 FUN_005b5b70
 * calls 005926b0 FUN_005926b0
 * calls 005868e0 FUN_005868e0
 * calls 0051dcf0 FUN_0051dcf0
 * calls 0056e340 FUN_0056e340
 * calls 005252d0 FUN_005252d0
 * calls 0059b710 FUN_0059b710
 * calls 008370c0 FUN_008370c0
 * calls 00460d20 FUN_00460d20
 * calls 00572070 FUN_00572070
 * calls 00652ad0 _malloc
 * calls 005b8550 FUN_005b8550
 * calls 005af1c0 FUN_005af1c0
 * calls 005b7580 FUN_005b7580
 * calls 00591d90 FUN_00591d90
 * calls 00592710 FUN_00592710
 * calls 00514c70 FUN_00514c70
 * calls 00586760 FUN_00586760
 * calls 00586d40 FUN_00586d40
 * calls 0078c730 FUN_0078c730
 */

void __fastcall FUN_005409a0(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  int local_30;
  undefined1 auStack_20 [32];
  
  FUN_00586d40();
  iVar9 = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  local_30 = 0;
  while( true ) {
    iVar3 = FUN_0078c730();
    iVar3 = FUN_008370c0(*(undefined4 *)(iVar3 + 0xf8),iVar9);
    if (iVar3 == 0) break;
    iVar9 = iVar9 + 1;
  }
  iVar3 = *(int *)(param_1 + 0xe8);
  bVar2 = false;
  while ((iVar3 < iVar9 && (!bVar2))) {
    iVar3 = *(int *)(param_1 + 0xe4);
    iVar4 = FUN_0078c730();
    iVar3 = FUN_008370c0(*(undefined4 *)(iVar4 + 0xf8),iVar3 + local_30);
    if (iVar3 == 0) {
      bVar2 = true;
    }
    else {
      uVar5 = FUN_0056e340();
      iVar4 = FUN_00460d20(iVar3,uVar5);
      if (iVar4 != 0) {
        puVar6 = _malloc(0x3c);
        puVar10 = (undefined4 *)0x0;
        if (puVar6 != (undefined4 *)0x0) {
          puVar10 = puVar6 + 3;
          *puVar10 = puVar10;
          puVar6[4] = puVar10;
          puVar6[0xe] = 0;
          *(undefined1 *)(puVar6 + 5) = 1;
          *puVar6 = &PTR_FUN_0089e29c;
          puVar10 = puVar6;
        }
        FUN_00515e20(auStack_20,0x20,"option_%d",*(int *)(param_1 + 0xe8) + 1);
        uVar5 = *(undefined4 *)(param_1 + 0x10);
        uVar7 = FUN_005af1c0(auStack_20,&DAT_008941f8,iVar3);
        FUN_005252d0(uVar5,uVar7);
        FUN_0051dcf0(iVar3,0);
        puVar10[0xe] = *(undefined4 *)(param_1 + 0xe8);
        FUN_00460c70(puVar10 + 6,iVar3);
        FUN_005868e0(puVar10);
        FUN_00592710(puVar10);
        *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
      }
      local_30 = local_30 + 1;
      bVar2 = false;
    }
    iVar3 = *(int *)(param_1 + 0xe8);
  }
  if (*(int *)(param_1 + 0xe8) < 8) {
    iVar9 = *(int *)(param_1 + 0xe8) + 1;
    do {
      FUN_00515e20(auStack_20,0x20,"OPTION_%d",iVar9);
      pcVar11 = *(char **)(param_1 + 0x10);
      uVar5 = FUN_005af1c0(auStack_20);
      if (pcVar11 != (char *)0x0) {
        pcVar8 = pcVar11;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        if (pcVar8 != pcVar11 + 1) {
          if (DAT_0091d218 < 1) {
            iVar3 = FUN_005b5b70(pcVar11);
            if (iVar3 == 0) {
              iVar3 = FUN_005b7580(pcVar11);
              if (iVar3 == 0) goto LAB_00540bf7;
              goto LAB_00540bb4;
            }
          }
          else {
            FUN_00572070();
            iVar3 = FUN_00591d90(pcVar11);
LAB_00540bb4:
            if (iVar3 == 0) goto LAB_00540bf7;
          }
          iVar3 = FUN_005b8550(uVar5);
          if ((iVar3 != 0) &&
             (*(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x2400001,
             *(int *)(iVar3 + 0x18) == 5)) {
            iVar4 = *(int *)(iVar3 + 100);
            iVar3 = *(int *)(iVar3 + 0x60);
            if (0 < iVar3) {
              do {
                FUN_00514c70(iVar4);
                iVar4 = *(int *)(iVar4 + 4);
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
          }
        }
      }
LAB_00540bf7:
      iVar9 = iVar9 + 1;
    } while (iVar9 < 9);
  }
  if ((*(int *)(param_1 + 0xe8) != 0) && (FUN_0059b710(1), *(int *)(param_1 + 0x5c) != 0)) {
    FUN_00586760(0x249db7b7);
  }
  FUN_005926b0(1);
  return;
}

