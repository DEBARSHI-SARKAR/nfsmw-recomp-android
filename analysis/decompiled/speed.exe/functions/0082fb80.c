/* speed.exe 0082fb80 FUN_0082fb80; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Removing unreachable block (ram,0x0082fc09) */

int FUN_0082fb80(int param_1,int param_2,int param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if ((-1 < *(short *)(param_2 + 8)) && (-1 < param_1)) {
    if ((int)(uint)*(ushort *)(*(int *)(DAT_009c2964 + 0x18) + 0x12) < param_1) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(DAT_009c2964 + 0x18) +
              (uint)*(ushort *)(*(int *)(DAT_009c2964 + 0x1c) + param_1 * 2) * 4;
    }
    iVar6 = *(int *)(param_3 + 0xc) - *(int *)(param_3 + 0x18);
    iVar5 = -1;
    uVar1 = FUN_007c4b80();
    iVar2 = FUN_007c4b80();
    uVar4 = *(uint *)(param_2 + 8) >> 0x1c & 3;
    if (uVar4 == 1) {
      iVar5 = FUN_007c4b80();
      *param_4 = iVar5 - iVar6;
      iVar5 = (iVar2 + 1U) % (*(uint *)(iVar3 + 4) >> 0x14 & 0xf) + 1;
    }
    else if (uVar4 == 2) {
      uVar4 = FUN_007c4b80();
      *param_4 = *(uint *)(param_3 + 0x18) % uVar4;
      uVar4 = *(uint *)(iVar3 + 4) >> 0x14 & 0xf;
      iVar5 = (uVar4 - uVar1 % uVar4) + 1;
    }
    else if (uVar4 == 3) {
      iVar3 = FUN_007c4b80();
      *param_4 = iVar3 - iVar6;
      iVar5 = 1;
    }
    if (*param_4 != 0) {
      *param_4 = *param_4 + DAT_009c2980;
    }
    return iVar5;
  }
  return 1;
}

