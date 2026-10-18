/* speed.exe 00607de0 FUN_00607de0; analysis pseudocode, not buildable source.
 * calls 00613880 FUN_00613880
 * calls 0060bd50 FUN_0060bd50
 * calls 00607d80 FUN_00607d80
 */

/* WARNING: Removing unreachable block (ram,0x00607e26) */

void FUN_00607de0(undefined4 param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00607d80(param_2,param_3);
  *(undefined1 *)(param_2 + 6) = 0;
  if (puVar1 == &DAT_008a3c5c) {
    if (*param_3 == 0) {
      FUN_00613880(param_1,"table index is nil");
    }
    FUN_0060bd50(param_1,param_2,param_3);
  }
  return;
}

