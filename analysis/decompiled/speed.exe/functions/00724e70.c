/* speed.exe 00724e70 FUN_00724e70; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_00724e70(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  do {
    if (*(int *)(iVar4 + param_1) != 0) {
      iVar2 = iVar4 * 8;
      iVar1 = 0x20;
      do {
        if ((((byte)(1 << ((byte)iVar2 & 7)) & *(byte *)((iVar2 >> 3) + param_1)) != 0) &&
           (iVar3 < param_3)) {
          *(short *)(param_2 + iVar3 * 2) = (short)iVar2;
          iVar3 = iVar3 + 1;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar4 = iVar4 + 4;
  } while (iVar4 < 0x15e);
  return iVar3;
}

