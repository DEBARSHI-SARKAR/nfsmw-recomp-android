/* speed.exe 00454cc0 FUN_00454cc0; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_00454cc0(int *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_1[2] == 0) {
    return param_1[1];
  }
  iVar2 = *param_1;
  uVar3 = param_1[1];
  uVar5 = param_2 % uVar3;
  uVar6 = 0;
  uVar7 = *(uint *)(iVar2 + 8 + uVar5 * 0xc);
  if (uVar7 != 0) {
    do {
      puVar1 = (uint *)(iVar2 + uVar5 * 0xc);
      if ((uint *)puVar1[1] == puVar1) {
        uVar4 = 0;
      }
      else {
        uVar4 = *puVar1;
      }
      if (uVar4 == param_2) break;
      uVar5 = (uVar5 + 1) % uVar3;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  puVar1 = (uint *)(iVar2 + uVar5 * 0xc);
  if ((uint *)puVar1[1] == puVar1) {
    uVar7 = 0;
  }
  else {
    uVar7 = *puVar1;
  }
  if (uVar7 != param_2) {
    uVar5 = uVar3;
  }
  return uVar5;
}

