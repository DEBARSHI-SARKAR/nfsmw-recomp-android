/* speed.exe 00453a20 FUN_00453a20; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_00453a20(int *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((param_1[2] == 0) || (param_2 == 0)) {
    return param_1[1];
  }
  uVar2 = param_1[1];
  iVar3 = *param_1;
  bVar4 = (byte)*(undefined2 *)((int)param_1 + 0xe);
  uVar7 = (param_2 >> (0x20 - bVar4 & 0x1f) | param_2 << (bVar4 & 0x1f)) % uVar2;
  uVar8 = 0;
  uVar6 = (uint)*(byte *)(iVar3 + 10 + uVar7 * 0xc);
  if (uVar6 != 0) {
    do {
      puVar1 = (uint *)(iVar3 + uVar7 * 0xc);
      if (((*(byte *)(iVar3 + 0xb + uVar7 * 0xc) & 0x10) == 0) && ((uint *)puVar1[1] == puVar1)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *puVar1;
      }
      if (uVar5 == param_2) break;
      uVar7 = (uVar7 + 1) % uVar2;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  puVar1 = (uint *)(iVar3 + uVar7 * 0xc);
  if (((*(byte *)(iVar3 + 0xb + uVar7 * 0xc) & 0x10) == 0) && ((uint *)puVar1[1] == puVar1)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *puVar1;
  }
  if (uVar6 != param_2) {
    uVar7 = uVar2;
  }
  return uVar7;
}

