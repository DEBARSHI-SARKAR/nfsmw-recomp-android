/* speed.exe 00513b50 FUN_00513b50; analysis pseudocode, not buildable source.
 * calls 0078c730 FUN_0078c730
 * calls 00598970 FUN_00598970
 * calls 0056bc10 FUN_0056bc10
 */

void FUN_00513b50(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == -0x6c) {
    iVar1 = FUN_0078c730();
    if (*(int *)(iVar1 + 0xfc) == 0) {
      return;
    }
    uVar2 = 0x501cdf6f;
LAB_00513b79:
    iVar1 = FUN_0056bc10(uVar2);
    if (iVar1 != 0) goto LAB_00513b92;
  }
  else if (param_2 == -5) {
    uVar2 = 0x9a58e01c;
    goto LAB_00513b79;
  }
  iVar1 = FUN_0056bc10(0x906b132a);
LAB_00513b92:
  FUN_00598970(param_1,&DAT_00890978,1,0x417b2601,0xffffffff,0xffffffff,iVar1);
  return;
}

