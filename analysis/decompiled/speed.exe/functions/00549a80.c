/* speed.exe 00549a80 FUN_00549a80; analysis pseudocode, not buildable source.
 * calls 0078fdd0 FUN_0078fdd0
 * calls 00525220 FUN_00525220
 * calls 0078b380 FUN_0078b380
 * calls 00533bb0 FUN_00533bb0
 * calls 00794790 FUN_00794790
 * calls 0078b350 FUN_0078b350
 * calls 0079f090 FUN_0079f090
 * calls 00533db0 FUN_00533db0
 * calls 0079e100 FUN_0079e100
 */

void __fastcall FUN_00549a80(int param_1)

{
  char cVar1;
  int iVar2;
  
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x42adb44c,0xc033ea98);
  FUN_00533bb0();
  FUN_00533db0();
  *(undefined4 *)(param_1 + 0xdc) = 0xc407210;
  *(undefined1 *)(param_1 + 0xe0) = 1;
  FUN_00794790();
  cVar1 = FUN_0078b350();
  if (cVar1 != '\0') {
    iVar2 = FUN_0078b380();
    if (1 < iVar2) {
      FUN_0078fdd0();
      FUN_0079f090();
      FUN_0079e100();
      return;
    }
  }
  return;
}

