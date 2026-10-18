/* speed.exe 00533bb0 FUN_00533bb0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 005b7580 FUN_005b7580
 * calls 00591d90 FUN_00591d90
 * calls 005b8550 FUN_005b8550
 * calls 00515e20 FUN_00515e20
 * calls 005af1c0 FUN_005af1c0
 * calls 005b5b70 FUN_005b5b70
 * calls 005922b0 FUN_005922b0
 * calls 00572070 FUN_00572070
 */

void __fastcall FUN_00533bb0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  char *pcVar7;
  int local_3c;
  undefined4 *local_34;
  int local_30;
  int local_2c;
  undefined1 local_24 [36];
  
  local_3c = 1;
  local_2c = 3;
  do {
    local_34 = _malloc(0x2c);
    if (local_34 == (undefined4 *)0x0) {
      local_34 = (undefined4 *)0x0;
    }
    else {
      puVar5 = local_34 + 3;
      *local_34 = &PTR_FUN_0089d348;
      *puVar5 = puVar5;
      local_34[4] = puVar5;
      local_34[5] = 0;
      local_34[9] = 0;
      local_34[8] = 0;
      local_34[7] = 0;
      local_34[6] = 0;
      *(undefined1 *)(local_34 + 10) = 1;
    }
    FUN_00515e20(local_24,0x21,"option_%d",local_3c);
    pcVar7 = *(char **)(param_1 + 0x10);
    uVar2 = FUN_005af1c0(local_24);
    if (pcVar7 == (char *)0x0) {
LAB_00533cb2:
      local_30 = 0;
    }
    else {
      pcVar3 = pcVar7;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (pcVar3 == pcVar7 + 1) goto LAB_00533cb2;
      if (DAT_0091d218 < 1) {
        iVar4 = FUN_005b5b70(pcVar7);
        if (iVar4 == 0) {
          iVar4 = FUN_005b7580(pcVar7);
          if (iVar4 == 0) goto LAB_00533cb2;
          goto LAB_00533c94;
        }
      }
      else {
        FUN_00572070();
        iVar4 = FUN_00591d90(pcVar7);
LAB_00533c94:
        if (iVar4 == 0) goto LAB_00533cb2;
      }
      local_30 = FUN_005b8550(uVar2);
      if ((local_30 == 0) || (*(int *)(local_30 + 0x18) != 2)) goto LAB_00533cb2;
    }
    FUN_00515e20(local_24,0x21,"mouse_option_%d",local_3c);
    pcVar7 = *(char **)(param_1 + 0x10);
    uVar2 = FUN_005af1c0(local_24);
    if (pcVar7 == (char *)0x0) {
LAB_00533d48:
      iVar4 = 0;
    }
    else {
      pcVar3 = pcVar7;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (pcVar3 == pcVar7 + 1) goto LAB_00533d48;
      if (DAT_0091d218 < 1) {
        iVar4 = FUN_005b5b70(pcVar7);
        if (iVar4 == 0) {
          iVar4 = FUN_005b7580(pcVar7);
          if (iVar4 == 0) goto LAB_00533d48;
          goto LAB_00533d38;
        }
      }
      else {
        FUN_00572070();
        iVar4 = FUN_00591d90(pcVar7);
LAB_00533d38:
        if (iVar4 == 0) goto LAB_00533d48;
      }
      iVar4 = FUN_005b8550(uVar2);
      if (iVar4 == 0) goto LAB_00533d48;
    }
    local_34[5] = iVar4;
    puVar5 = _malloc(0x10);
    if (puVar5 == (undefined4 *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      *puVar5 = &PTR_FUN_0089c2bc;
      puVar5[3] = local_30;
      piVar6 = puVar5 + 1;
    }
    puVar5 = (undefined4 *)local_34[4];
    *puVar5 = piVar6;
    local_34[4] = piVar6;
    *piVar6 = (int)(local_34 + 3);
    piVar6[1] = (int)puVar5;
    FUN_005922b0(local_34);
    local_3c = local_3c + 1;
    local_2c = local_2c + -1;
    if (local_2c == 0) {
      return;
    }
  } while( true );
}

