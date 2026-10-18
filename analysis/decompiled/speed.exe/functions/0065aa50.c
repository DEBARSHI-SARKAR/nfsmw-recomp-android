/* speed.exe 0065aa50 FUN_0065aa50; analysis pseudocode, not buildable source.
 * calls 0064cf20 FUN_0064cf20
 */

int * FUN_0065aa50(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = FUN_0064cf20(param_1);
  puVar1 = DAT_00925a90;
  do {
    if ((undefined4 **)puVar1 == &DAT_00925a90) {
      return (int *)0x0;
    }
    iVar4 = 0;
    if (0 < (int)puVar1[3]) {
      piVar3 = puVar1 + 4;
      do {
        if (*piVar3 == iVar2) {
          return piVar3;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 5;
      } while (iVar4 < (int)puVar1[3]);
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

