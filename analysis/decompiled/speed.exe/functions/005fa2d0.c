/* speed.exe 005fa2d0 FUN_005fa2d0; analysis pseudocode, not buildable source.
 * calls 005f8ea0 FUN_005f8ea0
 */

void __thiscall FUN_005fa2d0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = FUN_005f8ea0(uVar1,0x3d4e5abd);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_2 + 4) = uVar1;
  return;
}

