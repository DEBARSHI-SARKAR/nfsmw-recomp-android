/* speed.exe 00623f80 FUN_00623f80; analysis pseudocode, not buildable source.
 * calls 00516e30 FUN_00516e30
 * calls 0056dc00 FUN_0056dc00
 * calls 00516b50 FUN_00516b50
 * calls 005fab40 FUN_005fab40
 * calls 00569cc0 FUN_00569cc0
 * calls 005fbd20 FUN_005fbd20
 * calls 0056d7e0 FUN_0056d7e0
 * calls 00667340 FUN_00667340
 * calls 005dca70 FUN_005dca70
 * calls 0057fd60 FUN_0057fd60
 * calls 0056dba0 FUN_0056dba0
 * calls 00517250 FUN_00517250
 * calls 00517110 FUN_00517110
 * calls 00460dd0 FUN_00460dd0
 * calls 00511fe0 FUN_00511fe0
 * calls 00516e10 FUN_00516e10
 * calls 005169b0 FUN_005169b0
 */

void __fastcall FUN_00623f80(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008772b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a723c;
  local_4 = 0;
  if (DAT_00925e90 != 6) goto LAB_006242c3;
  uVar5 = *(uint *)(DAT_0091cf90 + 300);
  uVar3 = param_1[2];
  FUN_00516e10(uVar3);
  FUN_00516e30(uVar3);
  if (param_1[2] == 3) {
    *(uint *)(DAT_0091cf90 + 300) = *(uint *)(DAT_0091cf90 + 300) | 0x20;
  }
  iVar2 = *(int *)(DAT_0091e000 + 0x1964);
  if (iVar2 == 0) {
    if ((*(uint *)(DAT_0091cf90 + 300) >> 1 & 1) == 0) {
      *(undefined4 *)(DAT_0091cf90 + 300) = 0;
      *(uint *)(DAT_0091cf90 + 300) = *(uint *)(DAT_0091cf90 + 300) | 4;
      iVar2 = FUN_00516e10();
      *(char **)(iVar2 + 0xc) = "MainMenu_Sub.fng";
    }
    else {
      iVar2 = FUN_00516e10();
      *(char **)(iVar2 + 0xc) = "MainMenu.fng";
    }
LAB_00624245:
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  else if (iVar2 == 1) {
    if ((uVar5 >> 6 & 1) == 0) {
      uVar5 = *(uint *)(DAT_0091cf90 + 300) | 8;
    }
    else {
      uVar5 = *(uint *)(DAT_0091cf90 + 300) | 0x40;
    }
    *(uint *)(DAT_0091cf90 + 300) = uVar5;
    FUN_00516e10();
    FUN_00517110();
  }
  else {
    if (iVar2 != 2) {
      iVar2 = FUN_00516e10();
      *(char **)(iVar2 + 0xc) = "MainMenu.fng";
      goto LAB_00624245;
    }
    *(undefined4 *)(DAT_0091cf90 + 300) = 0;
    *(uint *)(DAT_0091cf90 + 300) = *(uint *)(DAT_0091cf90 + 300) | 1;
    iVar2 = FUN_00460dd0(param_1[3],"SafeHouseRivalChallenge.fng");
    if (iVar2 == 0) {
LAB_0062404c:
      *(uint *)(DAT_0091cf90 + 300) = *(uint *)(DAT_0091cf90 + 300) | 0x20000;
    }
    else {
      uVar3 = FUN_00517250();
      iVar2 = FUN_00460dd0(param_1[3],uVar3);
      if (iVar2 == 0) goto LAB_0062404c;
      if (param_1[2] == 5) {
        *(uint *)(DAT_0091cf90 + 300) = *(uint *)(DAT_0091cf90 + 300) | 0x8000;
        iVar2 = FUN_00516e10();
        *(char **)(iVar2 + 0xc) = "Car_Select.fng";
        goto LAB_006241ae;
      }
      if (*(int *)(DAT_0091e000 + 0x1968) == 0) {
        if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0) == '\x10') goto LAB_00624176;
LAB_006241a2:
        iVar2 = FUN_00516e10();
        *(char **)(iVar2 + 0xc) = "MainMenu_Sub.fng";
      }
      else {
        cVar1 = FUN_005fbd20();
        if (cVar1 != '\0') {
LAB_00624176:
          *(uint *)(DAT_0091cf90 + 300) = *(uint *)(DAT_0091cf90 + 300) & 0xfffffffe;
          uVar3 = 1;
          *(uint *)(DAT_0091cf90 + 300) = *(uint *)(DAT_0091cf90 + 300) | 0x100;
          FUN_00516e10(1);
          FUN_00516e30(uVar3);
          goto LAB_006241a2;
        }
        cVar1 = FUN_0056dc00();
        if (cVar1 == '\0') {
          DAT_0091ca3c = (uint)*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0);
          iVar2 = FUN_00516e10();
          *(char **)(iVar2 + 0xc) = "SafeHouseRaceSheet.fng";
        }
        else {
          uVar3 = FUN_005fab40();
          cVar1 = FUN_005dca70(uVar3,2);
          if (cVar1 == '\0') goto LAB_00624176;
          FUN_0056d7e0();
          uVar3 = 2;
          *(uint *)(DAT_0091cf90 + 300) = *(uint *)(DAT_0091cf90 + 300) | 0x40000;
          FUN_00516e10(2);
          FUN_00516e30(uVar3);
          FUN_00511fe0();
          iVar2 = FUN_00516e10();
          *(char **)(iVar2 + 0xc) = "GameWon.fng";
        }
      }
LAB_006241ae:
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined4 *)(iVar2 + 0x14) = 0;
    }
    if ((param_1[2] == 2) && (*(int *)(DAT_0091e000 + 0x1968) == 0)) {
      *(undefined1 *)(DAT_0091e00c + 0x110) = 1;
    }
  }
  iVar2 = param_1[3];
  if (iVar2 != 0) {
    iVar4 = FUN_00516e10();
    *(int *)(iVar4 + 0xc) = iVar2;
    *(undefined4 *)(iVar4 + 0x10) = 0;
    *(undefined4 *)(iVar4 + 0x14) = 0;
  }
  FUN_00569cc0();
  cVar1 = FUN_00516b50("FadeScreen.fng");
  if (cVar1 != '\0') {
    FUN_005169b0("FadeScreen.fng");
  }
  cVar1 = FUN_00516b50("Pause_Main.fng");
  if (cVar1 != '\0') {
    FUN_0057fd60(0);
  }
  FUN_00667340();
  FUN_0056dba0(1,0xffffffff);
LAB_006242c3:
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

