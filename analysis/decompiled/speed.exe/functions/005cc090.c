/* speed.exe 005cc090 FUN_005cc090; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_005cc090(undefined4 param_1,uint param_2,uint param_3)

{
  byte *in_EAX;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = 0x9e3779b9;
  uVar5 = 0x9e3779b9;
  uVar3 = param_3;
  if (0xb < param_3) {
    uVar2 = param_3 / 0xc;
    do {
      param_2 = param_2 + *(int *)(in_EAX + 8);
      uVar5 = ((*(int *)in_EAX - param_2) - (uVar1 + *(int *)(in_EAX + 4))) + uVar5 ^ param_2 >> 0xd
      ;
      uVar1 = ((uVar1 + *(int *)(in_EAX + 4)) - param_2) - uVar5 ^ uVar5 << 8;
      uVar4 = (param_2 - uVar1) - uVar5 ^ uVar1 >> 0xd;
      uVar5 = (uVar5 - uVar4) - uVar1 ^ uVar4 >> 0xc;
      uVar1 = (uVar1 - uVar4) - uVar5 ^ uVar5 << 0x10;
      uVar4 = (uVar4 - uVar1) - uVar5 ^ uVar1 >> 5;
      uVar5 = (uVar5 - uVar4) - uVar1 ^ uVar4 >> 3;
      uVar1 = (uVar1 - uVar4) - uVar5 ^ uVar5 << 10;
      param_2 = (uVar4 - uVar1) - uVar5 ^ uVar1 >> 0xf;
      in_EAX = in_EAX + 0xc;
      uVar3 = uVar3 - 0xc;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  param_2 = param_2 + param_3;
  switch(uVar3) {
  case 0xb:
    param_2 = param_2 + (uint)in_EAX[10] * 0x1000000;
  case 10:
    param_2 = param_2 + (uint)in_EAX[9] * 0x10000;
  case 9:
    param_2 = param_2 + (uint)in_EAX[8] * 0x100;
  case 8:
    uVar1 = uVar1 + (uint)in_EAX[7] * 0x1000000;
  case 7:
    uVar1 = uVar1 + (uint)in_EAX[6] * 0x10000;
  case 6:
    uVar1 = uVar1 + (uint)in_EAX[5] * 0x100;
  case 5:
    uVar1 = uVar1 + in_EAX[4];
  case 4:
    uVar5 = uVar5 + (uint)in_EAX[3] * 0x1000000;
  case 3:
    uVar5 = uVar5 + (uint)in_EAX[2] * 0x10000;
  case 2:
    uVar5 = uVar5 + (uint)in_EAX[1] * 0x100;
  case 1:
    uVar5 = uVar5 + *in_EAX;
  default:
    uVar2 = (uVar5 - param_2) - uVar1 ^ param_2 >> 0xd;
    uVar3 = (uVar1 - param_2) - uVar2 ^ uVar2 << 8;
    uVar5 = (param_2 - uVar3) - uVar2 ^ uVar3 >> 0xd;
    uVar1 = (uVar2 - uVar5) - uVar3 ^ uVar5 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar1 ^ uVar1 << 0x10;
    uVar5 = (uVar5 - uVar3) - uVar1 ^ uVar3 >> 5;
    uVar1 = (uVar1 - uVar5) - uVar3 ^ uVar5 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar1 ^ uVar1 << 10;
    return (uVar5 - uVar3) - uVar1 ^ uVar3 >> 0xf;
  }
}

