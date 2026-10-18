/* speed.exe 00737c00 FUN_00737c00; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00737c00(int param_1,char param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x1628);
  if (iVar1 <= *(int *)(param_1 + 0x162c)) {
    do {
      if (param_3 <= param_4) {
        puVar2 = (uint *)(param_1 + 0xb84 + iVar1 * 4 + param_3 * 0x14);
        iVar3 = (param_4 - param_3) + 1;
        do {
          if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0xfffffffc) != 0)) {
            *puVar2 = *puVar2 & 0xfffffffc | (uint)(param_2 == '\0');
          }
          puVar2 = puVar2 + 5;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 <= *(int *)(param_1 + 0x162c));
  }
  return;
}

