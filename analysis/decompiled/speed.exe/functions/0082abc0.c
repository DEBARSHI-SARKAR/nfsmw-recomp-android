/* speed.exe 0082abc0 FUN_0082abc0; analysis pseudocode, not buildable source.
 * calls 008222a1 FUN_008222a1
 */

undefined4 __thiscall FUN_0082abc0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x74))(param_2);
  if (iVar1 != 0) {
    uVar2 = FUN_008222a1(iVar1 + 0x1c,param_3 + 0x100);
    return uVar2;
  }
  return 0xfffffff8;
}

