/* speed.exe 0045bf90 FUN_0045bf90; analysis pseudocode, not buildable source.
 * calls 00659260 FUN_00659260
 * calls 0045a0c0 FUN_0045a0c0
 * calls 005d0370 FUN_005d0370
 */

void FUN_0045bf90(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)(param_1 + 4);
  if (piVar2 != *(int **)(param_1 + 4)) {
    do {
      iVar1 = *(int *)((int)piVar2 + 8);
      if (*(int *)(iVar1 + 0x1c) == 0) {
        FUN_0045a0c0();
        DAT_0090dcd4 = DAT_0090dcd4 - 0x2c;
        if (DAT_0090dcd0 < DAT_0090dcd4) {
          DAT_0090dcd0 = DAT_0090dcd4;
        }
        (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(iVar1,0x2c,0);
      }
      piVar2 = (int *)**(int **)(param_1 + 4);
      if (piVar2 != *(int **)(param_1 + 4)) {
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        FUN_005d0370(piVar2,0xc,&PTR_LAB_004c5452_1_00890f10);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      }
      piVar2 = (int *)**(int **)(param_1 + 4);
    } while (piVar2 != (int *)*(int *)(param_1 + 4));
  }
  return;
}

