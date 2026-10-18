/* speed.exe 007f2f6b FUN_007f2f6b; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_007f2f6b(uint param_1)

{
  int *piVar1;
  uint local_8;
  
  piVar1 = *(int **)(param_1 + 0x78);
  if (piVar1 != (int *)0x0) {
    local_8 = param_1;
    (**(code **)(*piVar1 + 0x24))(piVar1,&local_8);
    *(uint *)(param_1 + 0x70) = local_8 & 1;
  }
  return *(undefined4 *)(param_1 + 0x70);
}

