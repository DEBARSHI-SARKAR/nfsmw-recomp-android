/* speed.exe 0060b340 FUN_0060b340; analysis pseudocode, not buildable source.
 * calls 00607630 FUN_00607630
 */

void __fastcall FUN_0060b340(int param_1)

{
  int iVar1;
  int in_EAX;
  undefined *puVar2;
  
  iVar1 = *(int *)(in_EAX + 4);
  if (*(char *)(iVar1 + 6) != '\0') {
    *(undefined **)(param_1 + 0x10) = &DAT_008a4158;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    *(undefined **)(param_1 + 0xc) = &DAT_008a4154;
    FUN_00607630(param_1 + 0x20,*(undefined4 *)(param_1 + 0x10),0x3c);
    return;
  }
  *(int *)(param_1 + 0x10) = *(int *)(*(int *)(iVar1 + 0xc) + 0x20) + 0x10;
  iVar1 = *(int *)(*(int *)(iVar1 + 0xc) + 0x3c);
  *(int *)(param_1 + 0x1c) = iVar1;
  puVar2 = &DAT_008a414c;
  if (iVar1 != 0) {
    puVar2 = &DAT_008a4148;
  }
  *(undefined **)(param_1 + 0xc) = puVar2;
  FUN_00607630(param_1 + 0x20,*(undefined4 *)(param_1 + 0x10),0x3c);
  return;
}

