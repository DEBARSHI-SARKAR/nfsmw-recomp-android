/* speed.exe 00700e10 FUN_00700e10; analysis pseudocode, not buildable source.
 * calls 00405da0 FUN_00405da0
 * calls 005cc240 FUN_005cc240
 * calls 0065faf0 FUN_0065faf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00700e10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x10) != '\0') && (_DAT_008b0e70 < *(float *)(param_1 + 0x24))) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    uVar1 = FUN_005cc240("Event");
    iVar2 = FUN_00405da0(0,0x11,0,0);
    *(undefined4 *)(iVar2 + 4) = uVar1;
    FUN_0065faf0();
    *(undefined4 *)(param_1 + 0x20) = DAT_00925ae8;
  }
  if (*(char *)(param_1 + 0x4c) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = DAT_00925ae8;
  }
  return;
}

