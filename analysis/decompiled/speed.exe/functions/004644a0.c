/* speed.exe 004644a0 FUN_004644a0; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 */

void __thiscall FUN_004644a0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  FUN_007ec1bd();
  piVar1 = *(int **)(param_1 + 4);
  do {
    if (piVar1 == (int *)(param_1 + 4)) {
LAB_004644ca:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (piVar1 == param_2) {
      if ((piVar1 != (int *)0x0) && (piVar1[2] == param_3)) {
        iVar2 = *piVar1;
        piVar1 = (int *)piVar1[1];
        *piVar1 = iVar2;
        *(int **)(iVar2 + 4) = piVar1;
        param_3 = *(int *)(param_1 + 0x2c) - param_3;
        *(int *)(param_1 + 0x2c) = param_3;
        *(int *)(param_1 + 0x38) = param_3 - *(int *)(param_1 + 0x30);
        FUN_007ec1c8();
        return;
      }
      goto LAB_004644ca;
    }
    piVar1 = (int *)*piVar1;
  } while( true );
}

