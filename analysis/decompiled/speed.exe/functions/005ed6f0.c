/* speed.exe 005ed6f0 FUN_005ed6f0; analysis pseudocode, not buildable source.
 * calls 0061fd40 FUN_0061fd40
 * calls 005ec5b0 FUN_005ec5b0
 */

void __fastcall FUN_005ed6f0(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_4;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    local_4 = param_1;
    piVar2 = (int *)FUN_005ec5b0(&local_4,(undefined4 *)(param_1 + 0x2c));
    iVar1 = *piVar2;
    piVar2 = *(int **)(iVar1 + 0x14);
    if (piVar2 != *(int **)(iVar1 + 0x18)) {
      do {
        FUN_0061fd40(*(undefined4 *)(*(int *)(*piVar2 + 0xc) + 4),param_1);
        piVar2 = piVar2 + 1;
      } while (piVar2 != *(int **)(iVar1 + 0x18));
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

