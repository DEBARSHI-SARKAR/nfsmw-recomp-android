/* speed.exe 00797080 FUN_00797080; analysis pseudocode, not buildable source.
 * calls 00794f80 FUN_00794f80
 * calls 00840c60 FUN_00840c60
 */

undefined4 FUN_00797080(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00794f80();
  if (*(int *)(iVar1 + 0x38) == 0) {
    return 0;
  }
  iVar1 = FUN_00794f80(0x73656c66);
  uVar2 = FUN_00840c60(*(undefined4 *)(iVar1 + 0x38));
  return uVar2;
}

