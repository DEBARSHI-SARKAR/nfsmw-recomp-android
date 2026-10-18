/* speed.exe 00789550 FUN_00789550; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005d0370 FUN_005d0370
 * calls 007853b0 FUN_007853b0
 * calls 00652b10 thunk_FUN_007c7250
 * calls 007853f0 FUN_007853f0
 */

void __fastcall FUN_00789550(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar6 = 0;
  iVar5 = DAT_009b38a0;
  do {
    puVar2 = *(undefined4 **)(iVar6 + iVar5);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[2] = 0;
      puVar2[4] = 0;
      puVar2[1] = 0;
      puVar2[3] = 0;
      FUN_005d0370(puVar2,0x18,0);
      *(undefined4 *)(iVar6 + DAT_009b38a0) = 0;
      iVar5 = DAT_009b38a0;
    }
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x2a30);
  if (iVar5 != 0) {
    thunk_FUN_007c7250(iVar5);
    DAT_009b38a0 = 0;
  }
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 != 0) {
    FUN_007853b0();
    thunk_FUN_007c7250(iVar5);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  piVar3 = *(int **)(*(int *)(param_1 + 0x18) + 4);
  piVar7 = (int *)*piVar3;
  if (piVar7 != piVar3) {
    do {
      thunk_FUN_007c7250(piVar7[4]);
      if (*(char *)((int)piVar7 + 0x15) == '\0') {
        piVar3 = (int *)piVar7[2];
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar7 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x15);
            piVar7 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0x15);
          piVar4 = (int *)piVar7[1];
          piVar3 = piVar7;
          while ((piVar7 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0x15);
            piVar4 = (int *)piVar7[1];
            piVar3 = piVar7;
          }
        }
      }
    } while (piVar7 != *(int **)(*(int *)(param_1 + 0x18) + 4));
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (iVar5 != 0) {
    FUN_007853f0();
    thunk_FUN_007c7250(iVar5);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

