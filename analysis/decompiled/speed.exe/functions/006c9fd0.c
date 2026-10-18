/* speed.exe 006c9fd0 FUN_006c9fd0; analysis pseudocode, not buildable source.
 * calls 007cb9d0 __ftime
 */

void __fastcall FUN_006c9fd0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_10;
  undefined4 local_c;
  ushort local_8;
  
  __ftime(&local_c);
  puVar3 = (undefined4 *)(param_1 + 0x4728);
  iVar4 = 8;
  do {
    iVar2 = 2;
    puVar1 = puVar3;
    do {
      puVar1[0x10] = 0;
      *puVar1 = 0;
      puVar1[0x30] = 0;
      puVar1[0x20] = 0;
      puVar1[0x50] = 0;
      puVar1[0x40] = 0;
      puVar1[0x70] = 0;
      puVar1[0x60] = 0;
      puVar1 = puVar1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar3 = (undefined4 *)(param_1 + 0x4938);
  puVar1 = (undefined4 *)(param_1 + 0x4930);
  local_10 = 2;
  do {
    puVar1[-2] = 0;
    *puVar1 = 0;
    puVar1[-0x9c4] = 0;
    puVar1[0x17e] = local_c;
    puVar1[0x180] = (uint)local_8;
    puVar1[0x182] = local_c;
    puVar1[0x184] = (uint)local_8;
    puVar1[0x186] = 0;
    puVar1[0x188] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 10;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  return;
}

