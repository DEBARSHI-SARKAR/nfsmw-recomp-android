/* speed.exe 007700b0 FUN_007700b0; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_007700b0(int param_1,uint param_2,char param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint in_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = *(uint **)(param_1 + 8);
  if (puVar1 != (uint *)0x0) {
    in_EAX = *puVar1;
    if (param_3 == '\0') {
      iVar5 = *(int *)(param_1 + 4);
    }
    else {
      iVar5 = 0;
    }
    if (iVar5 < (int)in_EAX) {
      uVar2 = *puVar1;
      uVar3 = puVar1[2];
      do {
        if ((int)uVar2 < (int)uVar3) {
          iVar4 = iVar5 / (int)uVar2;
          iVar6 = iVar5 % (int)uVar2;
        }
        else {
          iVar6 = puVar1[1] + 1 + iVar5;
          iVar4 = iVar6 / (int)uVar3;
          iVar6 = iVar6 % (int)uVar3;
        }
        if (param_2 == (*(ushort *)(iVar6 * 0x40 + 0x4e + (int)puVar1) & 0x7fff)) {
          return CONCAT31((int3)((uint)iVar4 >> 8),1);
        }
        in_EAX = *puVar1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)in_EAX);
    }
  }
  return in_EAX & 0xffffff00;
}

