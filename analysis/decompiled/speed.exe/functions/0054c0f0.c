/* speed.exe 0054c0f0 FUN_0054c0f0; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 00515e20 FUN_00515e20
 * calls 00586ca0 FUN_00586ca0
 * calls 005926b0 FUN_005926b0
 * calls 005868e0 FUN_005868e0
 * calls 0053fcd0 FUN_0053fcd0
 * calls 0051dcf0 FUN_0051dcf0
 * calls 005252d0 FUN_005252d0
 * calls 0059b710 FUN_0059b710
 * calls 00652ad0 _malloc
 * calls 0056bc10 FUN_0056bc10
 * calls 00586760 FUN_00586760
 * calls 00592710 FUN_00592710
 * calls 00586d40 FUN_00586d40
 * calls 005a8d10 FUN_005a8d10
 */

void __fastcall FUN_0054c0f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int local_50;
  int local_48;
  undefined1 local_40;
  undefined4 local_3f;
  
  local_48 = -1;
  if (*(int *)(param_1 + 0x58) != 0) {
    local_48 = *(int *)(*(int *)(param_1 + 0x58) + 0x18);
  }
  local_40 = 0;
  puVar6 = &local_3f;
  for (iVar8 = 0xf; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  FUN_00515e20(&local_40,0x40,&DAT_0089dfa0);
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_00586760(0x7ab5521a);
  }
  FUN_00586d40();
  local_50 = 0;
  iVar8 = 0;
  do {
    iVar1 = iVar8 + 1;
    uVar5 = FUN_00573140("OPTION_%d",iVar1);
    switch(iVar8) {
    case 0:
      if (DAT_0091c388 == 0) {
        if ((DAT_0091c370 != 0) || (DAT_0091c358 == 0)) {
          FUN_005252d0(*(undefined4 *)(param_1 + 0x10),uVar5,"-BLOCKED-");
          uVar5 = FUN_0056bc10(0x7087ce45);
          FUN_00515e20(&local_40,0x40,uVar5);
          goto switchD_0054c180_caseD_2;
        }
        if (DAT_0091c368 == 0) {
          FUN_005252d0(*(undefined4 *)(param_1 + 0x10),uVar5,"Send Message");
          uVar5 = FUN_0056bc10(0x12107ffe);
          FUN_00515e20(&local_40,0x40,uVar5);
        }
        else {
          FUN_005252d0(*(undefined4 *)(param_1 + 0x10),uVar5,"Send Group Message");
          uVar5 = FUN_0056bc10(0xb8ed90f3);
          FUN_00515e20(&local_40,0x40,uVar5);
        }
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x10);
        uVar7 = FUN_0056bc10(0x748bc8b9);
        FUN_005252d0(uVar3,uVar5,uVar7);
        uVar5 = FUN_0056bc10(0x748bc8b9);
        FUN_00515e20(&local_40,0x40,uVar5);
      }
      break;
    case 1:
      cVar4 = FUN_0053fcd0(&local_40);
      if (cVar4 != '\0') break;
    default:
      goto switchD_0054c180_caseD_2;
    case 3:
      if (DAT_0091c370 == 0) {
        uVar3 = *(undefined4 *)(param_1 + 0x10);
        if (DAT_0091c358 == 0) {
          if (DAT_0091c360 == 0) {
            if (DAT_0091c35c == 0) {
              uVar7 = FUN_0056bc10(0x333f7902);
              FUN_005252d0(uVar3,uVar5,uVar7);
              uVar5 = FUN_0056bc10(0x333f7902);
              FUN_00515e20(&local_40,0x40,uVar5);
            }
            else {
              uVar7 = FUN_0056bc10(0xf8bcee28);
              FUN_005252d0(uVar3,uVar5,uVar7);
              uVar5 = FUN_0056bc10(0xf8bcee28);
              FUN_00515e20(&local_40,0x40,uVar5);
            }
          }
          else {
            uVar7 = FUN_0056bc10(0xe59bfb1e);
            FUN_005252d0(uVar3,uVar5,uVar7);
            uVar5 = FUN_0056bc10(0xe59bfb1e);
            FUN_00515e20(&local_40,0x40,uVar5);
          }
        }
        else {
          uVar7 = FUN_0056bc10(0xab6c5a1e);
          FUN_005252d0(uVar3,uVar5,uVar7);
          uVar5 = FUN_0056bc10(0xab6c5a1e);
          FUN_00515e20(&local_40,0x40,uVar5);
        }
        break;
      }
      goto switchD_0054c180_caseD_2;
    case 4:
      uVar5 = FUN_0056bc10(0x9633e6c2);
      FUN_00515e20(&local_40,0x40,uVar5);
      break;
    case 5:
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      if (DAT_0091c370 == 0) {
        uVar7 = FUN_0056bc10(0x308db484);
        FUN_005252d0(uVar3,uVar5,uVar7);
        uVar5 = FUN_0056bc10(0x308db484);
        FUN_00515e20(&local_40,0x40,uVar5);
      }
      else {
        uVar7 = FUN_0056bc10(0x452383e7);
        FUN_005252d0(uVar3,uVar5,uVar7);
        uVar5 = FUN_0056bc10(0x452383e7);
        FUN_00515e20(&local_40,0x40,uVar5);
      }
      break;
    case 6:
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar7 = FUN_0056bc10(0x6353f07e);
      FUN_005252d0(uVar3,uVar5,uVar7);
      uVar5 = FUN_0056bc10(0x6353f07e);
      FUN_00515e20(&local_40,0x40,uVar5);
    }
    puVar6 = _malloc(0x1c);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar2 = puVar6 + 3;
      *puVar2 = puVar2;
      puVar6[4] = puVar2;
      *(undefined1 *)(puVar6 + 5) = 1;
      *puVar6 = &PTR_FUN_0089e230;
      puVar6[6] = 0xffffffff;
    }
    FUN_0051dcf0(&local_40,0);
    puVar6[6] = iVar8;
    FUN_005868e0(puVar6);
    FUN_00592710(puVar6);
    local_50 = local_50 + 1;
switchD_0054c180_caseD_2:
    iVar8 = iVar1;
  } while (iVar1 < 7);
  while (local_50 < 7) {
    local_50 = local_50 + 1;
    uVar5 = FUN_00573140("OPTION_%d",local_50);
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),uVar5,&DAT_0089dfa0);
  }
  FUN_0059b710(1);
  if (local_48 != -1) {
    if (*(int *)(param_1 + 0x44) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(param_1 + 0x44) + -4;
    }
    uVar9 = 0;
    if (*(uint *)(param_1 + 0x50) != 0) {
      do {
        if (*(int *)(iVar8 + 0x18) == local_48) {
          iVar8 = FUN_00586ca0(iVar8);
          FUN_005a8d10(iVar8 + -1);
          break;
        }
        if (*(int *)(iVar8 + 4) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(iVar8 + 4) + -4;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_1 + 0x50));
    }
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_00586760(0x249db7b7);
  }
  FUN_005926b0(1);
  return;
}

