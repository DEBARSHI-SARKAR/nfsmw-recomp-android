/* speed.exe 0075b1e0 FUN_0075b1e0; analysis pseudocode, not buildable source.
 * calls 0075b130 FUN_0075b130
 */

void FUN_0075b1e0(undefined4 param_1)

{
  undefined *puVar1;
  
  if (DAT_009b27e4 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = (undefined *)(DAT_009b27e4 + -0x10);
  }
  while (puVar1 != &DAT_009b27d4) {
    FUN_0075b130(param_1);
    if (*(int *)(puVar1 + 0x10) == 0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = (undefined *)(*(int *)(puVar1 + 0x10) + -0x10);
    }
  }
  return;
}

