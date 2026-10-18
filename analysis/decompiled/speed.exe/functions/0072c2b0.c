/* speed.exe 0072c2b0 FUN_0072c2b0; analysis pseudocode, not buildable source.
 * calls 00727ee0 FUN_00727ee0
 */

void __thiscall FUN_0072c2b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(char *)(param_2 + 0x13) + -1;
  iVar2 = 0;
  if ('\0' < *(char *)(param_2 + 0x13)) {
    piVar3 = (int *)(param_2 + 0x18);
    do {
      iVar1 = *piVar3;
      *(undefined4 *)(iVar1 + 0x50) = 0;
      FUN_00727ee0(iVar1);
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar2 < *(char *)(param_2 + 0x13));
  }
  return;
}

