/* speed.exe 0051d590 FUN_0051d590; analysis pseudocode, not buildable source.
 * calls 0051d410 FUN_0051d410
 * calls 00628cb0 FUN_00628cb0
 * calls 00634370 FUN_00634370
 */

void __fastcall FUN_0051d590(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar3 = *(int *)(param_1 + 0xe4);
  FUN_00634370();
  iVar4 = 0;
  if ((*(int *)(param_1 + 0xe4) != 1) != 0xffffffee) {
    iVar3 = (-(uint)(iVar3 != 1) & 2) * 0xc;
    puVar5 = (undefined4 *)(param_1 + 0xf4);
    do {
      iVar1 = FUN_00628cb0(iVar4);
      puVar2 = (undefined4 *)(iVar1 + iVar3);
      *puVar2 = puVar5[-3];
      puVar2[1] = puVar5[-2];
      puVar2[2] = puVar5[-1];
      iVar1 = FUN_00628cb0(iVar4);
      puVar2 = (undefined4 *)(iVar1 + 0xc + iVar3);
      *puVar2 = *puVar5;
      puVar2[1] = puVar5[1];
      puVar2[2] = puVar5[2];
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 6;
    } while (iVar4 < (int)((*(int *)(param_1 + 0xe4) != 1) + 0x12));
  }
  *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x84) = *(undefined1 *)(param_1 + 0x2b0);
  FUN_0051d410();
  return;
}

