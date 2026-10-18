/* speed.exe 0071db50 FUN_0071db50; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 * calls 00704e00 FUN_00704e00
 */

void FUN_0071db50(void)

{
  short sVar1;
  int *piVar2;
  int iStack_4;
  
  if (DAT_00993cc8 != 0) {
    piVar2 = (int *)FUN_00704e00();
    if (piVar2 != (int *)0x0) {
      sVar1 = (**(code **)(*piVar2 + 0x48))();
      iStack_4 = (0 < sVar1) + 1;
      FUN_00713b20(4,&iStack_4,&PTR_s_ExtraCops_ExtraRBAverted_00901fd4,&DAT_0099230c,0);
    }
  }
  return;
}

