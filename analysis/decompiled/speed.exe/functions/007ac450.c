/* speed.exe 007ac450 FUN_007ac450; analysis pseudocode, not buildable source.
 * calls 00515c00 FUN_00515c00
 * calls 00515d70 FUN_00515d70
 * calls 0056dbe0 FUN_0056dbe0
 */

void __fastcall FUN_007ac450(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) == 0) &&
     ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    iVar2 = FUN_0056dbe0(0xb);
    FUN_00515d70(uVar1,&DAT_0089d764,*(undefined1 *)(iVar2 + 4));
    FUN_00515c00(*(undefined4 *)(param_1 + 0x2c),0x48494e83);
    return;
  }
  FUN_00515d70(*(undefined4 *)(param_1 + 0x30),&DAT_0089d764,*(undefined1 *)(DAT_0091cf90 + 400));
  FUN_00515c00(*(undefined4 *)(param_1 + 0x2c),0x48494e83);
  return;
}

