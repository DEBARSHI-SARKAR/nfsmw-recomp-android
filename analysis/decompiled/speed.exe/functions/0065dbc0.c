/* speed.exe 0065dbc0 FUN_0065dbc0; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_0065dbc0(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_1[2] == 0) {
    return param_1[1];
  }
  iVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = param_2 % uVar2;
  uVar6 = 0;
  uVar8 = *(uint *)(uVar5 * 0x10 + 0xc + iVar1);
  if (uVar8 != 0) {
    do {
      puVar3 = (uint *)(uVar5 * 0x10 + iVar1);
      if (*(uint **)(uVar5 * 0x10 + 8 + iVar1) == puVar3) {
        uVar7 = 0;
        uVar4 = 0;
      }
      else {
        uVar7 = *puVar3;
        uVar4 = puVar3[1];
      }
      if ((uVar7 == param_2) && (uVar4 == param_3)) break;
      uVar5 = (uVar5 + 1) % uVar2;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
  puVar3 = (uint *)(uVar5 * 0x10 + iVar1);
  if (*(uint **)(uVar5 * 0x10 + 8 + iVar1) == puVar3) {
    uVar8 = 0;
    uVar6 = 0;
  }
  else {
    uVar8 = *puVar3;
    uVar6 = puVar3[1];
  }
  if ((uVar8 != param_2) || (uVar6 != param_3)) {
    uVar5 = uVar2;
  }
  return uVar5;
}

