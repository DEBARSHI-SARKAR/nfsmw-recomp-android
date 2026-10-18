/* speed.exe 004a82c0 FUN_004a82c0; analysis pseudocode, not buildable source.
 * calls 0049ddd0 FUN_0049ddd0
 * calls 0049dac0 FUN_0049dac0
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004a82c0(int param_1,float param_2,undefined4 param_3,char param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_007c4b80();
  if (iVar1 < 0) {
    FUN_0049ddd0(0,param_3,param_5);
    return;
  }
  iVar2 = *(int *)(param_1 + 0xc) + -1;
  if (iVar2 <= iVar1) {
    FUN_0049ddd0(iVar2,param_3,param_5);
    return;
  }
  if ((param_2 - (float)iVar1 != _DAT_00890968) && (param_4 != '\0')) {
    FUN_0049dac0(param_2 - (float)iVar1,iVar1,iVar1 + 1,param_3,param_5);
    return;
  }
  FUN_0049ddd0(iVar1,param_3,param_5);
  return;
}

