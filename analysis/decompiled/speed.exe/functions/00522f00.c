/* speed.exe 00522f00 FUN_00522f00; analysis pseudocode, not buildable source.
 * calls 005136e0 FUN_005136e0
 * calls 00513650 FUN_00513650
 * calls 00522e50 FUN_00522e50
 */

void FUN_00522f00(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = *param_1;
  while( true ) {
    if (cVar2 == '\0') {
      FUN_00522e50();
      return;
    }
    iVar3 = FUN_00513650(param_1);
    if (0xfff < iVar3 + 1) break;
    FUN_005136e0(param_1,iVar3);
    pcVar1 = param_1 + iVar3;
    param_1 = param_1 + iVar3;
    cVar2 = *pcVar1;
    while (cVar2 == ' ') {
      pcVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar2 = *pcVar1;
    }
    cVar2 = *param_1;
  }
  return;
}

