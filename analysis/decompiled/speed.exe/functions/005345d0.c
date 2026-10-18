/* speed.exe 005345d0 FUN_005345d0; analysis pseudocode, not buildable source.
 * calls 005b7580 FUN_005b7580
 * calls 00652ad0 _malloc
 * calls 00652ac0 _malloc
 * calls 00591d90 FUN_00591d90
 * calls 005b8550 FUN_005b8550
 * calls 00515e20 FUN_00515e20
 * calls 00586d40 FUN_00586d40
 * calls 00586760 FUN_00586760
 * calls 005af1c0 FUN_005af1c0
 * calls 005b5b70 FUN_005b5b70
 * calls 005922b0 FUN_005922b0
 * calls 00572070 FUN_00572070
 */

void __fastcall FUN_005345d0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int local_38;
  undefined4 *local_34;
  int local_2c;
  undefined1 local_20 [32];
  
  FUN_00586d40();
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_00586760(0x7ab5521a);
  }
  local_38 = 1;
  local_2c = 9;
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
    FUN_00515e20(local_20,0x20,"OPTION_NAME_%d",local_38);
    pcVar7 = *(char **)(param_1 + 0x10);
    uVar3 = FUN_005af1c0(local_20);
    if (pcVar7 == (char *)0x0) {
LAB_005346ea:
      iVar5 = 0;
    }
    else {
      pcVar4 = pcVar7;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (pcVar4 == pcVar7 + 1) goto LAB_005346ea;
      if (DAT_0091d218 < 1) {
        iVar5 = FUN_005b5b70(pcVar7);
        if (iVar5 == 0) {
          iVar5 = FUN_005b7580(pcVar7);
          if (iVar5 == 0) goto LAB_005346ea;
          goto LAB_005346cc;
        }
      }
      else {
        FUN_00572070();
        iVar5 = FUN_00591d90(pcVar7);
LAB_005346cc:
        if (iVar5 == 0) goto LAB_005346ea;
      }
      iVar5 = FUN_005b8550(uVar3);
      if ((iVar5 == 0) || (*(int *)(iVar5 + 0x18) != 2)) goto LAB_005346ea;
    }
    puVar6 = _malloc(0x10);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      *puVar6 = &PTR_FUN_0089c2bc;
      puVar6[3] = iVar5;
      puVar6 = puVar6 + 1;
    }
    puVar2 = (undefined4 *)local_34[4];
    *puVar2 = puVar6;
    local_34[4] = puVar6;
    puVar6[1] = puVar2;
    *puVar6 = local_34 + 3;
    FUN_00515e20(local_20,0x20,"OPTION_MOUSE_%d",local_38);
    pcVar7 = *(char **)(param_1 + 0x10);
    uVar3 = FUN_005af1c0(local_20);
    if (pcVar7 == (char *)0x0) {
LAB_005347b5:
      iVar5 = 0;
    }
    else {
      pcVar4 = pcVar7;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (pcVar4 == pcVar7 + 1) goto LAB_005347b5;
      if (DAT_0091d218 < 1) {
        iVar5 = FUN_005b5b70(pcVar7);
        if (iVar5 == 0) {
          iVar5 = FUN_005b7580(pcVar7);
          if (iVar5 == 0) goto LAB_005347b5;
          goto LAB_005347a5;
        }
      }
      else {
        FUN_00572070();
        iVar5 = FUN_00591d90(pcVar7);
LAB_005347a5:
        if (iVar5 == 0) goto LAB_005347b5;
      }
      iVar5 = FUN_005b8550(uVar3);
      if (iVar5 == 0) goto LAB_005347b5;
    }
    local_34[5] = iVar5;
    FUN_005922b0(local_34);
    local_38 = local_38 + 1;
    local_2c = local_2c + -1;
    if (local_2c == 0) {
      return;
    }
  } while( true );
}

