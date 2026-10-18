/* speed.exe 007a00f0 FUN_007a00f0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 0056e300 FUN_0056e300
 * calls 007361a0 FUN_007361a0
 * calls 0083ff00 FUN_0083ff00
 * calls 0079f090 FUN_0079f090
 * calls 00794f80 FUN_00794f80
 * calls 0079f450 FUN_0079f450
 * calls 00794790 FUN_00794790
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0079e100 FUN_0079e100
 * calls 007ec1bd FUN_007ec1bd
 * calls 0078fdd0 FUN_0078fdd0
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void FUN_007a00f0(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0079f090();
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    FUN_007ec1bd();
    InterlockedIncrement((LONG *)&DAT_009b42d4);
  }
  piVar1[1] = 0;
  piVar1[2] = 0;
  if (iVar2 != 0) {
    InterlockedDecrement((LONG *)&DAT_009b42d4);
    FUN_007ec1c8();
  }
  FUN_0079f090();
  FUN_0079e100();
  if (((0 < *(int *)(DAT_0091cf90 + 0x19c)) && ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) != 0)) &&
     (*(char *)(DAT_0091cf90 + 0x172) != '\0')) {
    FUN_007361a0();
  }
  if (DAT_009b4174 != 0) {
    FUN_00794790();
    FUN_0078fdd0();
    iVar2 = FUN_00794f80();
    *(undefined4 *)(iVar2 + 0x44) = 0;
    *(undefined4 *)(iVar2 + 0x48) = 0;
    FUN_0079f450();
  }
  FUN_0083ff00();
  if (1 < *(int *)(DAT_0091cf90 + 0x19c)) {
    FUN_0056e300(1);
  }
  return;
}

