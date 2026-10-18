/* speed.exe 004c7980 FUN_004c7980; analysis pseudocode, not buildable source.
 * calls 00466440 FUN_00466440
 */

void __fastcall FUN_004c7980(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  piVar6 = (int *)(param_1 + 4);
  piVar5 = &DAT_009123ec;
  do {
    iVar3 = *piVar5;
    iVar4 = iVar3;
    if (0 < iVar3) {
      do {
        iVar4 = iVar4 + -1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      *piVar5 = iVar4;
    }
    if (piVar5[-2] != 0) {
      (**(code **)(piVar5[-3] + 8))(piVar5[-2],piVar5[-1]);
      piVar5[-2] = 0;
      piVar5[-1] = 0;
      *piVar5 = 0;
    }
    piVar1 = (int *)*piVar6;
    while (piVar1 != piVar6) {
      piVar1 = (int *)*piVar6;
      iVar3 = *piVar1;
      piVar2 = (int *)piVar1[1];
      *piVar2 = iVar3;
      *(int **)(iVar3 + 4) = piVar2;
      FUN_00466440(piVar1);
      piVar1 = (int *)*piVar6;
    }
    piVar5 = piVar5 + 0x5a;
    piVar6 = piVar6 + 2;
  } while ((int)piVar5 < 0x912824);
  return;
}

