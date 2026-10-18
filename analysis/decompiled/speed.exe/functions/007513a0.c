/* speed.exe 007513a0 FUN_007513a0; analysis pseudocode, not buildable source.
 * calls 007513d0 FUN_007513d0
 */

void __fastcall FUN_007513a0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0xf0) != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    piVar2 = *(int **)(param_1 + 0x14);
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    FUN_007513d0();
    return;
  }
  return;
}

