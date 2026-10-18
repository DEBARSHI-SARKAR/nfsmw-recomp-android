/* speed.exe 00679580 FUN_00679580; analysis pseudocode, not buildable source.
 * calls 00452430 FUN_00452430
 * calls 0066c940 FUN_0066c940
 * calls 0066c9a0 FUN_0066c9a0
 * calls 00678ce0 FUN_00678ce0
 */

undefined1 FUN_00679580(undefined4 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  cVar1 = FUN_0066c9a0(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  piVar3 = (int *)*DAT_0092c4e8;
  if (piVar3 != DAT_0092c4e8) {
    do {
      iVar2 = FUN_00452430();
      if (piVar3[0xb] == iVar2) {
        *param_2 = piVar3[5];
        param_2[1] = piVar3[6];
        param_2[2] = piVar3[7];
        return 1;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != DAT_0092c4e8);
  }
  FUN_00452430();
  cVar1 = FUN_00678ce0(param_1,0,0);
  if (cVar1 != '\0') {
    FUN_0066c940();
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return 1;
  }
  return 0;
}

