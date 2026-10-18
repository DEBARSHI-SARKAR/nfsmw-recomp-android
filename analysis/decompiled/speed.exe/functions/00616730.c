/* speed.exe 00616730 FUN_00616730; analysis pseudocode, not buildable source.
 * calls 006126a0 FUN_006126a0
 * calls 0060e250 FUN_0060e250
 * calls 007cb290 _fprintf
 * calls 00614e00 FUN_00614e00
 * calls 00614c50 FUN_00614c50
 */

void FUN_00616730(void)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 *puVar2;
  int iVar3;
  int unaff_ESI;
  
  if (in_EAX != 0) {
    FUN_00614e00();
    FUN_0060e250();
    puVar1 = *(undefined4 **)(unaff_ESI + 8);
    if ((puVar1 + -2 != (int *)0x0) && (puVar1[-2] == 6)) {
      for (puVar2 = puVar1; puVar1 + -4 < puVar2; puVar2 = puVar2 + -2) {
        *puVar2 = puVar2[-2];
        puVar2[1] = puVar2[-1];
      }
      puVar2 = *(undefined4 **)(unaff_ESI + 8);
      puVar1[-4] = *puVar2;
      puVar1[-3] = puVar2[1];
      FUN_006126a0();
      return;
    }
    if ((puVar1 + -4 == (int *)0x0) || ((puVar1[-4] != 4 && (iVar3 = FUN_00614c50(), iVar3 == 0))))
    {
      iVar3 = 0;
    }
    else {
      iVar3 = puVar1[-3] + 0x10;
    }
    _fprintf((FILE *)&DAT_00906370,"%s\n",iVar3);
    *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + -0x10;
  }
  return;
}

