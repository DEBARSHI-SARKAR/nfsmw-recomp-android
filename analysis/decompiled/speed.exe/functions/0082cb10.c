/* speed.exe 0082cb10 FUN_0082cb10; analysis pseudocode, not buildable source.
 */

void FUN_0082cb10(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  DAT_009c2964[1] = 0;
  *DAT_009c2964 = -1;
  DAT_009c2964[2] = 0;
  iVar5 = 0x44;
  piVar2 = DAT_009c2964;
  iVar4 = 2;
  do {
    iVar1 = *(int *)(iVar5 + -4 + (int)piVar2);
    if ((((iVar1 != 0) && ((*(uint *)(iVar1 + 8) & 0x2000000) == 0)) && (-1 < *(short *)(iVar1 + 4))
        ) && ((*(int *)(iVar1 + 0x60) != 0 &&
              (uVar3 = *(uint *)(iVar1 + 8) & 0x7fff, (uint)piVar2[1] < uVar3)))) {
      piVar2[1] = uVar3;
      *DAT_009c2964 = iVar4 + -2;
      DAT_009c2964[2] = **(uint **)(iVar1 + 0x60) >> 0x15 & 0x3f;
      piVar2 = DAT_009c2964;
    }
    iVar1 = *(int *)(iVar5 + (int)piVar2);
    if (((iVar1 != 0) && ((*(uint *)(iVar1 + 8) & 0x2000000) == 0)) &&
       ((-1 < *(short *)(iVar1 + 4) &&
        ((*(int *)(iVar1 + 0x60) != 0 &&
         (uVar3 = *(uint *)(iVar1 + 8) & 0x7fff, (uint)piVar2[1] < uVar3)))))) {
      piVar2[1] = uVar3;
      *DAT_009c2964 = iVar4 + -1;
      DAT_009c2964[2] = **(uint **)(iVar1 + 0x60) >> 0x15 & 0x3f;
      piVar2 = DAT_009c2964;
    }
    iVar1 = *(int *)(iVar5 + 4 + (int)piVar2);
    if ((((iVar1 != 0) && ((*(uint *)(iVar1 + 8) & 0x2000000) == 0)) && (-1 < *(short *)(iVar1 + 4))
        ) && ((*(int *)(iVar1 + 0x60) != 0 &&
              (uVar3 = *(uint *)(iVar1 + 8) & 0x7fff, (uint)piVar2[1] < uVar3)))) {
      piVar2[1] = uVar3;
      *DAT_009c2964 = iVar4;
      DAT_009c2964[2] = **(uint **)(iVar1 + 0x60) >> 0x15 & 0x3f;
      piVar2 = DAT_009c2964;
    }
    iVar1 = *(int *)(iVar5 + 8 + (int)piVar2);
    if (((iVar1 != 0) && ((*(uint *)(iVar1 + 8) & 0x2000000) == 0)) &&
       ((-1 < *(short *)(iVar1 + 4) &&
        ((*(int *)(iVar1 + 0x60) != 0 &&
         (uVar3 = *(uint *)(iVar1 + 8) & 0x7fff, (uint)piVar2[1] < uVar3)))))) {
      piVar2[1] = uVar3;
      *DAT_009c2964 = iVar4 + 1;
      DAT_009c2964[2] = **(uint **)(iVar1 + 0x60) >> 0x15 & 0x3f;
      piVar2 = DAT_009c2964;
    }
    iVar1 = iVar4 + 2;
    iVar5 = iVar5 + 0x10;
    iVar4 = iVar4 + 4;
  } while (iVar1 < 0x18);
  return;
}

