/* speed.exe 00735650 FUN_00735650; analysis pseudocode, not buildable source.
 * calls 0078b260 FUN_0078b260
 * calls 0079f090 FUN_0079f090
 * calls 0078c2a0 FUN_0078c2a0
 */

bool FUN_00735650(void)

{
  int iVar1;
  
  iVar1 = FUN_0078b260();
  if (iVar1 != 0) {
    return true;
  }
  FUN_0079f090();
  iVar1 = FUN_0078c2a0();
  return iVar1 == 0;
}

