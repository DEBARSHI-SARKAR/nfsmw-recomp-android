/* speed.exe 00595ed0 FUN_00595ed0; analysis pseudocode, not buildable source.
 * calls 00516990 FUN_00516990
 * calls 005169b0 FUN_005169b0
 * calls 00516b50 FUN_00516b50
 * calls 00585820 FUN_00585820
 */

void FUN_00595ed0(undefined *param_1,undefined *param_2,undefined *param_3)

{
  char cVar1;
  int iVar2;
  
  if (DAT_008ee348 < 1) {
    if (((param_1 != (undefined *)0x0) && (param_2 != (undefined *)0x0)) &&
       (param_3 != (undefined *)0x0)) {
      PTR_s_Uninitialized_008f3c48 = param_1;
      PTR_s_Uninitialized_008f3c4c = param_2;
      PTR_s_Uninitialized_008f3c50 = param_3;
    }
    cVar1 = FUN_00516b50("EA_Trax.fng");
    if (cVar1 != '\0') {
      FUN_005169b0("EA_Trax.fng");
    }
    cVar1 = FUN_00516b50("EA_Trax.fng");
    if (cVar1 == '\0') {
      FUN_00516990("EA_Trax.fng",0x68);
    }
    iVar2 = FUN_00585820("EA_Trax.fng");
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) != 0)) {
      *(undefined4 *)(*(int *)(iVar2 + 0x1c) + 0x2c) = DAT_00925b14;
    }
  }
  return;
}

