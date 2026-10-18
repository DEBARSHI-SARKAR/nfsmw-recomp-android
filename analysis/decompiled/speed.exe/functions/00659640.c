/* speed.exe 00659640 FUN_00659640; analysis pseudocode, not buildable source.
 * calls 00722b30 FUN_00722b30
 * calls 0072c660 FUN_0072c660
 */

void FUN_00659640(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00722b30();
  puVar2 = &DAT_009a9f80;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_0072c660();
  return;
}

