/* speed.exe 0075bde0 FUN_0075bde0; analysis pseudocode, not buildable source.
 * calls 00759c60 FUN_00759c60
 * calls 006626b0 FUN_006626b0
 */

void __fastcall FUN_0075bde0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  piVar3 = *(int **)(param_1 + 0x58);
  piVar1 = (int *)(param_1 + 0x58);
  piVar4 = (int *)0x0;
  if (piVar3 != piVar1) {
    do {
      if ((0 < piVar3[2]) && (iVar5 = piVar3[2] + -1, piVar3[2] = iVar5, iVar5 == 0)) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      }
      if (piVar3[4] != 0) {
        piVar4 = piVar3;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != piVar1);
    if (piVar4 != (int *)0x0) {
      iVar5 = *piVar4;
      piVar3 = (int *)piVar4[1];
      *piVar3 = iVar5;
      *(int **)(iVar5 + 4) = piVar3;
      puVar2 = *(undefined4 **)(param_1 + 0x5c);
      *puVar2 = piVar4;
      *(int **)(param_1 + 0x5c) = piVar4;
      piVar4[1] = (int)puVar2;
      *piVar4 = (int)piVar1;
    }
  }
  iVar5 = *(int *)(param_1 + 0x14);
  while (iVar5 != 0) {
    FUN_006626b0();
    iVar5 = *(int *)(param_1 + 0x14);
  }
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    piVar4 = (int *)*piVar3;
    FUN_00759c60(piVar3,1);
    piVar3 = piVar4;
  }
  return;
}

