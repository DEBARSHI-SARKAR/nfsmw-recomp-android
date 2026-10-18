/* speed.exe 0085d210 FUN_0085d210; analysis pseudocode, not buildable source.
 * calls 0083eb80 FUN_0083eb80
 * calls 00864850 FUN_00864850
 * calls 008642f0 FUN_008642f0
 * calls 008461b0 FUN_008461b0
 * calls 0083ed50 FUN_0083ed50
 * calls 00864c80 FUN_00864c80
 */

void FUN_0085d210(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0083ed50();
  *(int *)(param_1 + 0x34) = iVar1;
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x174) != 0) {
      iVar1 = FUN_008642f0(param_1 + 0x3c,0xe4a,param_1 + 8,&DAT_00890978);
      *(int *)(param_1 + 0x38) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x174) = 0;
      }
    }
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_00864c80(*(int *)(param_1 + 0x6c),0x74696d65,*(undefined4 *)(param_1 + 0xdc));
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      iVar1 = *(int *)(param_1 + 0x194) * *(int *)(param_1 + 0xe0);
      if (60000 < iVar1) {
        iVar1 = 60000;
      }
      FUN_00864850(*(int *)(param_1 + 0x38),0x74696d65,iVar1,0,0);
    }
    FUN_008461b0(param_1 + 0x74,param_2,0x20);
    puVar2 = (undefined4 *)(param_1 + 0x94);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
    FUN_0083eb80(*(undefined4 *)(param_1 + 0x34),param_1 + 8,param_1 + 0x74,&DAT_00890978);
  }
  return;
}

