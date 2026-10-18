/* speed.exe 005ee870 FUN_005ee870; analysis pseudocode, not buildable source.
 * calls 005ed6f0 FUN_005ed6f0
 * calls 0061fd00 FUN_0061fd00
 * calls 005ec5b0 FUN_005ec5b0
 */

void __thiscall FUN_005ee870(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_4;
  
  iVar2 = param_2;
  if (*(int *)(param_1 + 0x2c) != param_2) {
    local_4 = param_1;
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_005ed6f0();
    }
    piVar3 = (int *)FUN_005ec5b0(&local_4,&param_2);
    iVar1 = *piVar3;
    piVar3 = *(int **)(iVar1 + 0x14);
    if (piVar3 != *(int **)(iVar1 + 0x18)) {
      do {
        FUN_0061fd00(*(undefined4 *)(*(int *)(*piVar3 + 0xc) + 4),param_1);
        piVar3 = piVar3 + 1;
      } while (piVar3 != *(int **)(iVar1 + 0x18));
    }
    *(int *)(param_1 + 0x2c) = iVar2;
  }
  return;
}

