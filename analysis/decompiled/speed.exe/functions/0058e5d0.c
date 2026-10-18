/* speed.exe 0058e5d0 FUN_0058e5d0; analysis pseudocode, not buildable source.
 * calls 00731040 FUN_00731040
 * calls 00460ca0 FUN_00460ca0
 */

int __thiscall FUN_0058e5d0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00460ca0(param_1,param_2,0x100);
  puVar2 = (undefined4 *)(param_1 + 0x100);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x134) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x130) = 1;
  *(undefined1 *)(param_1 + 0x131) = 0;
  DAT_009aac81 = 1;
  FUN_00731040(0x300000,&LAB_0058c5f0,param_1);
  return param_1;
}

