/* speed.exe 006ddca0 FUN_006ddca0; analysis pseudocode, not buildable source.
 * calls 00466440 FUN_00466440
 */

void FUN_006ddca0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = DAT_009877e8;
  if ((int **)DAT_00987af0 != &DAT_00987af0) {
    do {
      piVar2 = DAT_00987af0;
      iVar4 = *DAT_00987af0;
      piVar1 = (int *)DAT_00987af0[1];
      *piVar1 = iVar4;
      *(int **)(iVar4 + 4) = piVar1;
      piVar1 = (int *)piVar2[10];
      iVar4 = 0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        piVar2[10] = 0;
      }
      iVar5 = 0;
      if (0 < piVar2[4]) {
        do {
          piVar1 = *(int **)(piVar2[5] + 0x54 + iVar4);
          iVar6 = piVar2[5] + iVar4;
          if ((piVar1 != (int *)0x0) && (*(int *)(iVar6 + 0x50) != 0)) {
            (**(code **)(*piVar1 + 8))(piVar1);
            *(undefined4 *)(iVar6 + 0x50) = 0;
            *(undefined4 *)(iVar6 + 0x54) = 0;
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x68;
        } while (iVar5 < piVar2[4]);
      }
      piVar1 = DAT_009877e8;
    } while ((int **)DAT_00987af0 != &DAT_00987af0);
  }
  while ((int **)piVar1 != &DAT_009877e8) {
    (**(code **)(*(int *)piVar1[2] + 8))((int *)piVar1[2]);
    iVar4 = *piVar1;
    piVar2 = (int *)piVar1[1];
    piVar3 = (int *)*piVar1;
    *piVar2 = iVar4;
    *(int **)(iVar4 + 4) = piVar2;
    FUN_00466440(piVar1);
    piVar1 = piVar3;
  }
  return;
}

