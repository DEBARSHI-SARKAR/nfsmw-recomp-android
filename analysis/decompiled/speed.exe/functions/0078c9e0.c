/* speed.exe 0078c9e0 FUN_0078c9e0; analysis pseudocode, not buildable source.
 * calls 00837240 FUN_00837240
 * calls 008371e0 FUN_008371e0
 * calls 00838260 FUN_00838260
 * calls 00838160 FUN_00838160
 * calls 008371c0 FUN_008371c0
 * calls 008376d0 FUN_008376d0
 * calls 008371a0 FUN_008371a0
 */

void __fastcall FUN_0078c9e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x958) = 0;
  *(undefined4 *)(param_1 + 0x95c) = 0;
  *(undefined4 *)(param_1 + 0x960) = 0;
  *(undefined4 *)(param_1 + 0x964) = 0;
  iVar3 = 0;
  iVar1 = FUN_00838260(*(undefined4 *)(param_1 + 0xf8));
  if (0 < iVar1) {
    do {
      if ((*(int *)(param_1 + 0xf8) == 0) || (*(int *)(DAT_0091cf90 + 0x19c) < 2)) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_008376d0(*(int *)(param_1 + 0xf8),iVar3);
      }
      iVar1 = FUN_00837240(uVar2);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x958) = *(int *)(param_1 + 0x958) + 1;
      }
      iVar1 = FUN_008371a0(uVar2);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x960) = *(int *)(param_1 + 0x960) + 1;
      }
      iVar1 = FUN_00838160(uVar2);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x95c) = *(int *)(param_1 + 0x95c) + 1;
      }
      iVar1 = FUN_008371c0(uVar2);
      if ((iVar1 != 0) || (iVar1 = FUN_008371e0(uVar2), iVar1 != 0)) {
        *(int *)(param_1 + 0x964) = *(int *)(param_1 + 0x964) + 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_00838260(*(undefined4 *)(param_1 + 0xf8));
    } while (iVar3 < iVar1);
  }
  return;
}

