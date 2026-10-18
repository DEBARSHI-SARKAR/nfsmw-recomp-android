/* speed.exe 008414b0 FUN_008414b0; analysis pseudocode, not buildable source.
 * calls 00841080 FUN_00841080
 */

undefined4 FUN_008414b0(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  
  uVar1 = 0;
  if ((param_2 & 0x1000) == 0) {
    if ((0 < (int)param_2) && (iVar3 = 0, 0 < *(int *)(param_1 + 0x1d20))) {
      puVar2 = (uint *)(param_1 + 0x1a20);
      do {
        if ((*puVar2 == param_2) || (param_2 == 0xffffffff)) {
          puVar2[4] = 0;
          uVar1 = 1;
        }
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 6;
      } while (iVar3 < *(int *)(param_1 + 0x1d20));
    }
    return uVar1;
  }
  uVar1 = FUN_00841080();
  return uVar1;
}

