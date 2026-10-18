/* speed.exe 00830260 FUN_00830260; analysis pseudocode, not buildable source.
 * calls 0082c1d0 FUN_0082c1d0
 * calls 0082bfd0 FUN_0082bfd0
 * calls 0082c020 FUN_0082c020
 * calls 0082fe00 FUN_0082fe00
 * calls 0082ff00 FUN_0082ff00
 * calls 00830d40 FUN_00830d40
 */

int FUN_00830260(int param_1,int param_2,uint param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 0) {
    return -1;
  }
  sVar3 = FUN_0082ff00(param_1,param_2);
  iVar6 = (int)sVar3;
  if (((iVar6 < 0) || ((int)(uint)*(ushort *)(*(int *)(DAT_009c2964 + 0x18) + 0x12) < iVar6)) ||
     (puVar1 = (uint *)(*(int *)(DAT_009c2964 + 0x18) +
                       (uint)*(ushort *)(*(int *)(DAT_009c2964 + 0x1c) + iVar6 * 2) * 4),
     puVar1 == (uint *)0x0)) {
    return -1;
  }
  iVar2 = *(int *)(DAT_009c2964 + 0x40 + (*(byte *)((int)puVar1 + 2) & 0x1f) * 4);
  sVar3 = (short)*puVar1;
  while( true ) {
    if (0 < sVar3) {
      sVar3 = FUN_0082ff00(param_1,iVar6);
      return (int)sVar3;
    }
    uVar4 = param_3;
    if (param_4 != 0) {
      if (sVar3 == 0) {
        *(uint **)(iVar2 + 0x60) = puVar1;
        if ((puVar1[1] & 0xe0000) == 0x20000) {
          uVar4 = FUN_00830d40();
          uVar4 = uVar4 & 0x7f;
        }
        if (DAT_009c2968 != (code *)0x0) {
          (*DAT_009c2968)(*(undefined4 *)(DAT_009c2964 + 0x14),iVar6);
        }
      }
      else if (sVar3 == -1) {
        if (((*puVar1 & 0xf8000000) != 0) && (iVar6 != *(short *)(iVar2 + 6))) {
          *(uint *)(iVar2 + 8) =
               *(uint *)(iVar2 + 8) ^ ((int)*puVar1 >> 0xc ^ *(uint *)(iVar2 + 8)) & 0xf8000;
          *(short *)(iVar2 + 6) = (short)iVar6;
        }
      }
      else if (sVar3 == -2) {
        uVar4 = FUN_00830d40();
        uVar4 = uVar4 & 0x7f;
      }
      else if (((sVar3 == -3) && (iVar5 = FUN_0082bfd0(puVar1[3] & 0xffffff,0xffffffff), iVar5 != 0)
               ) && (iVar5 = FUN_0082c1d0(iVar5), iVar5 != 0)) {
        FUN_0082c020(*(uint *)(DAT_009c2964 + 0x14) | 0xf0000000,iVar5);
      }
    }
    iVar6 = FUN_0082fe00(iVar6,uVar4,param_4);
    if (iVar6 < 0) break;
    sVar3 = FUN_0082ff00(param_1,iVar6);
    iVar6 = (int)sVar3;
    if (iVar6 < 0) break;
    if ((int)(uint)*(ushort *)(*(int *)(DAT_009c2964 + 0x18) + 0x12) < iVar6) {
      return -1;
    }
    puVar1 = (uint *)(*(int *)(DAT_009c2964 + 0x18) +
                     (uint)*(ushort *)(*(int *)(DAT_009c2964 + 0x1c) + iVar6 * 2) * 4);
    if (puVar1 == (uint *)0x0) {
      return -1;
    }
    sVar3 = (short)*puVar1;
  }
  if (((DAT_009c2968 != (code *)0x0) && (param_4 != 0)) && (-1 < param_1)) {
    (*DAT_009c2968)(*(undefined4 *)(DAT_009c2964 + 0x14),iVar6);
  }
  return -1;
}

