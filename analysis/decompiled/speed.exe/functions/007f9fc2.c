/* speed.exe 007f9fc2 FUN_007f9fc2; analysis pseudocode, not buildable source.
 * calls 007cbb80 __control87
 * calls 007fbf9e FUN_007fbf9e
 * calls 007f9c08 FUN_007f9c08
 * calls 007f9e82 FUN_007f9e82
 * calls 007e99f0 FUN_007e99f0
 * calls 007f9bf3 FUN_007f9bf3
 * calls 007fc55d FUN_007fc55d
 * calls 007e9320 FUN_007e9320
 */

undefined4 __thiscall FUN_007f9fc2(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_30 [36];
  undefined4 local_c;
  uint local_8;
  
  local_8 = __control87(0,0);
  __control87(0x10000,0x30000);
  uVar1 = FUN_007f9e82();
  FUN_007fc55d(*(undefined4 *)(param_1 + 4),*(int *)(param_2 + 4) + 8,*(int *)(param_2 + 8) + -8,
               *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  FUN_007fbf9e(*(undefined4 *)(param_1 + 4),local_30);
  iVar2 = ((*(int *)(param_1 + 0xc) + 0x60) * (*(int *)(param_1 + 8) + 0x60) * 3) / 2;
  FUN_007e9320(local_c,iVar2);
  FUN_007e99f0(local_c,iVar2);
  FUN_007f9bf3(*(undefined4 *)(param_1 + 8));
  FUN_007f9c08(*(undefined4 *)(param_1 + 0xc));
  __control87(local_8,0xfffff);
  return uVar1;
}

