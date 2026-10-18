/* speed.exe 0056e560 FUN_0056e560; analysis pseudocode, not buildable source.
 * calls 005af1c0 FUN_005af1c0
 * calls 00515e20 FUN_00515e20
 * calls 005fba70 FUN_005fba70
 */

void FUN_0056e560(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_40 [64];
  
  uVar1 = FUN_005fba70();
  FUN_00515e20(local_40,0x40,&DAT_00893b40,param_1,uVar1);
  iVar2 = 0;
  do {
    if (local_40[iVar2] == '.') {
      local_40[iVar2] = '_';
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x40);
  FUN_005af1c0(local_40);
  return;
}

