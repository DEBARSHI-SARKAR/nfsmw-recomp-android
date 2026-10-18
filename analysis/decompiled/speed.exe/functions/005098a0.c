/* speed.exe 005098a0 FUN_005098a0; analysis pseudocode, not buildable source.
 * calls 004ff130 thunk_FUN_0045a430
 * calls 00463ca0 FUN_00463ca0
 * calls 00504560 FUN_00504560
 * calls 00466330 FUN_00466330
 * calls 005094c0 FUN_005094c0
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_005098a0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0x378);
  piVar2 = *(int **)(param_1 + 0x378);
  while (piVar2 != piVar5) {
    iVar3 = *piVar5;
    if (iVar3 != 0) {
      FUN_005094c0();
      FUN_00463ca0(DAT_00916068,iVar3);
    }
    piVar2 = (int *)*piVar5;
  }
  piVar5 = (int *)**(int **)(param_1 + 0x364);
  if (piVar5 != *(int **)(param_1 + 0x364)) {
    do {
      iVar3 = piVar5[4];
      if (iVar3 != 0) {
        thunk_FUN_0045a430();
        FUN_005d0370(iVar3,0xa0,0);
      }
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar4 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar4 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int **)(param_1 + 0x364));
  }
  FUN_00504560(*(undefined4 *)(*(int *)(param_1 + 0x364) + 4));
  *(int *)(*(int *)(param_1 + 0x364) + 4) = *(int *)(param_1 + 0x364);
  *(undefined4 *)(param_1 + 0x368) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(param_1 + 0x364);
  *(int *)(*(int *)(param_1 + 0x364) + 8) = *(int *)(param_1 + 0x364);
  FUN_00466330(DAT_00916060);
  DAT_00916060 = 0;
  FUN_00466330(DAT_00916064);
  DAT_00916064 = 0;
  FUN_00466330(DAT_00916068);
  DAT_00916068 = 0;
  return;
}

