/* speed.exe 00723f00 FUN_00723f00; analysis pseudocode, not buildable source.
 * calls 004fca70 thunk_FUN_006cf2b0
 */

undefined4 __fastcall FUN_00723f00(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  if (puVar1 != (undefined4 *)0x0) {
    local_18 = puVar1[2];
    local_20 = *puVar1;
    local_1c = puVar1[1];
    local_30 = puVar1[3];
    local_28 = puVar1[5];
    local_2c = puVar1[4];
    iVar2 = thunk_FUN_006cf2b0(&local_20,&local_30,0);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

