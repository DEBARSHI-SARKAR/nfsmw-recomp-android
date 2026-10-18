/* speed.exe 0044cde0 FUN_0044cde0; analysis pseudocode, not buildable source.
 * calls 0044ac30 FUN_0044ac30
 * calls 004655f0 FUN_004655f0
 * calls 007283d0 FUN_007283d0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00663f00 FUN_00663f00
 */

undefined4 FUN_0044cde0(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (DAT_0090da10 == '\0') {
    DAT_009aac81 = 0;
    iVar3 = FUN_0044ac30(param_1);
    piVar2 = DAT_0090dae0;
    if (iVar3 != 0) {
      while( true ) {
        if ((int **)piVar2 == &DAT_0090dae0) {
          return 0;
        }
        if (piVar2[2] != 0) break;
        piVar2 = (int *)*piVar2;
      }
      FUN_00663f00(piVar2[2]);
      if (piVar2[4] == 1) {
        if (*(int *)(piVar2[2] + 0x3c) != 0) {
          FUN_007283d0(*(int *)(piVar2[2] + 0x3c));
        }
      }
      else {
        if (piVar2[4] == 2) {
          iVar3 = *(int *)(piVar2[2] + 0x3c);
          if (iVar3 == 0) goto LAB_0044ce78;
        }
        else {
          iVar3 = *(int *)(piVar2[2] + 0x3c);
        }
        FUN_004655f0(iVar3);
      }
LAB_0044ce78:
      iVar3 = *piVar2;
      piVar1 = (int *)piVar2[1];
      *piVar1 = iVar3;
      *(int **)(iVar3 + 4) = piVar1;
      thunk_FUN_007c7250(piVar2);
      return 1;
    }
  }
  return 0;
}

