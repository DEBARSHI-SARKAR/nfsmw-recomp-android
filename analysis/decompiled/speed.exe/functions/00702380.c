/* speed.exe 00702380 FUN_00702380; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_00702380(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 1;
  }
  iVar1 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x2c;
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
}

