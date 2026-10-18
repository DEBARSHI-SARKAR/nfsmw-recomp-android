/* speed.exe 004bcb40 FUN_004bcb40; analysis pseudocode, not buildable source.
 * calls 0065faf0 FUN_0065faf0
 * calls 005cc240 FUN_005cc240
 * calls 004b45c0 FUN_004b45c0
 * calls 004b0ee0 FUN_004b0ee0
 */

void FUN_004bcb40(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_004b45c0();
  uVar1 = FUN_005cc240(&DAT_008970d0);
  iVar2 = FUN_004b0ee0(0,0,0,0);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  FUN_0065faf0();
  return;
}

