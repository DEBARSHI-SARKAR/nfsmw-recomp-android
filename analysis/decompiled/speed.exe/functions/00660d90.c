/* speed.exe 00660d90 FUN_00660d90; analysis pseudocode, not buildable source.
 * calls 007ec59c FUN_007ec59c
 * calls 007ec298 FUN_007ec298
 * calls 00660100 FUN_00660100
 * calls 0065a940 FUN_0065a940
 * calls 00463ca0 FUN_00463ca0
 * calls 0065e930 FUN_0065e930
 * calls 0065fe90 FUN_0065fe90
 * calls 0065a9c0 FUN_0065a9c0
 */

void FUN_00660d90(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (DAT_00925928 != 0) {
    FUN_007ec59c();
    FUN_0065e930();
  }
  piVar3 = DAT_009259b0;
  if (DAT_0092590c != 0) {
    iVar5 = DAT_009259b0[0x10];
    if (DAT_008f8160 != '\0') {
      if (DAT_009258d4 == 0) {
        if (DAT_009258d8 != 0) {
          FUN_0065fe90(iVar5,4,6);
        }
      }
      else {
        iVar5 = FUN_00660100(4,6);
        if (iVar5 != 1) {
          iVar1 = piVar3[0x10];
          while (iVar1 == 1) {
            FUN_007ec298(8);
            if (DAT_00925928 != 0) {
              FUN_007ec59c();
              FUN_0065e930();
            }
            iVar1 = piVar3[0x10];
          }
        }
      }
    }
    if (iVar5 == 2) {
      iVar5 = *piVar3;
      piVar2 = (int *)piVar3[1];
      *piVar2 = iVar5;
      *(int **)(iVar5 + 4) = piVar2;
      DAT_0092590c = DAT_0092590c + -1;
      if (piVar3[6] == piVar3[5]) {
        FUN_0065a940(0);
        FUN_0065a9c0();
        FUN_00463ca0(DAT_00925900,piVar3);
        return;
      }
      piVar3[0x10] = 0;
      puVar4 = DAT_00925b20;
      *DAT_00925b20 = (int)piVar3;
      DAT_00925b20 = piVar3;
      piVar3[1] = (int)puVar4;
      *piVar3 = (int)&DAT_00925b1c;
      return;
    }
    if (iVar5 == 3) {
      iVar5 = *piVar3;
      piVar2 = (int *)piVar3[1];
      *piVar2 = iVar5;
      *(int **)(iVar5 + 4) = piVar2;
      DAT_0092590c = DAT_0092590c + -1;
      FUN_0065a940(1);
      FUN_0065a9c0();
      FUN_00463ca0(DAT_00925900,piVar3);
    }
  }
  return;
}

