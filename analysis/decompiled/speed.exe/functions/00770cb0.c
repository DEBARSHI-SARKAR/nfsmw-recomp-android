/* speed.exe 00770cb0 FUN_00770cb0; analysis pseudocode, not buildable source.
 * calls 00768850 FUN_00768850
 */

void FUN_00770cb0(undefined4 param_1)

{
  undefined *puVar1;
  
  if (DAT_009b3a6c == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = (undefined *)(DAT_009b3a6c + -0x10);
  }
  while (puVar1 != &DAT_009b3a5c) {
    FUN_00768850(param_1);
    if (*(int *)(puVar1 + 0x10) == 0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = (undefined *)(*(int *)(puVar1 + 0x10) + -0x10);
    }
  }
  return;
}

