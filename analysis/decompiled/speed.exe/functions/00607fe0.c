/* speed.exe 00607fe0 FUN_00607fe0; analysis pseudocode, not buildable source.
 * calls 006126a0 FUN_006126a0
 * calls 00606b60 FUN_00606b60
 */

void __fastcall FUN_00607fe0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_ESI;
  
  puVar1 = *(undefined4 **)(unaff_ESI + 8);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  iVar2 = *(int *)(unaff_ESI + 8);
  *(undefined4 *)(iVar2 + 8) = *in_EAX;
  *(undefined4 *)(iVar2 + 0xc) = in_EAX[1];
  iVar2 = *(int *)(unaff_ESI + 8);
  *(undefined4 *)(iVar2 + 0x10) = *param_2;
  *(undefined4 *)(iVar2 + 0x14) = param_2[1];
  iVar2 = *(int *)(unaff_ESI + 8);
  *(undefined4 *)(iVar2 + 0x18) = *param_1;
  *(undefined4 *)(iVar2 + 0x1c) = param_1[1];
  if (*(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 8) < 0x21) {
    FUN_00606b60();
  }
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + 0x20;
  FUN_006126a0();
  return;
}

