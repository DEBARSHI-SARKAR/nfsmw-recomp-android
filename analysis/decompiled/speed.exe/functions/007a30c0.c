/* speed.exe 007a30c0 FUN_007a30c0; analysis pseudocode, not buildable source.
 * calls 005faa20 FUN_005faa20
 * calls 005fab40 FUN_005fab40
 * calls 0056dbe0 FUN_0056dbe0
 */

void FUN_007a30c0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    if (((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) == 0) &&
       ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0)) {
      uVar1 = FUN_005faa20();
      puVar2 = (undefined4 *)FUN_0056dbe0(uVar1);
      uVar1 = FUN_005fab40();
      *puVar2 = uVar1;
      return;
    }
    puVar2 = (undefined4 *)(DAT_0091cf90 + 0x18c);
    uVar1 = FUN_005fab40();
    *puVar2 = uVar1;
  }
  return;
}

