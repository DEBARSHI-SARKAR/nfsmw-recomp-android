/* speed.exe 0048d1a0 FUN_0048d1a0; analysis pseudocode, not buildable source.
 * calls 0048d050 FUN_0048d050
 */

void FUN_0048d1a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined *puVar1;
  
  if (DAT_0091132c == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = (undefined *)(DAT_0091132c + -4);
  }
  while( true ) {
    if (puVar1 == &DAT_00911328) {
      return;
    }
    if (*(int *)(puVar1 + 0x3c) == param_1) break;
    if (*(int *)(puVar1 + 4) == 0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = (undefined *)(*(int *)(puVar1 + 4) + -4);
    }
  }
  FUN_0048d050(param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

