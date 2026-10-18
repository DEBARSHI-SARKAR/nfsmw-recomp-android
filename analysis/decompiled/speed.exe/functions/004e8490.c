/* speed.exe 004e8490 FUN_004e8490; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 0045f490 FUN_0045f490
 * calls 00454810 FUN_00454810
 * calls 004ba5c0 FUN_004ba5c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004e8490(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar1 = FUN_004ba5c0(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x40);
  if (iVar1 == 0) {
    return 1;
  }
  FUN_0045f490(&local_20,param_1 + 0x50);
  if (ABS(local_20 * *(float *)(iVar1 + 0x10) +
          local_18 * *(float *)(iVar1 + 0x18) + local_1c * *(float *)(iVar1 + 0x14)) <
      (float)_DAT_00898dc8) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18) = 0x7fff;
    puVar2 = (undefined4 *)FUN_00454810(0x7e744600,0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_006269b0(4);
    }
    return *puVar2;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18) = 0;
  return 8;
}

