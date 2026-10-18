/* speed.exe 00585b50 FUN_00585b50; analysis pseudocode, not buildable source.
 */

undefined4 * FUN_00585b50(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  do {
    iVar3 = param_1;
    puVar1 = DAT_0091d904;
    if ((undefined4 **)DAT_0091d904 != &DAT_0091d904) {
      do {
        if (puVar1[5] == iVar3) {
          return puVar1;
        }
        puVar1 = (undefined4 *)*puVar1;
      } while ((undefined4 **)puVar1 != &DAT_0091d904);
    }
    piVar2 = &DAT_008f48b0;
    while( true ) {
      if (0x8f48b7 < (int)piVar2) {
        return (undefined4 *)0x0;
      }
      param_1 = piVar2[1];
      if (iVar3 == *piVar2) break;
      piVar2 = piVar2 + 2;
    }
  } while( true );
}

