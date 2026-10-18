/* speed.exe 004c6d40 FUN_004c6d40; analysis pseudocode, not buildable source.
 * calls 004c0140 FUN_004c0140
 */

void __thiscall FUN_004c6d40(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  param_2 = param_2 * 0x74;
  if (*(uint *)(&DAT_00913c58 + param_2) <= *(uint *)(&DAT_00913c5c + param_2)) {
    uVar2 = (**(code **)(*(int *)(&DAT_00913c50 + param_2) + 0xc))
                      (*(uint *)(&DAT_00913c5c + param_2) + 1);
    FUN_004c0140(uVar2);
  }
  puVar1 = (undefined4 *)(*(int *)(&DAT_00913c54 + param_2) + *(int *)(&DAT_00913c5c + param_2) * 4)
  ;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  *(int *)(&DAT_00913c5c + param_2) = *(int *)(&DAT_00913c5c + param_2) + 1;
  return;
}

