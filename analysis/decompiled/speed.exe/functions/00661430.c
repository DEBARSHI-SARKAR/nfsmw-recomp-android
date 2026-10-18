/* speed.exe 00661430 FUN_00661430; analysis pseudocode, not buildable source.
 * calls 00660100 FUN_00660100
 * calls 0045ce40 FUN_0045ce40
 * calls 00462890 FUN_00462890
 * calls 0065fe90 FUN_0065fe90
 */

void FUN_00661430(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_009258d4 != 0) {
    uVar1 = FUN_00660100(0x20,10);
    FUN_00462890(uVar1,&DAT_008ec4e0);
    return;
  }
  iVar2 = FUN_0045ce40();
  if (DAT_009258d8 != 0) {
    FUN_0065fe90(iVar2 + 0x12345678,0x20,10);
  }
  FUN_00462890(iVar2 + 0x12345678,&DAT_008ec4e0);
  return;
}

