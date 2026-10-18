/* speed.exe 0058ffa0 FUN_0058ffa0; analysis pseudocode, not buildable source.
 * calls 0057f8c0 FUN_0057f8c0
 * calls 0056ecc0 FUN_0056ecc0
 * calls 00581bf0 FUN_00581bf0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00465a70 FUN_00465a70
 * calls 00460c70 FUN_00460c70
 */

void __thiscall FUN_0058ffa0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  undefined4 *puVar4;
  
  if ((param_2 == 1) && (*(int *)(param_1 + 0x14) != 0)) {
    iVar1 = FUN_0056ecc0(*(undefined4 *)(param_1 + (*(int *)(param_1 + 0x18) + 2) * 0x18));
    if (*(byte *)(iVar1 + 0x10) < 0x4c) {
      puVar4 = (undefined4 *)((uint)*(byte *)(iVar1 + 0x10) * 0x198 + 4000 + extraout_ECX);
    }
    else {
      puVar4 = (undefined4 *)0x0;
    }
    uVar2 = FUN_00581bf0();
    FUN_00460c70(param_1 + 0x470,uVar2);
    if (puVar4 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x46c) = 0;
    }
    else {
      puVar3 = (undefined4 *)FUN_00465a70(0x198,0x47);
      *(undefined4 **)(param_1 + 0x46c) = puVar3;
      for (iVar1 = 0x66; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 != 0) {
      FUN_0057f8c0();
      thunk_FUN_007c7250(iVar1);
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}

