/* speed.exe 004fd070 FUN_004fd070; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 */

void __thiscall
FUN_004fd070(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined2 param_8,undefined1 param_9,
            undefined1 param_10)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar4;
  int iVar5;
  uint uVar6;
  byte bVar3;
  
  bVar3 = 0;
  bVar2 = 0;
  if (1 < (int)param_4) {
    do {
      bVar2 = bVar3 + 1;
      bVar3 = bVar2;
    } while (1 << (bVar2 & 0x1f) < (int)param_4);
  }
  bVar3 = 0;
  bVar4 = 0;
  if (1 < param_5) {
    do {
      bVar3 = bVar4 + 1;
      bVar4 = bVar3;
    } while (1 << (bVar3 & 0x1f) < param_5);
  }
  iVar5 = 0;
  switch(param_6) {
  case 4:
  case 0x21:
  case 0x22:
  case 0x24:
    uVar6 = param_4 - 1 & 1;
    goto LAB_004fd103;
  case 8:
  case 0x80:
  case 0x81:
    uVar6 = param_4;
LAB_004fd103:
    iVar5 = uVar6 * param_5;
    break;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    iVar5 = param_4 * param_5 * 2;
    break;
  case 0x18:
    iVar5 = param_4 * param_5 * 3;
    break;
  case 0x20:
    iVar5 = param_4 * param_5 * 4;
  }
  *(undefined4 *)(param_1 + 0xc) = *param_2;
  *(undefined4 *)(param_1 + 0x10) = param_2[1];
  *(undefined4 *)(param_1 + 0x14) = param_2[2];
  *(undefined4 *)(param_1 + 0x18) = param_2[3];
  *(undefined4 *)(param_1 + 0x1c) = param_2[4];
  *(undefined4 *)(param_1 + 0x20) = param_2[5];
  *(undefined1 *)(param_1 + 0x23) = 0;
  uVar1 = FUN_00460bf0(param_2);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined1 *)(param_1 + 0x4a) = (undefined1)param_6;
  *(undefined2 *)(param_1 + 0x44) = (undefined2)param_4;
  *(undefined2 *)(param_1 + 0x4c) = param_8;
  *(byte *)(param_1 + 0x49) = bVar3;
  *(byte *)(param_1 + 0x48) = bVar2;
  *(undefined1 *)(param_1 + 0x55) = param_9;
  *(undefined2 *)(param_1 + 0x62) = 0x100;
  *(undefined2 *)(param_1 + 100) = 0x100;
  *(int *)(param_1 + 0x40) = iVar5;
  *(int *)(param_1 + 0x38) = iVar5;
  *(short *)(param_1 + 0x46) = (short)param_5;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined2 *)(param_1 + 0x5e) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 1;
  *(undefined1 *)(param_1 + 0x56) = param_10;
  *(int *)(param_1 + 0x6c) = param_1;
  *(undefined4 *)(param_1 + 0x70) = param_3;
  *(undefined4 *)(param_1 + 0x74) = param_7;
  *(undefined4 *)(param_1 + 0x78) = 1;
  return;
}

