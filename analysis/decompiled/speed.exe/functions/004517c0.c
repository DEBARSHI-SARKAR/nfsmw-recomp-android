/* speed.exe 004517c0 FUN_004517c0; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_004517c0(byte *param_1,uint param_2)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_4;
  
  uVar4 = 0x9e3779b9;
  uVar2 = 0x9e3779b9;
  uVar3 = param_2;
  if (0xb < param_2) {
    local_4 = param_2 / 0xc;
    do {
      iVar1 = param_1[4] + uVar4 + (uint)*(uint3 *)(param_1 + 5) * 0x100;
      uVar4 = param_1[8] + in_EAX + (uint)*(uint3 *)(param_1 + 9) * 0x100;
      uVar2 = ((*(int *)param_1 - uVar4) - iVar1) + uVar2 ^ uVar4 >> 0xd;
      uVar5 = (iVar1 - uVar4) - uVar2 ^ uVar2 << 8;
      uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 0xd;
      uVar2 = (uVar2 - uVar4) - uVar5 ^ uVar4 >> 0xc;
      uVar6 = (uVar5 - uVar4) - uVar2 ^ uVar2 << 0x10;
      uVar5 = (uVar4 - uVar6) - uVar2 ^ uVar6 >> 5;
      uVar2 = (uVar2 - uVar5) - uVar6 ^ uVar5 >> 3;
      uVar4 = (uVar6 - uVar5) - uVar2 ^ uVar2 << 10;
      in_EAX = (uVar5 - uVar4) - uVar2 ^ uVar4 >> 0xf;
      param_1 = param_1 + 0xc;
      uVar3 = uVar3 - 0xc;
      local_4 = local_4 - 1;
    } while (local_4 != 0);
  }
  param_2 = in_EAX + param_2;
  switch(uVar3) {
  case 0xb:
    param_2 = param_2 + (uint)param_1[10] * 0x1000000;
  case 10:
    param_2 = param_2 + (uint)param_1[9] * 0x10000;
  case 9:
    param_2 = param_2 + (uint)param_1[8] * 0x100;
  case 8:
    uVar4 = uVar4 + (uint)param_1[7] * 0x1000000;
  case 7:
    uVar4 = uVar4 + (uint)param_1[6] * 0x10000;
  case 6:
    uVar4 = uVar4 + (uint)param_1[5] * 0x100;
  case 5:
    uVar4 = uVar4 + param_1[4];
  case 4:
    uVar2 = uVar2 + (uint)param_1[3] * 0x1000000;
  case 3:
    uVar2 = uVar2 + (uint)param_1[2] * 0x10000;
  case 2:
    uVar2 = uVar2 + (uint)param_1[1] * 0x100;
  case 1:
    uVar2 = uVar2 + *param_1;
  default:
    uVar3 = (uVar2 - param_2) - uVar4 ^ param_2 >> 0xd;
    uVar4 = (uVar4 - param_2) - uVar3 ^ uVar3 << 8;
    uVar2 = (param_2 - uVar4) - uVar3 ^ uVar4 >> 0xd;
    uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xc;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 << 0x10;
    uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 5;
    uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 3;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 << 10;
    return (uVar2 - uVar4) - uVar3 ^ uVar4 >> 0xf;
  }
}

