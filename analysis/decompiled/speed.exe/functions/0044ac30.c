/* speed.exe 0044ac30 FUN_0044ac30; analysis pseudocode, not buildable source.
 */

undefined * FUN_0044ac30(int param_1)

{
  undefined *puVar1;
  
  if (DAT_0090dabc == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = (undefined *)(DAT_0090dabc + -4);
  }
  while( true ) {
    if (puVar1 == &DAT_0090dab8) {
      return (undefined *)0x0;
    }
    if (param_1 == **(int **)(puVar1 + 0x10)) break;
    if (*(int *)(puVar1 + 4) == 0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = (undefined *)(*(int *)(puVar1 + 4) + -4);
    }
  }
  return puVar1;
}

