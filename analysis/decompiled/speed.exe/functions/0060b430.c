/* speed.exe 0060b430 FUN_0060b430; analysis pseudocode, not buildable source.
 * calls 00607630 FUN_00607630
 */

void FUN_0060b430(int param_1)

{
  int unaff_ESI;
  
  *(undefined1 **)(unaff_ESI + 8) = &DAT_00890978;
  *(undefined1 **)(unaff_ESI + 4) = &DAT_00890978;
  *(undefined4 *)(unaff_ESI + 0x14) = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0xffffffff;
  *(undefined **)(unaff_ESI + 0xc) = &DAT_008a4160;
  *(char **)(unaff_ESI + 0x10) = "=(tail call)";
  FUN_00607630(unaff_ESI + 0x20,"=(tail call)",0x3c);
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  **(undefined4 **)(param_1 + 8) = 0;
  return;
}

