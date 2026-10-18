/* speed.exe 00797610 FUN_00797610; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00793000 FUN_00793000
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0083ff00 FUN_0083ff00
 * calls 00794f80 FUN_00794f80
 * calls 007ec1bd FUN_007ec1bd
 * calls 00761b30 FUN_00761b30
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void FUN_00797610(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (DAT_009b42a8 != '\0') {
    FUN_007ec1bd();
    InterlockedIncrement((LONG *)&DAT_009b42d4);
    FUN_0083ff00();
    piVar2 = DAT_009b42ac;
    if ((int **)DAT_009b42ac != &DAT_009b42ac) {
      do {
        iVar1 = (*(code *)piVar2[2])(piVar2[3]);
        piVar3 = piVar2;
        if (iVar1 < 0) {
          piVar3 = (int *)piVar2[1];
          iVar1 = *piVar2;
          *piVar3 = iVar1;
          *(int **)(iVar1 + 4) = piVar3;
          thunk_FUN_007c7250(piVar2);
        }
        piVar2 = (int *)*piVar3;
      } while ((int **)*piVar3 != &DAT_009b42ac);
    }
    InterlockedDecrement((LONG *)&DAT_009b42d4);
    FUN_007ec1c8();
    FUN_00761b30(1);
    if (DAT_009b4174 != 0) {
      FUN_00794f80();
      FUN_00793000();
      return;
    }
  }
  return;
}

