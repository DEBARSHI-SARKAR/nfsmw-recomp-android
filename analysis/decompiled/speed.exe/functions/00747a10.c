/* speed.exe 00747a10 FUN_00747a10; analysis pseudocode, not buildable source.
 * calls 00739730 FUN_00739730
 */

int FUN_00747a10(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00739730(param_1,0);
  iVar2 = FUN_00739730(param_1,iVar1);
  while (iVar2 != param_2) {
    iVar3 = FUN_00739730(param_1,iVar2);
    iVar1 = iVar2;
    iVar2 = iVar3;
  }
  return iVar1;
}

