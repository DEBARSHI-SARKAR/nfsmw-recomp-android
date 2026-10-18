/* speed.exe 005b0b20 FUN_005b0b20; analysis pseudocode, not buildable source.
 * calls 005b0940 FUN_005b0940
 */

void __thiscall FUN_005b0b20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((*(uint *)(param_2 + 0x20) != 0) && ((*(uint *)(param_2 + 0x20) & 1) != 0)) &&
     (*(char *)(param_2 + 0x28) != '\0')) {
    iVar1 = *(int *)(param_1 + 8);
    iVar3 = *(int *)(param_2 + 0xb0);
    iVar2 = *(int *)(param_1 + 0xc);
    iVar4 = *(int *)(param_2 + 0xac);
    if (0 < iVar3) {
      do {
        FUN_005b0940(param_2,iVar4,(float)iVar1,(float)iVar2);
        iVar4 = iVar4 + 0x10;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

