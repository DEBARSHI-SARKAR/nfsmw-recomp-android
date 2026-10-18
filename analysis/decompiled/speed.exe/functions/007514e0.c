/* speed.exe 007514e0 FUN_007514e0; analysis pseudocode, not buildable source.
 * calls 007513d0 FUN_007513d0
 */

void FUN_007514e0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar2 = (int *)(param_1 + 0xe8);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    if (*(int *)(param_1 + 0xf0) != 0) {
      iVar3 = *(int *)(param_1 + 0x10);
      piVar2 = *(int **)(param_1 + 0x14);
      *piVar2 = iVar3;
      *(int **)(iVar3 + 4) = piVar2;
      *(undefined4 *)(param_1 + 0xf0) = 0;
      FUN_007513d0();
    }
    puVar1 = (undefined4 *)(param_1 + 0x10);
    *DAT_009b0bcc = puVar1;
    puVar4 = puVar1;
    *(undefined4 **)(param_1 + 0x14) = DAT_009b0bcc;
    DAT_009b0bcc = puVar4;
    *puVar1 = &DAT_009b0bc8;
  }
  return;
}

