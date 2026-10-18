/* speed.exe 0048ae80 FUN_0048ae80; analysis pseudocode, not buildable source.
 */

undefined4 * FUN_0048ae80(int param_1,int param_2)

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
      return &DAT_00911300;
    }
    if (((param_1 == *(int *)(puVar1 + 0x1c)) || (param_1 == *(int *)(puVar1 + 0x34))) &&
       ((param_2 == *(int *)(puVar1 + 0x1c) || (param_2 == *(int *)(puVar1 + 0x34))))) break;
    if (*(int *)(puVar1 + 4) == 0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = (undefined *)(*(int *)(puVar1 + 4) + -4);
    }
  }
  return (undefined4 *)CONCAT31((int3)((uint)puVar1 >> 8),1);
}

