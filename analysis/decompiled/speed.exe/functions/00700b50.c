/* speed.exe 00700b50 FUN_00700b50; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00700b50(int param_1,uint param_2)

{
  if (((*(uint *)(param_1 + 0x24) & 0x40000) == 0) && ((*(uint *)(param_1 + 0x24) & 0x88) == 0)) {
    *(undefined4 *)(param_1 + 0x14) = DAT_00925ae8;
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 0x40000;
  }
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | param_2 | 0x80;
  return;
}

