/* speed.exe 0078fd60 FUN_0078fd60; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

void __thiscall FUN_0078fd60(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  FUN_007ec1bd();
  InterlockedIncrement((LONG *)&DAT_009b42d4);
  piVar1 = *(int **)(param_1 + 8);
  do {
    if (piVar1 == (int *)(param_1 + 8)) {
LAB_0078fdb5:
      InterlockedDecrement((LONG *)&DAT_009b42d4);
      FUN_007ec1c8();
      return;
    }
    if ((piVar1[2] == param_2) && (piVar1[3] == param_3)) {
      iVar2 = *piVar1;
      piVar3 = (int *)piVar1[1];
      *piVar3 = iVar2;
      *(int **)(iVar2 + 4) = piVar3;
      thunk_FUN_007c7250(piVar1);
      goto LAB_0078fdb5;
    }
    piVar1 = (int *)*piVar1;
  } while( true );
}

