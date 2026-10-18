/* speed.exe 007817b0 FUN_007817b0; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 * calls 00780270 FUN_00780270
 * calls 007668a0 FUN_007668a0
 */

void FUN_007817b0(int param_1,int param_2)

{
  int iVar1;
  int local_10;
  int local_c;
  undefined1 local_8 [8];
  
  if ((*(uint *)(param_1 + 0x10) & 0x800000) != 0) {
    if (param_2 != 0) {
      iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_2);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
        local_10 = param_1;
        local_c = param_2;
        FUN_00780270(local_8,&local_10);
        goto LAB_00781815;
      }
    }
    FUN_007668a0(param_2);
  }
LAB_00781815:
  if ((*(uint *)(param_1 + 0x10) & 0x4000000) != 0) {
    FUN_007668a0(param_2);
  }
  if ((*(uint *)(param_1 + 0x10) & 0x4800000) == 0) {
    FUN_007668a0(param_2);
  }
  return;
}

