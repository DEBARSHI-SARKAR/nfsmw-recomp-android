/* speed.exe 00606d50 FUN_00606d50; analysis pseudocode, not buildable source.
 * calls 00606cf0 FUN_00606cf0
 */

void FUN_00606d50(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((*(byte *)(param_1 + 0x30) & 2) != 0) {
    param_3 = (undefined4 *)FUN_00606cf0();
  }
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x14) + -0x18);
  *(undefined4 **)(param_1 + 0x14) = puVar3;
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + -8);
  *(undefined4 *)(param_1 + 0xc) = *puVar3;
  if (param_2 != 0) {
    do {
      if (*(undefined4 **)(param_1 + 8) <= param_3) break;
      *puVar1 = *param_3;
      puVar3 = param_3 + 1;
      param_3 = param_3 + 2;
      puVar2 = puVar1 + 2;
      param_2 = param_2 + -1;
      puVar1[1] = *puVar3;
      puVar1 = puVar2;
    } while (param_2 != 0);
    if (0 < param_2) {
      do {
        *puVar1 = 0;
        puVar1 = puVar1 + 2;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  *(undefined4 **)(param_1 + 8) = puVar1;
  return;
}

