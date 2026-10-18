/* speed.exe 00747bb0 FUN_00747bb0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_00747bb0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)*param_1;
  iVar4 = 0;
  while( true ) {
    if (puVar2 == param_1) {
      return -1;
    }
    iVar3 = (param_2 - puVar2[0xd]) / 0xe;
    if ((-1 < iVar3) && (iVar3 < (int)puVar2[0xe])) break;
    piVar1 = puVar2 + 0xe;
    puVar2 = (undefined4 *)*puVar2;
    iVar4 = iVar4 + *piVar1;
  }
  return iVar3 + iVar4;
}

