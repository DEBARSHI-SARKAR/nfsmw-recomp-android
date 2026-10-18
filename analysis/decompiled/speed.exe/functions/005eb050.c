/* speed.exe 005eb050 FUN_005eb050; analysis pseudocode, not buildable source.
 * calls 005e7d60 FUN_005e7d60
 */

void FUN_005eb050(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_2 - param_1 >> 3;
  iVar4 = iVar3 - (param_2 - param_1 >> 0x1f) >> 1;
  if (0 < iVar4) {
    iVar5 = param_1 + iVar4 * 8;
    do {
      puVar1 = (undefined4 *)(iVar5 + -4);
      puVar2 = (undefined4 *)(iVar5 + -8);
      iVar5 = iVar5 + -8;
      iVar4 = iVar4 + -1;
      FUN_005e7d60(param_1,iVar4,iVar3,*puVar2,*puVar1);
    } while (0 < iVar4);
  }
  return;
}

