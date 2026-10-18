/* speed.exe 007f2fe8 FUN_007f2fe8; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_007f2fe8(uint param_1)

{
  int *piVar1;
  int iVar2;
  uint local_8;
  
  piVar1 = *(int **)(param_1 + 0x78);
  if (piVar1 != (int *)0x0) {
    local_8 = param_1;
    (**(code **)(*piVar1 + 0x24))(piVar1,&local_8);
    if ((local_8 & 1) != 0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x78) + 0x20))(*(int **)(param_1 + 0x78));
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x70) = 0;
      }
    }
  }
  return;
}

