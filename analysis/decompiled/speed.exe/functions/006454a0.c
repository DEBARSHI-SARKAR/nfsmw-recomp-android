/* speed.exe 006454a0 FUN_006454a0; analysis pseudocode, not buildable source.
 * calls 006454d0 FUN_006454d0
 */

undefined4 __thiscall FUN_006454a0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[7] != 0) {
    iVar1 = *param_1;
    uVar2 = FUN_006454d0(param_2);
    uVar2 = (**(code **)(iVar1 + 0x24))(uVar2);
    return uVar2;
  }
  return 0;
}

