/* speed.exe 00503b60 FUN_00503b60; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_00503b60(int param_1,char param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  bVar2 = false;
  do {
    if (puVar1 == (undefined4 *)(param_1 + 8)) {
      if ((param_2 == '\0') && (!bVar2)) {
        return 0;
      }
      return 1;
    }
    if (param_2 == '\0') {
      if ((*(int *)(puVar1[0x1f] + 4) != 0) &&
         (*(char *)(*(int *)(puVar1[0x1f] + 8) + 0x112) != '\0')) {
        bVar2 = true;
        goto LAB_00503b90;
      }
    }
    else {
LAB_00503b90:
      puVar1[6] = puVar1[6] | 1;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

