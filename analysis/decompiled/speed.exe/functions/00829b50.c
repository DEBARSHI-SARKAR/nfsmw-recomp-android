/* speed.exe 00829b50 FUN_00829b50; analysis pseudocode, not buildable source.
 * calls 00834e6d FUN_00834e6d
 * calls 00834ec8 FUN_00834ec8
 */

void FUN_00829b50(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint local_8;
  
  if (DAT_009c2974 != '\0') {
    local_8 = 0;
    iVar1 = FUN_00834e6d(&local_8);
    local_8 = (uint)(iVar1 == 0);
    if (local_8 != 0) {
      param_1 = param_1 & 0xf000000;
      if (((DAT_009c2954 != 0) && (*(int *)(DAT_009c2954 + 0x18) != 0)) &&
         ((*(uint *)(DAT_009c2954 + 0x14) & param_1) != 0)) {
        *(undefined4 *)(DAT_009c2954 + 0xc) = param_2;
        *(undefined4 *)(DAT_009c2954 + 0x10) = param_3;
      }
      if (((DAT_009c2958 != 0) && (*(int *)(DAT_009c2958 + 0x18) != 0)) &&
         ((*(uint *)(DAT_009c2958 + 0x14) & param_1) != 0)) {
        *(undefined4 *)(DAT_009c2958 + 0xc) = param_2;
        *(undefined4 *)(DAT_009c2958 + 0x10) = param_3;
      }
      if (((DAT_009c295c != 0) && (*(int *)(DAT_009c295c + 0x18) != 0)) &&
         ((*(uint *)(DAT_009c295c + 0x14) & param_1) != 0)) {
        *(undefined4 *)(DAT_009c295c + 0xc) = param_2;
        *(undefined4 *)(DAT_009c295c + 0x10) = param_3;
      }
      if (((DAT_009c2960 != 0) && (*(int *)(DAT_009c2960 + 0x18) != 0)) &&
         ((*(uint *)(DAT_009c2960 + 0x14) & param_1) != 0)) {
        *(undefined4 *)(DAT_009c2960 + 0xc) = param_2;
        *(undefined4 *)(DAT_009c2960 + 0x10) = param_3;
      }
      DAT_009c2964 = 0;
      FUN_00834ec8(1);
    }
  }
  return;
}

