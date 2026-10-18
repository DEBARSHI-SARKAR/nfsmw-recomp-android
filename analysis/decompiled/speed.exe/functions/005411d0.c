/* speed.exe 005411d0 FUN_005411d0; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 00515e20 FUN_00515e20
 * calls 005b5b70 FUN_005b5b70
 * calls 005926b0 FUN_005926b0
 * calls 005868e0 FUN_005868e0
 * calls 005922b0 FUN_005922b0
 * calls 0051dcf0 FUN_0051dcf0
 * calls 00589870 FUN_00589870
 * calls 005252d0 FUN_005252d0
 * calls 00572070 FUN_00572070
 * calls 00652ad0 _malloc
 * calls 005b8550 FUN_005b8550
 * calls 005af1c0 FUN_005af1c0
 * calls 005b7580 FUN_005b7580
 * calls 0056bc10 FUN_0056bc10
 * calls 00591d90 FUN_00591d90
 * calls 00592710 FUN_00592710
 * calls 00586760 FUN_00586760
 */

void __fastcall FUN_005411d0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 uVar8;
  int local_38;
  undefined4 *local_30;
  int local_2c;
  undefined1 local_20 [32];
  
  local_38 = 1;
  local_2c = 7;
  do {
    local_30 = _malloc(0x2c);
    if (local_30 == (undefined4 *)0x0) {
      local_30 = (undefined4 *)0x0;
    }
    else {
      puVar6 = local_30 + 3;
      *local_30 = &PTR_FUN_0089d348;
      *puVar6 = puVar6;
      local_30[4] = puVar6;
      local_30[5] = 0;
      local_30[9] = 0;
      local_30[8] = 0;
      local_30[7] = 0;
      local_30[6] = 0;
      *(undefined1 *)(local_30 + 10) = 1;
    }
    FUN_00515e20(local_20,0x20,"option_name_%d",local_38);
    pcVar7 = *(char **)(param_1 + 0x10);
    uVar3 = FUN_005af1c0(local_20);
    if (pcVar7 == (char *)0x0) {
LAB_005412d2:
      iVar5 = 0;
    }
    else {
      pcVar4 = pcVar7;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (pcVar4 == pcVar7 + 1) goto LAB_005412d2;
      if (DAT_0091d218 < 1) {
        iVar5 = FUN_005b5b70(pcVar7);
        if (iVar5 == 0) {
          iVar5 = FUN_005b7580(pcVar7);
          if (iVar5 == 0) goto LAB_005412d2;
          goto LAB_005412b4;
        }
      }
      else {
        FUN_00572070();
        iVar5 = FUN_00591d90(pcVar7);
LAB_005412b4:
        if (iVar5 == 0) goto LAB_005412d2;
      }
      iVar5 = FUN_005b8550(uVar3);
      if ((iVar5 == 0) || (*(int *)(iVar5 + 0x18) != 2)) goto LAB_005412d2;
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
    puVar2 = (undefined4 *)local_30[4];
    *puVar2 = puVar6;
    local_30[4] = puVar6;
    puVar6[1] = puVar2;
    *puVar6 = local_30 + 3;
    FUN_00515e20(local_20,0x20,"option_mouse_%d",local_38);
    pcVar7 = *(char **)(param_1 + 0x10);
    uVar3 = FUN_005af1c0(local_20);
    if (pcVar7 == (char *)0x0) {
LAB_00541398:
      iVar5 = 0;
    }
    else {
      pcVar4 = pcVar7;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (pcVar4 == pcVar7 + 1) goto LAB_00541398;
      if (DAT_0091d218 < 1) {
        iVar5 = FUN_005b5b70(pcVar7);
        if (iVar5 == 0) {
          iVar5 = FUN_005b7580(pcVar7);
          if (iVar5 == 0) goto LAB_00541398;
          goto LAB_00541388;
        }
      }
      else {
        FUN_00572070();
        iVar5 = FUN_00591d90(pcVar7);
LAB_00541388:
        if (iVar5 == 0) goto LAB_00541398;
      }
      iVar5 = FUN_005b8550(uVar3);
      if (iVar5 == 0) goto LAB_00541398;
    }
    local_30[5] = iVar5;
    FUN_005922b0(local_30);
    local_38 = local_38 + 1;
    local_2c = local_2c + -1;
    if (local_2c == 0) {
      puVar6 = _malloc(0x18);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar2 = puVar6 + 3;
        *puVar6 = &PTR_FUN_0089d344;
        *puVar2 = puVar2;
        puVar6[4] = puVar2;
        *(undefined1 *)(puVar6 + 5) = 1;
      }
      uVar8 = 0;
      uVar3 = FUN_0056bc10(0xc91d620f,0);
      FUN_0051dcf0(uVar3,uVar8);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar8 = FUN_0056bc10(0xc91d620f);
      uVar8 = FUN_00573140("option_name_1",uVar8);
      FUN_005252d0(uVar3,uVar8);
      FUN_005868e0(puVar6);
      FUN_00592710(puVar6);
      puVar6 = _malloc(0x18);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar2 = puVar6 + 3;
        *puVar6 = &PTR_FUN_0089d344;
        *puVar2 = puVar2;
        puVar6[4] = puVar2;
        *(undefined1 *)(puVar6 + 5) = 1;
      }
      uVar8 = 0;
      uVar3 = FUN_0056bc10(0xa5b53f2b,0);
      FUN_0051dcf0(uVar3,uVar8);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar8 = FUN_0056bc10(0xa5b53f2b);
      uVar8 = FUN_00573140("option_name_2",uVar8);
      FUN_005252d0(uVar3,uVar8);
      FUN_005868e0(puVar6);
      FUN_00592710(puVar6);
      puVar6 = _malloc(0x18);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar2 = puVar6 + 3;
        *puVar6 = &PTR_FUN_0089d344;
        *puVar2 = puVar2;
        puVar6[4] = puVar2;
        *(undefined1 *)(puVar6 + 5) = 1;
      }
      uVar8 = 0;
      uVar3 = FUN_0056bc10(0xa276384,0);
      FUN_0051dcf0(uVar3,uVar8);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar8 = FUN_0056bc10(0xa276384);
      uVar8 = FUN_00573140("option_name_3",uVar8);
      FUN_005252d0(uVar3,uVar8);
      FUN_005868e0(puVar6);
      FUN_00592710(puVar6);
      puVar6 = _malloc(0x18);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar2 = puVar6 + 3;
        *puVar6 = &PTR_FUN_0089d344;
        *puVar2 = puVar2;
        puVar6[4] = puVar2;
        *(undefined1 *)(puVar6 + 5) = 1;
      }
      uVar8 = 0;
      uVar3 = FUN_0056bc10(0xa0c5d893,0);
      FUN_0051dcf0(uVar3,uVar8);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar8 = FUN_0056bc10(0xa0c5d893);
      uVar8 = FUN_00573140("option_name_4",uVar8);
      FUN_005252d0(uVar3,uVar8);
      FUN_005868e0(puVar6);
      FUN_00592710(puVar6);
      puVar6 = _malloc(0x18);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar2 = puVar6 + 3;
        *puVar6 = &PTR_FUN_0089d344;
        *puVar2 = puVar2;
        puVar6[4] = puVar2;
        *(undefined1 *)(puVar6 + 5) = 1;
      }
      uVar8 = 0;
      uVar3 = FUN_0056bc10(0xdbff7776,0);
      FUN_0051dcf0(uVar3,uVar8);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar8 = FUN_0056bc10(0xdbff7776);
      uVar8 = FUN_00573140("option_name_5",&DAT_008941f8,uVar8);
      FUN_005252d0(uVar3,uVar8);
      FUN_005868e0(puVar6);
      FUN_00592710(puVar6);
      puVar6 = _malloc(0x18);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar2 = puVar6 + 3;
        *puVar6 = &PTR_FUN_0089d344;
        *puVar2 = puVar2;
        puVar6[4] = puVar2;
        *(undefined1 *)(puVar6 + 5) = 1;
      }
      uVar8 = 0;
      uVar3 = FUN_0056bc10(0x1c775494,0);
      FUN_0051dcf0(uVar3,uVar8);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar8 = FUN_0056bc10(0x1c775494);
      uVar8 = FUN_00573140("option_name_6",uVar8);
      FUN_005252d0(uVar3,uVar8);
      FUN_005868e0(puVar6);
      FUN_00592710(puVar6);
      puVar6 = _malloc(0x18);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar2 = puVar6 + 3;
        *puVar6 = &PTR_FUN_0089d344;
        *puVar2 = puVar2;
        puVar6[4] = puVar2;
        *(undefined1 *)(puVar6 + 5) = 1;
      }
      uVar8 = 0;
      uVar3 = FUN_0056bc10(0x17b2522,0);
      FUN_0051dcf0(uVar3,uVar8);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar8 = FUN_0056bc10(0x17b2522);
      uVar8 = FUN_00573140("option_name_6",uVar8);
      FUN_005252d0(uVar3,uVar8);
      FUN_005868e0(puVar6);
      FUN_00592710(puVar6);
      if (*(int *)(param_1 + 0x60) != 0) {
        FUN_00586760(0x249db7b7);
      }
      FUN_005926b0(1);
      FUN_00589870(7,7,1,0xffffffff);
      return;
    }
  } while( true );
}

