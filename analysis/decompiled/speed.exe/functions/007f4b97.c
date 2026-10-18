/* speed.exe 007f4b97 FUN_007f4b97; analysis pseudocode, not buildable source.
 * calls 007f72e7 FUN_007f72e7
 * calls 007f5da9 FUN_007f5da9
 */

void __thiscall FUN_007f4b97(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 0x7c);
  iVar4 = 0;
  if (*(char *)(param_1 + 0x6a) != '\0') {
    uVar3 = uVar3 | 0x500;
  }
  uVar2 = FUN_007f72e7(param_2);
  uVar3 = uVar3 | uVar2;
  if (*(uint *)(param_1 + 0x80) != 0) {
    uVar3 = uVar3 & ~*(uint *)(param_1 + 0x80);
  }
  switch(*(undefined4 *)(param_2 + 0xc)) {
  case 7:
    bVar1 = (byte)(uVar3 >> 8);
    goto LAB_007f4c0a;
  case 8:
    bVar1 = (byte)(uVar3 >> 10);
    break;
  case 9:
    bVar1 = (byte)(uVar3 >> 0xb);
    break;
  case 10:
    bVar1 = (byte)(uVar3 >> 0xe);
    break;
  case 0xb:
    bVar1 = (byte)(uVar3 >> 0xf);
    break;
  case 0xc:
    bVar1 = (byte)(uVar3 >> 0x10);
LAB_007f4c0a:
    bVar1 = ~bVar1 & 1;
    iVar4 = 2;
    goto LAB_007f4c2a;
  case 0xd:
    bVar1 = (byte)(uVar3 >> 0x12);
    break;
  case 0xe:
    bVar1 = (byte)(uVar3 >> 0x13);
    break;
  default:
    bVar1 = 1;
    goto LAB_007f4c2a;
  }
  bVar1 = ~bVar1 & 1;
  iVar4 = 1;
LAB_007f4c2a:
  if (bVar1 == 0) {
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x74) = iVar4;
    }
  }
  else {
    FUN_007f5da9((undefined4 *)(param_2 + 0xc));
  }
  return;
}

