/* speed.exe 00615720 FUN_00615720; analysis pseudocode, not buildable source.
 * calls 006069c0 FUN_006069c0
 * calls 0060b9d0 FUN_0060b9d0
 * calls 006155f0 FUN_006155f0
 */

void FUN_00615720(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x3c);
  FUN_0060b9d0(iVar1,*(undefined4 *)(iVar1 + 0x1c));
  *(undefined4 *)(iVar1 + 0x54) = 0;
  do {
    *(undefined4 **)(iVar1 + 0x14) = *(undefined4 **)(iVar1 + 0x28);
    uVar2 = **(undefined4 **)(iVar1 + 0x28);
    *(undefined4 *)(iVar1 + 8) = uVar2;
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
    *(undefined2 *)(iVar1 + 0x2e) = 0;
    iVar3 = FUN_006069c0(iVar1,&DAT_0060ba10,0);
  } while (iVar3 != 0);
  FUN_006155f0();
  return;
}

