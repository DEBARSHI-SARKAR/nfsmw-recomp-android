/* speed.exe 00528bc0 FUN_00528bc0; analysis pseudocode, not buildable source.
 * calls 0056db00 FUN_0056db00
 * calls 00514cc0 FUN_00514cc0
 * calls 005b8550 FUN_005b8550
 * calls 005a8780 FUN_005a8780
 * calls 005af1c0 FUN_005af1c0
 * calls 00514c70 FUN_00514c70
 * calls 0056bb20 FUN_0056bb20
 * calls 005252d0 FUN_005252d0
 * calls 00516af0 FUN_00516af0
 */

void __fastcall FUN_00528bc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  ushort local_4;
  
  if (*(char *)(DAT_0091cf90 + 3) == '\0') {
    iVar1 = *(int *)(param_1 + 0x10);
    uVar3 = FUN_005af1c0("NAME_GROUP");
    if (iVar1 == 0) {
LAB_00528ddd:
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00516af0(iVar1);
      if (iVar1 == 0) goto LAB_00528ddd;
      iVar1 = FUN_005b8550(uVar3);
      if (iVar1 == 0) goto LAB_00528ddd;
    }
    FUN_00514c70(iVar1);
    iVar1 = *(int *)(param_1 + 0x10);
    uVar3 = FUN_005af1c0("GAME STATS GROUP");
    if (iVar1 != 0) {
      iVar1 = FUN_00516af0(iVar1);
      if (iVar1 != 0) {
        iVar1 = FUN_005b8550(uVar3);
        if (iVar1 != 0) goto LAB_00528e19;
      }
    }
    iVar1 = 0;
LAB_00528e19:
    FUN_00514c70(iVar1);
    return;
  }
  FUN_005a8780(&local_8);
  puVar4 = &DAT_0089cef0;
  iVar1 = FUN_0056bb20();
  if ((((iVar1 == 7) || (iVar1 == 0xd)) || (iVar1 == 1)) || ((iVar1 == 2 || (iVar1 == 6)))) {
    puVar4 = &DAT_0089ceec;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_005af1c0("GAME_COMPLETED_DATA",&DAT_0089cee4,local_8,puVar4);
  FUN_005252d0(uVar3,uVar2);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_005af1c0("CAREER_COMPLETED_DATA",&DAT_0089cee4,local_7,puVar4);
  FUN_005252d0(uVar3,uVar2);
  iVar1 = *(int *)(param_1 + 0x10);
  uVar3 = FUN_005af1c0("RAP_SHEET_ITEMS_DATA_1");
  if (iVar1 == 0) {
LAB_00528c87:
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00516af0(iVar1);
    if (iVar1 == 0) goto LAB_00528c87;
    iVar1 = FUN_005b8550(uVar3);
    if (iVar1 == 0) goto LAB_00528c87;
  }
  FUN_00514c70(iVar1);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_005af1c0("RAP_SHEET_ITEMS_DATA_2",&DAT_0089cee4,local_6,puVar4);
  FUN_005252d0(uVar3,uVar2);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_005af1c0("CHALLENGE_SERIES_DATA_1","%d/%d",local_4 >> 8,local_4 & 0xff);
  FUN_005252d0(uVar3,uVar2);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_005af1c0("CHALLENGE_SERIES_DATA_2",&DAT_0089cee4,local_5,puVar4);
  FUN_005252d0(uVar3,uVar2);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_0056db00();
  FUN_005252d0(uVar3,0xb514e2d8,&DAT_008941f8,uVar2);
  iVar1 = *(int *)(param_1 + 0x10);
  uVar3 = FUN_005af1c0("NAME_GROUP");
  if (iVar1 == 0) {
LAB_00528d5f:
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00516af0(iVar1);
    if (iVar1 == 0) goto LAB_00528d5f;
    iVar1 = FUN_005b8550(uVar3);
    if (iVar1 == 0) goto LAB_00528d5f;
  }
  FUN_00514cc0(iVar1);
  iVar1 = *(int *)(param_1 + 0x10);
  uVar3 = FUN_005af1c0("GAME STATS GROUP");
  if (iVar1 != 0) {
    iVar1 = FUN_00516af0(iVar1);
    if (iVar1 != 0) {
      iVar1 = FUN_005b8550(uVar3);
      if (iVar1 != 0) goto LAB_00528d9b;
    }
  }
  iVar1 = 0;
LAB_00528d9b:
  FUN_00514cc0(iVar1);
  return;
}

