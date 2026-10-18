/* speed.exe 0072e890 FUN_0072e890; analysis pseudocode, not buildable source.
 * calls 00660ee0 FUN_00660ee0
 */

void __thiscall FUN_0072e890(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  if ('\0' < *(char *)((int)param_2 + 0x13)) {
    do {
      if (iVar1 == 0) {
        uVar2 = *(undefined4 *)(param_2[iVar1 * 2 + 6] + 0x4c);
      }
      *(undefined4 *)(param_2[iVar1 * 2 + 6] + 0xc) = 2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(char *)((int)param_2 + 0x13));
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  FUN_00660ee0(uVar2,param_1 + 0x70,*param_2,param_2[1],&LAB_0072dab0,param_2,0);
  return;
}

