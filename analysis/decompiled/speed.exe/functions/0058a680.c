/* speed.exe 0058a680 FUN_0058a680; analysis pseudocode, not buildable source.
 * calls 0058a680 FUN_0058a680
 */

uint FUN_0058a680(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int *piVar8;
  int iVar9;
  
  bVar7 = 0;
  iVar9 = 0;
  switch(param_2) {
  case 1:
    bVar5 = FUN_0058a680(param_1,0xb,param_3);
    bVar6 = FUN_0058a680(param_1,0xc,param_3);
    bVar1 = FUN_0058a680(param_1,0xd,param_3);
    bVar2 = FUN_0058a680(param_1,0xe,param_3);
    bVar3 = FUN_0058a680(param_1,0xf,param_3);
    bVar4 = FUN_0058a680(param_1,0x11,param_3);
    bVar7 = FUN_0058a680(param_1,0x19,param_3);
    bVar7 = bVar5 | bVar6 | bVar1 | bVar2 | bVar3 | bVar4 | bVar7;
    break;
  case 2:
    bVar5 = FUN_0058a680(param_1,4,param_3);
    bVar6 = FUN_0058a680(param_1,5,param_3);
    bVar1 = FUN_0058a680(param_1,6,param_3);
    bVar2 = FUN_0058a680(param_1,7,param_3);
    bVar3 = FUN_0058a680(param_1,8,param_3);
    bVar4 = FUN_0058a680(param_1,9,param_3);
    bVar7 = FUN_0058a680(param_1,10,param_3);
    bVar7 = bVar5 | bVar6 | bVar1 | bVar2 | bVar3 | bVar4 | bVar7;
    break;
  case 3:
    bVar5 = FUN_0058a680(param_1,0x13,param_3);
    bVar6 = FUN_0058a680(param_1,0x23,param_3);
    bVar7 = FUN_0058a680(param_1,0x2c,param_3);
    bVar7 = bVar5 | bVar6 | bVar7;
    break;
  case 4:
    iVar9 = 6;
    break;
  case 5:
    iVar9 = 1;
    break;
  case 6:
    iVar9 = 5;
    break;
  case 7:
    iVar9 = 7;
    break;
  case 8:
    iVar9 = 2;
    break;
  case 9:
    iVar9 = 4;
    break;
  case 10:
    iVar9 = 3;
    break;
  case 0xb:
    iVar9 = 8;
    break;
  case 0xc:
    iVar9 = 10;
    break;
  case 0xd:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
    iVar9 = 0xb;
    break;
  case 0xe:
    iVar9 = 9;
    break;
  case 0xf:
    iVar9 = 0xc;
    break;
  default:
    return 0;
  case 0x11:
    iVar9 = 0xd;
    break;
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
    iVar9 = 0x10;
    break;
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
    iVar9 = 0xe;
    break;
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
    iVar9 = 0xf;
  }
  piVar8 = &DAT_0091d92c;
  while ((piVar8[-1] != iVar9 || (((*piVar8 != 0 && (iVar9 != 0xe)) || (piVar8[1] != 1))))) {
    piVar8 = piVar8 + 3;
    if (0x91dc1f < (int)piVar8) {
      return CONCAT31((int3)((uint)piVar8 >> 8),bVar7);
    }
  }
  return CONCAT31((int3)((uint)piVar8 >> 8),bVar7) | 1;
}

