/* speed.exe 00595040 FUN_00595040; analysis pseudocode, not buildable source.
 * calls 0056bb80 FUN_0056bb80
 * calls 004647e0 FUN_004647e0
 * calls 00515d70 FUN_00515d70
 * calls 00515c00 FUN_00515c00
 */

void __fastcall FUN_00595040(int param_1)

{
  int iVar1;
  undefined1 local_20 [32];
  
  FUN_00515c00(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x50));
  FUN_004647e0(local_20,0x20,*(undefined4 *)(param_1 + 0x58),(double)*(float *)(param_1 + 0x4c));
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar1 = FUN_0056bb80();
    if (iVar1 == 0) {
      iVar1 = FUN_0056bb80();
    }
    FUN_00515d70(*(undefined4 *)(param_1 + 0x30),"%s %s",local_20,iVar1);
    return;
  }
  FUN_00515d70(*(undefined4 *)(param_1 + 0x30),&DAT_008941f8,local_20);
  return;
}

