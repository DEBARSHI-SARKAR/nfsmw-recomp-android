/* speed.exe 005953f0 FUN_005953f0; analysis pseudocode, not buildable source.
 * calls 005ddec0 FUN_005ddec0
 * calls 00515d70 FUN_00515d70
 * calls 007c4b80 FUN_007c4b80
 * calls 006547a0 FUN_006547a0
 * calls 00515c00 FUN_00515c00
 */

void __fastcall FUN_005953f0(int param_1)

{
  int iVar1;
  undefined1 local_20 [32];
  
  FUN_00515d70(*(undefined4 *)(param_1 + 0x2c),&DAT_008941f8,
               *(undefined4 *)(*(int *)(param_1 + 0x50) + 8));
  iVar1 = *(int *)(param_1 + 0x50);
  if (*(char *)(iVar1 + 0x1e) == '\0') {
    if (*(char *)(iVar1 + 0x1d) == '\0') {
      if (*(char *)(iVar1 + 0x1c) == '\0') {
        if (*(char *)(iVar1 + 0x21) == '\0') {
          FUN_00515c00(*(undefined4 *)(param_1 + 0x30),0xfc1bf40);
        }
        else {
          FUN_005ddec0();
          FUN_007c4b80();
          FUN_006547a0(local_20,0);
          FUN_00515d70(*(undefined4 *)(param_1 + 0x30),&DAT_008941f8,local_20);
        }
      }
      else {
        FUN_00515c00(*(undefined4 *)(param_1 + 0x30),0x5d82dba2);
      }
    }
    else {
      FUN_00515c00(*(undefined4 *)(param_1 + 0x30),0xb7b75185);
    }
  }
  else {
    FUN_00515c00(*(undefined4 *)(param_1 + 0x30),0x1e66364);
  }
  FUN_00515d70(*(undefined4 *)(param_1 + 0x4c),&DAT_0089d764,
               *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x10));
  return;
}

