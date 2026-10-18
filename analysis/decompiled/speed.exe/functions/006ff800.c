/* speed.exe 006ff800 FUN_006ff800; analysis pseudocode, not buildable source.
 * calls 006ff490 FUN_006ff490
 * calls 004655f0 FUN_004655f0
 * calls 006ff560 FUN_006ff560
 * calls 004ac040 FUN_004ac040
 */

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_006ff800(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_8 [2];
  
  local_8[1] = 1;
  uVar2 = FUN_004ac040(*(int *)(param_1 + 0x24) * 0xc,"AUD: Game speech banks",0);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  local_8[0] = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      iVar1 = local_8[0];
      FUN_006ff490(DAT_00992270,local_8 + 1,local_8,*(int *)(param_1 + 0x10) + local_8[0] * 0xc);
      local_8[0] = iVar1 + 1;
    } while (local_8[0] < *(int *)(param_1 + 0x24));
  }
  FUN_006ff560(param_1 + 0x20,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x24),
               param_1);
  FUN_004655f0(DAT_00992270);
  DAT_00992270 = 0;
  return;
}

