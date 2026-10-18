/* speed.exe 00502820 FUN_00502820; analysis pseudocode, not buildable source.
 */

undefined4 * FUN_00502820(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (DAT_0091c170 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)(DAT_0091c170 + -4);
  }
  while ((puVar2 = (undefined4 *)PTR_DAT_008f23e8, puVar1 != &DAT_0091c16c &&
         (puVar2 = puVar1, puVar1[3] != param_1))) {
    if (puVar1[1] == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = (undefined4 *)(puVar1[1] + -4);
    }
  }
  return puVar2;
}

