/* speed.exe 00661aa0 FUN_00661aa0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 00660b40 FUN_00660b40
 * calls 00460d20 FUN_00460d20
 * calls 00463ca0 FUN_00463ca0
 * calls 00661a30 FUN_00661a30
 * calls 00462830 FUN_00462830
 * calls 00660c10 FUN_00660c10
 * calls 00466340 FUN_00466340
 * calls 00460cd0 FUN_00460cd0
 */

void FUN_00661aa0(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  if (2 < (DAT_00925904 - DAT_00925908) + DAT_0092590c) {
    return;
  }
  do {
    if ((int **)DAT_00925b1c == &DAT_00925b1c) {
      return;
    }
    FUN_00462830(&LAB_0064ccd0);
    if ((0 < DAT_0092590c) && (iVar4 = FUN_00460d20(DAT_00925b1c[3],&DAT_00925748), iVar4 != 0)) {
      return;
    }
    if (DAT_008f8168 != 0) {
      piVar5 = (int *)FUN_00466340(DAT_00925900);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        *piVar5 = 0;
        piVar5[1] = 0;
        piVar5[2] = 0;
        piVar5[3] = 0;
        *(undefined2 *)((int)piVar5 + 0x12) = 0;
        *(undefined2 *)(piVar5 + 4) = 0;
      }
      piVar6 = DAT_00925b1c;
      if ((int **)DAT_00925b1c != &DAT_00925b1c) {
        do {
          cVar3 = FUN_00660c10(piVar6);
          if (cVar3 == '\0') break;
          piVar6 = (int *)*piVar6;
        } while ((int **)piVar6 != &DAT_00925b1c);
      }
      if (*(short *)((int)piVar5 + 0x12) < 2) {
        if (*piVar5 != 0) {
          FUN_004655f0(*piVar5);
        }
        FUN_00463ca0(DAT_00925900,piVar5);
      }
      else {
        FUN_00661a30();
        iVar4 = 0;
        if (0 < *(short *)((int)piVar5 + 0x12)) {
          piVar6 = piVar5 + 5;
          do {
            iVar1 = *(int *)*piVar6;
            piVar2 = (int *)((int *)*piVar6)[1];
            *piVar2 = iVar1;
            *(int **)(iVar1 + 4) = piVar2;
            iVar4 = iVar4 + 1;
            piVar6 = piVar6 + 1;
          } while (iVar4 < *(short *)((int)piVar5 + 0x12));
        }
      }
    }
    piVar5 = DAT_00925b1c;
    if (DAT_00925b1c[7] < DAT_009258f4) {
      if (DAT_0092590c != 0) {
        return;
      }
      if (DAT_009258f8 < 0xb) {
        DAT_009258f8 = DAT_009258f8 + 1;
        return;
      }
      DAT_009258f4 = 0;
      DAT_009258f8 = DAT_009258f8 + 1;
      return;
    }
    DAT_009258f8 = 0;
    FUN_00460cd0(&DAT_00925748,DAT_00925b1c[3],100);
    FUN_00660b40();
    iVar4 = *piVar5;
    piVar6 = (int *)piVar5[1];
    *piVar6 = iVar4;
    *(int **)(iVar4 + 4) = piVar6;
    piVar6 = DAT_009259b4;
    *DAT_009259b4 = (int)piVar5;
    DAT_009259b4 = piVar5;
    piVar5[1] = (int)piVar6;
    *piVar5 = (int)&DAT_009259b0;
    DAT_0092590c = DAT_0092590c + 1;
    if (2 < (DAT_00925904 - DAT_00925908) + DAT_0092590c) {
      return;
    }
  } while( true );
}

