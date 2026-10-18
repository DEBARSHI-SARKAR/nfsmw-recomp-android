/* speed.exe 00540770 FUN_00540770; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00515e20 FUN_00515e20
 * calls 005af1c0 FUN_005af1c0
 * calls 005b5b70 FUN_005b5b70
 * calls 005b7580 FUN_005b7580
 * calls 005922b0 FUN_005922b0
 * calls 00591d90 FUN_00591d90
 * calls 0078c730 FUN_0078c730
 * calls 008370c0 FUN_008370c0
 * calls 00572070 FUN_00572070
 * calls 00652ad0 _malloc
 */

void __fastcall FUN_00540770(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iStack_38;
  undefined4 *puStack_34;
  int iStack_2c;
  undefined1 auStack_20 [32];
  
  iStack_2c = 0;
  while( true ) {
    iVar3 = FUN_0078c730();
    iVar3 = FUN_008370c0(*(undefined4 *)(iVar3 + 0xf8),iStack_2c);
    if (iVar3 == 0) break;
    iStack_2c = iStack_2c + 1;
  }
  if (7 < iStack_2c) {
    iStack_2c = 8;
  }
  if (0 < iStack_2c) {
    iStack_38 = 1;
    do {
      puStack_34 = _malloc(0x2c);
      if (puStack_34 == (undefined4 *)0x0) {
        puStack_34 = (undefined4 *)0x0;
      }
      else {
        puVar6 = puStack_34 + 3;
        *puStack_34 = &PTR_FUN_0089d348;
        *puVar6 = puVar6;
        puStack_34[4] = puVar6;
        puStack_34[5] = 0;
        puStack_34[9] = 0;
        puStack_34[8] = 0;
        puStack_34[7] = 0;
        puStack_34[6] = 0;
        *(undefined1 *)(puStack_34 + 10) = 1;
      }
      FUN_00515e20(auStack_20,0x20,"option_%d",iStack_38);
      pcVar7 = *(char **)(param_1 + 0x10);
      uVar4 = FUN_005af1c0(auStack_20);
      if (pcVar7 == (char *)0x0) {
LAB_0054089a:
        iVar3 = 0;
      }
      else {
        pcVar5 = pcVar7;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        if (pcVar5 == pcVar7 + 1) goto LAB_0054089a;
        if (DAT_0091d218 < 1) {
          iVar3 = FUN_005b5b70(pcVar7);
          if (iVar3 == 0) {
            iVar3 = FUN_005b7580(pcVar7);
            if (iVar3 == 0) goto LAB_0054089a;
            goto LAB_0054087c;
          }
        }
        else {
          FUN_00572070();
          iVar3 = FUN_00591d90(pcVar7);
LAB_0054087c:
          if (iVar3 == 0) goto LAB_0054089a;
        }
        iVar3 = FUN_005b8550(uVar4);
        if ((iVar3 == 0) || (*(int *)(iVar3 + 0x18) != 2)) goto LAB_0054089a;
      }
      puVar6 = _malloc(0x10);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = &PTR_FUN_0089c2bc;
        puVar6[3] = iVar3;
        puVar6 = puVar6 + 1;
      }
      puVar2 = (undefined4 *)puStack_34[4];
      *puVar2 = puVar6;
      puStack_34[4] = puVar6;
      puVar6[1] = puVar2;
      *puVar6 = puStack_34 + 3;
      FUN_00515e20(auStack_20,0x20,"option_mouse_%d",iStack_38);
      pcVar7 = *(char **)(param_1 + 0x10);
      uVar4 = FUN_005af1c0(auStack_20);
      if (pcVar7 == (char *)0x0) {
LAB_00540965:
        iVar3 = 0;
      }
      else {
        pcVar5 = pcVar7;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        if (pcVar5 == pcVar7 + 1) goto LAB_00540965;
        if (DAT_0091d218 < 1) {
          iVar3 = FUN_005b5b70(pcVar7);
          if (iVar3 == 0) {
            iVar3 = FUN_005b7580(pcVar7);
            if (iVar3 == 0) goto LAB_00540965;
            goto LAB_00540955;
          }
        }
        else {
          FUN_00572070();
          iVar3 = FUN_00591d90(pcVar7);
LAB_00540955:
          if (iVar3 == 0) goto LAB_00540965;
        }
        iVar3 = FUN_005b8550(uVar4);
        if (iVar3 == 0) goto LAB_00540965;
      }
      puStack_34[5] = iVar3;
      FUN_005922b0(puStack_34);
      iStack_38 = iStack_38 + 1;
      iStack_2c = iStack_2c + -1;
    } while (iStack_2c != 0);
  }
  return;
}

