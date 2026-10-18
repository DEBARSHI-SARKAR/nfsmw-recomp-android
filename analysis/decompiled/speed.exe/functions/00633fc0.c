/* speed.exe 00633fc0 FUN_00633fc0; analysis pseudocode, not buildable source.
 */

void FUN_00633fc0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar2 = *param_1;
  uVar1 = 0;
  if (uVar2 != 0) {
    while (puVar3 = param_1 + 4, uVar1 != param_2) {
      uVar1 = uVar1 + 1;
      param_1 = puVar3;
      if (uVar2 <= uVar1) {
        return;
      }
    }
    uVar2 = 0;
    while ((&DAT_008a5418)[uVar2] != *puVar3) {
      uVar2 = ((uint)(&DAT_008a5418)[uVar2] < *puVar3) + 1 + uVar2 * 2;
      if (0xa0 < uVar2) {
        return;
      }
    }
    if ((uVar2 < 0xa1) && ((code *)(&PTR_LAB_008f5f40)[uVar2] != (code *)0x0)) {
      (*(code *)(&PTR_LAB_008f5f40)[uVar2])(param_1[6] + (int)puVar3);
    }
  }
  return;
}

