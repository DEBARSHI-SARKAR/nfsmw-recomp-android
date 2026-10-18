/* speed.exe 006e1450 FUN_006e1450; analysis pseudocode, not buildable source.
 * calls 006ca4d0 FUN_006ca4d0
 * calls 006ca5f0 FUN_006ca5f0
 * calls 006d8680 FUN_006d8680
 * calls 006d8aa0 FUN_006d8aa0
 */

void __thiscall FUN_006e1450(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4478 + param_2 * 4) != 0) {
    iVar1 = FUN_006ca5f0(param_2,2);
    if (iVar1 != 0) {
      FUN_006ca4d0(param_2,2,param_1 + 0x4470 + param_2 * 4);
    }
    if (*(int *)(param_1 + 0x4928 + param_2 * 4) != 0) {
      FUN_006d8aa0(param_2,*(undefined4 *)(param_1 + 0x4f80 + param_2 * 4));
      *(undefined4 *)(param_2 * 0x20 + 0x472c + param_1) = 1;
      *(undefined4 *)(param_1 + 0x4928 + param_2 * 4) = 0;
    }
    if (*(int *)(param_1 + 0x4930 + param_2 * 4) != 0) {
      FUN_006d8680(param_2,*(undefined4 *)(param_1 + param_2 * 0xc + 0x4f58),
                   *(undefined4 *)(param_1 + (param_2 * 3 + 0x13d7) * 4),
                   *(undefined4 *)(param_1 + 0x4f60 + param_2 * 0xc));
      *(undefined4 *)(param_2 * 0x20 + 0x4728 + param_1) = 1;
      *(undefined4 *)(param_1 + 0x4930 + param_2 * 4) = 0;
    }
  }
  return;
}

