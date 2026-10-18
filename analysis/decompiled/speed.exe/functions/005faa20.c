/* speed.exe 005faa20 FUN_005faa20; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 * calls 00460d20 FUN_00460d20
 */

int __fastcall FUN_005faa20(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 4) != 0) {
    return (int)*(char *)(*(int *)(param_1 + 4) + 0x2b);
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  puVar3 = (undefined4 *)FUN_00454810(0xf6bcde1,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_006269b0(4);
  }
  uVar2 = *puVar3;
  iVar5 = 0;
  do {
    iVar4 = FUN_00460d20(uVar2,(&PTR_s_circuit_008f5cd8)[iVar5 * 2]);
    if (iVar4 == 0) {
      return (&DAT_008f5cdc)[iVar5 * 2];
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0xb);
  return -1;
}

