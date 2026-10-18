/* speed.exe 007f48a4 FUN_007f48a4; analysis pseudocode, not buildable source.
 * calls 0085e220 __getdrive
 * calls 007f3d26 FUN_007f3d26
 * calls 0085e1a0 __getdiskfree
 * calls 007f5c07 FUN_007f5c07
 * calls 007f66a8 FUN_007f66a8
 */

void __fastcall FUN_007f48a4(int param_1)

{
  uint uVar1;
  _diskfree_t *_DiskFree;
  _diskfree_t local_14;
  
  FUN_007f3d26();
  local_14.total_clusters = 0;
  local_14.avail_clusters = 0;
  local_14.sectors_per_cluster = 0;
  local_14.bytes_per_sector = 0;
  _DiskFree = &local_14;
  uVar1 = __getdrive();
  uVar1 = __getdiskfree(uVar1,_DiskFree);
  if (uVar1 == 0) {
    *(uint *)(param_1 + 0x94) = local_14.avail_clusters;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(uint *)(param_1 + 0x9c) = local_14.total_clusters;
  }
  else {
    *(undefined4 *)(param_1 + 0x90) = 7;
  }
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  FUN_007f5c07();
  FUN_007f66a8(0,*(undefined4 *)(param_1 + 0x90),param_1 + 0x8c);
  return;
}

