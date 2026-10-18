/* speed.exe 0048c910 FUN_0048c910; analysis pseudocode, not buildable source.
 * calls 0048c5d0 FUN_0048c5d0
 */

void FUN_0048c910(void)

{
  undefined *puVar1;
  
  if (DAT_0091132c == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = (undefined *)(DAT_0091132c + -4);
  }
  while (puVar1 != &DAT_00911328) {
    FUN_0048c5d0();
    if (*(int *)(puVar1 + 4) == 0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = (undefined *)(*(int *)(puVar1 + 4) + -4);
    }
  }
  return;
}

