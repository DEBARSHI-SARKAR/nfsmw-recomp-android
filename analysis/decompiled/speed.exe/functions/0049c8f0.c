/* speed.exe 0049c8f0 FUN_0049c8f0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0049c990 FUN_0049c990
 * calls 0049c9d0 FUN_0049c9d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0049c8f0(int param_1,float param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_007c4b80();
  if (iVar1 < 0) {
    FUN_0049c990(0,param_3);
    return;
  }
  iVar2 = *(ushort *)(param_1 + 6) - 1;
  if (iVar2 <= iVar1) {
    FUN_0049c990(iVar2,param_3);
    return;
  }
  if ((param_2 - (float)iVar1 != _DAT_00890968) && (param_4 != '\0')) {
    FUN_0049c9d0(param_2 - (float)iVar1,iVar1,iVar1 + 1,param_3);
    return;
  }
  FUN_0049c990(iVar1,param_3);
  return;
}

