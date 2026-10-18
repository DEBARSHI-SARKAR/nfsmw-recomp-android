/* speed.exe 00558b20 FUN_00558b20; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00515e20 FUN_00515e20
 * calls 005af1c0 FUN_005af1c0
 * calls 005b5b70 FUN_005b5b70
 * calls 005b7580 FUN_005b7580
 * calls 005922b0 FUN_005922b0
 * calls 00591d90 FUN_00591d90
 * calls 0054e560 FUN_0054e560
 * calls 00572070 FUN_00572070
 * calls 00652ad0 _malloc
 */

void __fastcall FUN_00558b20(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int local_34;
  undefined4 *local_2c;
  undefined1 local_20 [32];
  
  local_34 = 1;
  do {
    local_2c = _malloc(0x2c);
    if (local_2c == (undefined4 *)0x0) {
      local_2c = (undefined4 *)0x0;
    }
    else {
      puVar6 = local_2c + 3;
      *local_2c = &PTR_FUN_0089d348;
      *puVar6 = puVar6;
      local_2c[4] = puVar6;
      local_2c[5] = 0;
      local_2c[9] = 0;
      local_2c[8] = 0;
      local_2c[7] = 0;
      local_2c[6] = 0;
      *(undefined1 *)(local_2c + 10) = 1;
    }
    FUN_00515e20(local_20,0x20,"scroll_text_%d",local_34);
    pcVar7 = *(char **)(param_1 + 0x10);
    uVar3 = FUN_005af1c0(local_20);
    if (pcVar7 == (char *)0x0) {
LAB_00558c12:
      iVar5 = 0;
    }
    else {
      pcVar4 = pcVar7;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (pcVar4 == pcVar7 + 1) goto LAB_00558c12;
      if (DAT_0091d218 < 1) {
        iVar5 = FUN_005b5b70(pcVar7);
        if (iVar5 == 0) {
          iVar5 = FUN_005b7580(pcVar7);
          if (iVar5 == 0) goto LAB_00558c12;
          goto LAB_00558bf4;
        }
      }
      else {
        FUN_00572070();
        iVar5 = FUN_00591d90(pcVar7);
LAB_00558bf4:
        if (iVar5 == 0) goto LAB_00558c12;
      }
      iVar5 = FUN_005b8550(uVar3);
      if ((iVar5 == 0) || (*(int *)(iVar5 + 0x18) != 2)) goto LAB_00558c12;
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
    puVar2 = (undefined4 *)local_2c[4];
    *puVar2 = puVar6;
    local_2c[4] = puVar6;
    puVar6[1] = puVar2;
    *puVar6 = local_2c + 3;
    FUN_00515e20(local_20,0x20,"scroll_racers_%d",local_34);
    pcVar7 = *(char **)(param_1 + 0x10);
    uVar3 = FUN_005af1c0(local_20);
    if (pcVar7 == (char *)0x0) {
LAB_00558ceb:
      iVar5 = 0;
    }
    else {
      pcVar4 = pcVar7;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (pcVar4 == pcVar7 + 1) goto LAB_00558ceb;
      if (DAT_0091d218 < 1) {
        iVar5 = FUN_005b5b70(pcVar7);
        if (iVar5 == 0) {
          iVar5 = FUN_005b7580(pcVar7);
          if (iVar5 == 0) goto LAB_00558ceb;
          goto LAB_00558cc9;
        }
      }
      else {
        FUN_00572070();
        iVar5 = FUN_00591d90(pcVar7);
LAB_00558cc9:
        if (iVar5 == 0) goto LAB_00558ceb;
      }
      iVar5 = FUN_005b8550(uVar3);
      if ((iVar5 == 0) || (*(int *)(iVar5 + 0x18) != 2)) goto LAB_00558ceb;
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
    puVar2 = (undefined4 *)local_2c[4];
    *puVar2 = puVar6;
    local_2c[4] = puVar6;
    puVar6[1] = puVar2;
    *puVar6 = local_2c + 3;
    FUN_00515e20(local_20,0x20,"mouse_option_%d",local_34);
    pcVar7 = *(char **)(param_1 + 0x10);
    uVar3 = FUN_005af1c0(local_20);
    if (pcVar7 == (char *)0x0) {
LAB_00558daa:
      iVar5 = 0;
    }
    else {
      pcVar4 = pcVar7;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (pcVar4 == pcVar7 + 1) goto LAB_00558daa;
      if (DAT_0091d218 < 1) {
        iVar5 = FUN_005b5b70(pcVar7);
        if (iVar5 == 0) {
          iVar5 = FUN_005b7580(pcVar7);
          if (iVar5 == 0) goto LAB_00558daa;
          goto LAB_00558d9a;
        }
      }
      else {
        FUN_00572070();
        iVar5 = FUN_00591d90(pcVar7);
LAB_00558d9a:
        if (iVar5 == 0) goto LAB_00558daa;
      }
      iVar5 = FUN_005b8550(uVar3);
      if (iVar5 == 0) goto LAB_00558daa;
    }
    local_2c[5] = iVar5;
    FUN_005922b0(local_2c);
    local_34 = local_34 + 1;
    if (0xf < local_34) {
      FUN_0054e560();
      return;
    }
  } while( true );
}

