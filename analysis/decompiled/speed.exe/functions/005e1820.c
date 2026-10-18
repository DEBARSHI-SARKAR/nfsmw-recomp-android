/* speed.exe 005e1820 FUN_005e1820; analysis pseudocode, not buildable source.
 * calls 00452430 FUN_00452430
 */

int FUN_005e1820(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0091dfe4;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_00452430();
    if (iVar2 == param_1) break;
    iVar1 = *(int *)(iVar1 + 0x24);
    if (iVar1 == DAT_0091dfe4) {
      return 0;
    }
  }
  return iVar1;
}

