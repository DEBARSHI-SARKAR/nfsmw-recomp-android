/* speed.exe 00633f40 FUN_00633f40; analysis pseudocode, not buildable source.
 */

void FUN_00633f40(uint *param_1)

{
  uint *puVar1;
  undefined1 uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar2 = DAT_009203a0;
  DAT_009203a0 = '\0';
  uVar5 = 0;
  puVar1 = param_1;
  if (*param_1 != 0) {
    do {
      puVar4 = puVar1 + 4;
      if (DAT_009203a0 != '\0') {
        DAT_009203a0 = uVar2;
        return;
      }
      uVar3 = 0;
      do {
        if ((&DAT_008a5418)[uVar3] == *puVar4) {
          if ((uVar3 < 0xa1) && ((code *)(&PTR_LAB_008f5f40)[uVar3] != (code *)0x0)) {
            (*(code *)(&PTR_LAB_008f5f40)[uVar3])(puVar1[6] + (int)puVar4);
          }
          break;
        }
        uVar3 = ((uint)(&DAT_008a5418)[uVar3] < *puVar4) + 1 + uVar3 * 2;
      } while (uVar3 < 0xa1);
      uVar5 = uVar5 + 1;
      puVar1 = puVar4;
    } while (uVar5 < *param_1);
  }
  DAT_009203a0 = uVar2;
  return;
}

