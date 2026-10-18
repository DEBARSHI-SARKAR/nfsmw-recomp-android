/* speed.exe 00462610 FUN_00462610; analysis pseudocode, not buildable source.
 */

undefined * FUN_00462610(int param_1)

{
  undefined *puVar1;
  
  if (DAT_00910ee0 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = (undefined *)(DAT_00910ee0 + -4);
  }
  while( true ) {
    if (puVar1 == &DAT_00910edc) {
      return (undefined *)0x0;
    }
    if (*(int *)(puVar1 + 0xc) == param_1) break;
    if (*(int *)(puVar1 + 4) == 0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = (undefined *)(*(int *)(puVar1 + 4) + -4);
    }
  }
  return puVar1;
}

