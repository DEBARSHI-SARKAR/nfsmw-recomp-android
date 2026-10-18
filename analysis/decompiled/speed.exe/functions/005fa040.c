/* speed.exe 005fa040 FUN_005fa040; analysis pseudocode, not buildable source.
 * calls 005f8ea0 FUN_005f8ea0
 */

int __thiscall FUN_005fa040(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005f8ea0(*(undefined4 *)(param_1 + 4),0x3d4e5abd);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_2 + 4) = uVar1;
  return param_2;
}

