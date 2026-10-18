/* speed.exe 00700e80 FUN_00700e80; analysis pseudocode, not buildable source.
 * calls 00405da0 FUN_00405da0
 * calls 005cc240 FUN_005cc240
 * calls 0065faf0 FUN_0065faf0
 */

void __fastcall FUN_00700e80(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_005cc240(&DAT_00899b60);
  iVar2 = FUN_00405da0(0,0,0,0);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  FUN_0065faf0();
  param_1[8] = DAT_00925ae8;
  *(undefined1 *)(param_1 + 0x13) = 1;
  (**(code **)(*param_1 + 0xc))(0x14d);
  return;
}

