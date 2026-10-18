/* speed.exe 004b4f00 FUN_004b4f00; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b4f00(int param_1)

{
  float fVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x44) = **(undefined4 **)(iVar2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(*(int *)(iVar2 + 0x34) + 4);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(*(int *)(iVar2 + 0x34) + 8);
  fVar1 = *(float *)(*(int *)(iVar2 + 0x34) + 0xc);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(float *)(param_1 + 0x3c) = fVar1;
  *(float *)(param_1 + 0x30) = (fVar1 / *(float *)(param_1 + 0x38)) * _DAT_00896d28;
  pcVar3 = (char *)FUN_00454810(0xeacb7696,0);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = (char *)FUN_006269b0(1);
  }
  if (*pcVar3 != '\0') {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2c) = 0x7fff;
  }
  return;
}

