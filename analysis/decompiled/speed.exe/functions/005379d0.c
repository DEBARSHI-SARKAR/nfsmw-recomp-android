/* speed.exe 005379d0 FUN_005379d0; analysis pseudocode, not buildable source.
 * calls 005b7580 FUN_005b7580
 * calls 005b8550 FUN_005b8550
 * calls 00515e20 FUN_00515e20
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 * calls 005af1c0 FUN_005af1c0
 * calls 005922b0 FUN_005922b0
 * calls 005252d0 FUN_005252d0
 * calls 00516af0 FUN_00516af0
 * calls 00652ad0 _malloc
 * calls 00591d90 FUN_00591d90
 * calls 0056bc10 FUN_0056bc10
 * calls 005b5b70 FUN_005b5b70
 * calls 00572070 FUN_00572070
 */

void __fastcall FUN_005379d0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 *local_34;
  undefined1 local_24 [36];
  
  if ((((*(int *)(param_1 + 0x10) != 0) &&
       (iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 != 0)) &&
      (iVar2 = FUN_005b8550(0xc52b0819), iVar2 != 0)) &&
     (iVar2 = FUN_005b1360(0x16a259), iVar2 != 0)) {
    FUN_005b8400(iVar2,0);
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  if (((*(int *)(param_1 + 0x10) != 0) &&
      (iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 != 0)) &&
     ((iVar2 = FUN_005b8550(0x6e266928), iVar2 != 0 && (iVar2 = FUN_005b1360(0x16a259), iVar2 != 0))
     )) {
    FUN_005b8400(iVar2,0);
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  if (((*(int *)(param_1 + 0x10) != 0) &&
      (iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 != 0)) &&
     ((iVar2 = FUN_005b8550(0xabf6f060), iVar2 != 0 && (iVar2 = FUN_005b1360(0x16a259), iVar2 != 0))
     )) {
    FUN_005b8400(iVar2,0);
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  if ((((*(int *)(param_1 + 0x10) != 0) &&
       (iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 != 0)) &&
      (iVar2 = FUN_005b8550(0x6a0831f6), iVar2 != 0)) &&
     (iVar2 = FUN_005b1360(0x16a259), iVar2 != 0)) {
    FUN_005b8400(iVar2,0);
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  iVar2 = 0;
  if (DAT_0089f6fc != 0) {
    do {
      local_34 = _malloc(0x2c);
      if (local_34 == (undefined4 *)0x0) {
        local_34 = (undefined4 *)0x0;
      }
      else {
        puVar6 = local_34 + 3;
        *local_34 = &PTR_FUN_0089d348;
        *puVar6 = puVar6;
        local_34[4] = puVar6;
        local_34[5] = 0;
        local_34[9] = 0;
        local_34[8] = 0;
        local_34[7] = 0;
        local_34[6] = 0;
        *(undefined1 *)(local_34 + 10) = 1;
      }
      iVar2 = iVar2 + 1;
      FUN_00515e20(local_24,0x24,"scroll_text_%d",iVar2);
      pcVar8 = *(char **)(param_1 + 0x10);
      uVar3 = FUN_005af1c0(local_24);
      if (pcVar8 == (char *)0x0) {
LAB_00537bef:
        iVar5 = 0;
      }
      else {
        pcVar4 = pcVar8;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 == pcVar8 + 1) goto LAB_00537bef;
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar8);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar8);
            if (iVar5 == 0) goto LAB_00537bef;
            goto LAB_00537bc9;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar8);
LAB_00537bc9:
          if (iVar5 == 0) goto LAB_00537bef;
        }
        iVar5 = FUN_005b8550(uVar3);
        if ((iVar5 == 0) || (*(int *)(iVar5 + 0x18) != 2)) goto LAB_00537bef;
      }
      puVar6 = _malloc(0x10);
      if (puVar6 == (undefined4 *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        *puVar6 = &PTR_FUN_0089c2bc;
        puVar6[3] = iVar5;
        piVar7 = puVar6 + 1;
      }
      puVar6 = (undefined4 *)local_34[4];
      *puVar6 = piVar7;
      local_34[4] = piVar7;
      *piVar7 = (int)(local_34 + 3);
      piVar7[1] = (int)puVar6;
      FUN_005922b0(local_34);
    } while (iVar2 < (int)(uint)DAT_0089f6fc);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(DAT_0091cf90 + 0x13c) == 0) {
    uVar9 = 0xfece4e04;
  }
  else {
    uVar9 = 0x459ea230;
  }
  uVar9 = FUN_0056bc10(uVar9);
  FUN_005252d0(uVar3,0xda0a16cc,uVar9);
  return;
}

