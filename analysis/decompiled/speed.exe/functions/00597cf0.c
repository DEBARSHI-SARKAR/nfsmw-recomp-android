/* speed.exe 00597cf0 FUN_00597cf0; analysis pseudocode, not buildable source.
 * calls 0056ada0 FUN_0056ada0
 * calls 0058ee30 FUN_0058ee30
 * calls 0056aec0 FUN_0056aec0
 */

undefined4 FUN_00597cf0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0058ee30(param_1);
  if (cVar1 != '\0') {
    return 0;
  }
  if (((((*(byte *)(DAT_0091cf90 + 300) & 1) != 0) && (param_1 == 0)) &&
      ((*(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) >> 5 & 1) == 0)) &&
     ((*(uint *)(DAT_0091cf90 + 300) >> 0x11 & 1) != 0)) {
    return 1;
  }
  cVar1 = FUN_0056aec0(param_1);
  if (cVar1 != '\0') {
    return 2;
  }
  uVar2 = FUN_0056ada0(param_1);
  return uVar2;
}

