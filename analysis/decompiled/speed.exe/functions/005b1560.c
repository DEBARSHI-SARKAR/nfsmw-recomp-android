/* speed.exe 005b1560 FUN_005b1560; analysis pseudocode, not buildable source.
 * calls 005b1510 FUN_005b1510
 */

undefined4 __thiscall FUN_005b1560(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  while( true ) {
    if (iVar1 == 0) {
      return 1;
    }
    cVar2 = (**(code **)(*param_2 + 4))(iVar1);
    if ((cVar2 == '\0') ||
       ((*(int *)(iVar1 + 0x18) == 5 && (cVar2 = FUN_005b1510(iVar1,param_2), cVar2 == '\0'))))
    break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return 0;
}

