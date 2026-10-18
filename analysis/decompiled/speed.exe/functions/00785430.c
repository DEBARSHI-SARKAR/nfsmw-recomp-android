/* speed.exe 00785430 FUN_00785430; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00782cb0 FUN_00782cb0
 * calls 005d0370 FUN_005d0370
 * calls 00781bf0 FUN_00781bf0
 */

void FUN_00785430(int param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = *(undefined4 *)(param_1 + 0x30);
  local_c = *(undefined4 *)(param_1 + 0x34);
  local_8 = *(undefined4 *)(param_1 + 0x38);
  local_4 = *(undefined4 *)(param_1 + 0x3c);
  FUN_00782cb0(&local_10,0,1,param_1);
  if ((*(uint *)(param_1 + 0x10) & 0x10000) == 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      thunk_FUN_007c7250(*(int *)(param_1 + 0x18));
    }
    if (DAT_009b3904 != 0) {
      FUN_00781bf0(param_1);
    }
    FUN_005d0370(param_1,0x40,0);
  }
  return;
}

