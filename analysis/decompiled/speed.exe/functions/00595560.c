/* speed.exe 00595560 FUN_00595560; analysis pseudocode, not buildable source.
 * calls 00515d70 FUN_00515d70
 * calls 006547a0 FUN_006547a0
 * calls 00515c00 FUN_00515c00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00595560(int param_1)

{
  undefined1 local_20 [32];
  
  FUN_00515d70(*(undefined4 *)(param_1 + 0x2c),&DAT_0089d764,*(undefined4 *)(param_1 + 0x54));
  if (_DAT_00890da8 == (float)*(int *)(param_1 + 0x5c)) {
    FUN_00515c00(*(undefined4 *)(param_1 + 0x4c),0x5d82dba2);
    FUN_00515c00(*(undefined4 *)(param_1 + 0x30),0x5d82dba2);
    return;
  }
  if (_DAT_00890968 == (float)*(int *)(param_1 + 0x58) * _DAT_00890984) {
    FUN_00515c00(*(undefined4 *)(param_1 + 0x4c),0xfc1bf40);
    FUN_00515c00(*(undefined4 *)(param_1 + 0x30),0xfc1bf40);
    return;
  }
  FUN_00515d70(*(undefined4 *)(param_1 + 0x4c),&DAT_0089d764,*(int *)(param_1 + 0x5c));
  FUN_006547a0(local_20,0);
  FUN_00515d70(*(undefined4 *)(param_1 + 0x30),&DAT_008941f8,local_20);
  return;
}

