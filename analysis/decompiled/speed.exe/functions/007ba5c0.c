/* speed.exe 007ba5c0 FUN_007ba5c0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00601060 FUN_00601060
 * calls 005e3980 FUN_005e3980
 * calls 005dcf70 thunk_FUN_005da7a0
 * calls 00546400 FUN_00546400
 * calls 007aac70 FUN_007aac70
 * calls 005dcf60 thunk_FUN_005d97a0
 * calls 00601020 FUN_00601020
 * calls 005fb710 FUN_005fb710
 */

void __fastcall FUN_007ba5c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_4;
  
  piVar1 = *(int **)(param_1 + 0xfc);
  while (piVar1 != (int *)(param_1 + 0xfc)) {
    iVar6 = *piVar1;
    piVar2 = (int *)piVar1[1];
    *piVar2 = iVar6;
    *(int **)(iVar6 + 4) = piVar2;
    thunk_FUN_007c7250(piVar1);
    piVar1 = *(int **)(param_1 + 0xfc);
  }
  local_4 = 0;
  if ((*(byte *)(DAT_0091cf90 + 300) & 1) == 0) {
    uVar7 = *(uint *)(DAT_0091cf90 + 300);
    if ((uVar7 >> 2 & 1) == 0) {
      if (((uVar7 >> 3 & 1) != 0) || ((uVar7 >> 6 & 1) != 0)) {
        local_4 = 4;
      }
    }
    else {
      local_4 = 1;
    }
  }
  else {
    local_4 = 2;
  }
  *(undefined4 *)(param_1 + 0x104) = 0;
  iVar6 = 0x15;
  do {
    FUN_005e3980(iVar6);
    uVar7 = 0;
    iVar3 = thunk_FUN_005da7a0();
    if (iVar3 != 0) {
      do {
        uVar4 = FUN_00601060(uVar7);
        uVar4 = FUN_005fb710(uVar4);
        FUN_007aac70(uVar4,local_4,iVar6);
        uVar7 = uVar7 + 1;
        uVar5 = thunk_FUN_005da7a0();
      } while (uVar7 < uVar5);
    }
    uVar7 = 0;
    iVar3 = thunk_FUN_005d97a0();
    if (iVar3 != 0) {
      do {
        uVar4 = FUN_00601020(uVar7);
        uVar4 = FUN_005fb710(uVar4);
        FUN_007aac70(uVar4,local_4,iVar6);
        uVar7 = uVar7 + 1;
        uVar5 = thunk_FUN_005d97a0();
      } while (uVar7 < uVar5);
    }
    if (iVar6 == 0x15) {
      iVar6 = 0x10;
    }
    iVar6 = iVar6 + -1;
  } while (0 < iVar6);
  if (*(int *)(param_1 + 0x104) == 0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    iVar6 = FUN_0045d3a0(0);
    if (0 < iVar6) {
      *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xfc);
    }
  }
  if (*(int *)(param_1 + 0x104) != 0) {
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(*(int *)(param_1 + 0x104) + 8);
  }
  FUN_00546400(*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c),0,0);
  return;
}

